#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI &_windowAPI, Color color, Color visibility)
	:Shape(_windowAPI)
{
	windowAPI = &_windowAPI;
	lineColor = color;
	nbPoints = 0;
}

Point OpenPolyline::add(Point _point)
{
	nbPoints++;
	points.push_back(_point);
	return _point;
}

void OpenPolyline::draw()
{
	if (points.size() < 2) { throw runtime_error("Impossible de dessiner. Il y a moins de 2 points."); }
	windowAPI->setDrawingColor(lineColor);
	for (int i = 0; i < points.size()-1;i++)
	{
		windowAPI->drawLine(points.at(i), points.at(i + 1));
	}
}

Color OpenPolyline::setLineColor(Color _color)
{
	return lineColor = _color;
}
Color OpenPolyline::getLineColor()
{
	return lineColor;
}

Point OpenPolyline::getPoint()
{
	return points.back();
}

int OpenPolyline::getNumberOfPoints()
{
	return nbPoints;
}