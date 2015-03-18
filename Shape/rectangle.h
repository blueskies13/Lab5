#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle: public Shape
	{
	public:
		Rectangle(IWindowAPI &_windowAPI, Color color = Color::WHITE, Color visibility = Color::VISIBLE);
		void draw();
		Color setLineColor(Color _color);
		Color getLineColor();
		int setHeight(int _height);
		int setWidth(int _width);
		Point setPosition(Point _position);
		Color setFillColor(Color _color);
		Color getFillColor();
	private:
		vector<Point> points;
		IWindowAPI * windowAPI;
		Color lineColor;
		Color fillColor;
		int height;
		int width;
	};
}