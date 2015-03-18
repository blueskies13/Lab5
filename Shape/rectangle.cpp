#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI &_windowAPI, Color color, Color visibility)
	:Shape(_windowAPI)
{
	windowAPI = &_windowAPI;
	lineColor = color;
	fillColor = visibility;
}

void Rectangle::draw()
{
	if (points.size() < 1){ throw runtime_error("Aucune position set."); }
	windowAPI->setDrawingColor(lineColor);
	windowAPI->drawRectangle(points.back(), width, height);
	windowAPI->setDrawingColor(fillColor);
	windowAPI->fillRectangle(points.back(), width, height);
}

Point Rectangle::setPosition(Point _position)
{
	if (points.size() >= 1){ throw runtime_error("Il ne peux y avoir un point par rectangle."); }
	points.push_back(_position);
	return _position;
}

int Rectangle::setHeight(int _height)
{
	if (_height < 0){ throw invalid_argument("Negative height is not possible"); }
	return height = _height;
}

int Rectangle::setWidth(int _width)
{
	if (_width < 0){ throw invalid_argument("Negative width is not possible"); }
	return width = _width;
}

Color Rectangle::setLineColor(Color _color)
{
	return lineColor = _color;
}

Color Rectangle::setFillColor(Color _color)
{
	return fillColor = _color;
}

Color Rectangle::getFillColor()
{
	return fillColor;
}

Color Rectangle::getLineColor()
{
	return lineColor;
}