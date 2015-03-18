#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI &_windowAPI, Color color, Color visibility)
	:Shape(_windowAPI)
{
	windowAPI = &_windowAPI;
	lineColor = color;
	fillColor = visibility;
	radius = 0;
}

void Circle::draw()
{
	if (points.size() < 1){ throw runtime_error("Aucune position set."); }
	windowAPI->setDrawingColor(lineColor);
	windowAPI->drawCircle(points.back(),radius);
	windowAPI->setDrawingColor(fillColor);
	windowAPI->fillCircle(points.back(),radius);
}

Point Circle::setCenter(Point _position)
{
	if (points.size() >= 1){ throw runtime_error("Il ne peux y avoir un point par rectangle."); }
	points.push_back(_position);
	return _position;
}

int Circle::setRadius(int _radius)
{
	if (_radius < 0){ throw invalid_argument("Negative radius is not possible"); }
	return radius = _radius;
}

Color Circle::setLineColor(Color _color)
{
	return lineColor = _color;
}

Color Circle::setFillColor(Color _color)
{
	return fillColor = _color;
}

Color Circle::getFillColor()
{
	return fillColor;
}

Color Circle::getLineColor()
{
	return lineColor;
}