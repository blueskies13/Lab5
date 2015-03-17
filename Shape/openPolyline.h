#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline: public Shape
	{
	public:
		OpenPolyline(IWindowAPI &_windowAPI);
		Point add(Point _point);
		void draw();
		Color setLineColor(Color _color);
	    void getLineColor();
		void getPoint();
		void getNumberOfPoints();
	private:
		vector<Point> points;
		IWindowAPI * windowAPI;
		Color lineColor;
	};
}
