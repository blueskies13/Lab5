#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle: public Shape
	{
	public:
		Circle(IWindowAPI &_windowAPI, Color color = Color::WHITE, Color visibility = Color::VISIBLE);
		void draw();
		Color setLineColor(Color _color);
		Color getLineColor();
		Point setCenter(Point _position);
		int setRadius(int _radius);
		Color setFillColor(Color _color);
		Color getFillColor();
	private:
		vector<Point> points;
		IWindowAPI * windowAPI;
		Color lineColor;
		Color fillColor;
		int radius;
	};
}
