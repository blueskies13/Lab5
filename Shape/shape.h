#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape();
		virtual ~Shape();

		virtual void add(Point _point);
		virtual void draw();

		virtual void setLineColor(Color _color);
		virtual Color getLineColor();
		virtual void setFillColor(Color _color);
		virtual Color getFillColor();
		virtual Point getPoint(int _index);
		virtual int getNumberOfPoints();

	protected:
		IWindowAPI* windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;

	};
}