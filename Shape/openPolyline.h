#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline: public Shape
	{
	public:
		OpenPolyline(IWindowAPI &_windowAPI, Color color = Color::WHITE, Color visibility = Color::VISIBLE);
		void add(Point _point);
		void draw();
		Color setLineColor(Color _color);
	    Color getLineColor();
		Point getPoint(int _index);
		int getNumberOfPoints();
	private:
		vector<Point> points;
		IWindowAPI * windowAPI;
		Color lineColor;
		int nbPoints;
	};
}
