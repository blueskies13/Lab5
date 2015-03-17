#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI &_windowAPI);
		virtual Point add(Point _point);
		virtual void draw();
		virtual Color setLineColor(Color _color);
		virtual void getLineColor();
		virtual Color setFillColor(Color _color);
		virtual void getFillColor();
		virtual void getPoint();
		virtual void getNumberOfPoints();
	private:
		IWindowAPI * windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;
	};
}
