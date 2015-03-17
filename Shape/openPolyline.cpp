#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI &_windowAPI)
	:Shape(_windowAPI)
{
	*windowAPI = _windowAPI;
}

Point OpenPolyline::add(Point _point)
{
	points.push_back(_point);
}

void OpenPolyline::draw()
{
	windowAPI->setDrawingColor();
}

Color OpenPolyline::setLineColor(Color _color)
{
	
}
void OpenPolyline::getLineColor()
{

}
void OpenPolyline::getPoint()
{

}
void OpenPolyline::getNumberOfPoints()
{

}