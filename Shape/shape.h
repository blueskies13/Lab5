#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI &_windowAPI, Color color = Color::WHITE, Color visibility = Color::VISIBLE);
		virtual Point add(Point _point);
		virtual void draw();
		virtual Color setLineColor(Color _color);
		virtual Color getLineColor();
		virtual Color setFillColor(Color _color);
		virtual Color getFillColor();
		virtual Point getPoint();
		virtual int getNumberOfPoints();
	private:
		IWindowAPI * windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;
		int nbPoints;
	};
}
