#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI &_windowAPI, Color color, Color visibility)
{
	*windowAPI = _windowAPI;
	lineColor = color;
	fillColor = visibility;
	nbPoints = 0;
}

void Shape::add(Point _point)
{
	nbPoints++;
	points.push_back(_point);
}

void Shape::draw()
{
	windowAPI->setDrawingColor(lineColor);
	for (int i = 0; i < points.size(); i++)
	{
		windowAPI->drawLine(points.at(i), points.at(i + 1));
	}
}

Color Shape::setLineColor(Color _color)
{
	return lineColor = _color;
}

Color Shape::getLineColor()
{
	return lineColor;
}

Color Shape::setFillColor(Color _color)
{
	return fillColor = _color;
}

Color Shape::getFillColor()
{
	return fillColor;
}

Point Shape::getPoint(int _index)
{
	return points.at(_index);
}

int Shape::getNumberOfPoints()
{
	return nbPoints;
}