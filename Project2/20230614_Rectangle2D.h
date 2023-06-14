#pragma once
#include "20230614_MyPoint.h"

class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	double getX() const;
	double getY() const;
	double getWidth();
	double getHeight();

	void setX(double x);
	void setY(double y);
	void setWidth(double w);
	void setHeight(double h);

	Rectangle2D();
	Rectangle2D(double x, double y, double w, double h);
	~Rectangle2D();

	double getArea();
	double getPerimeter();

	bool contains(double x, double y);
	bool contains(const Rectangle2D& r);
	bool overlaps(const Rectangle2D& r);

	friend bool contains(const Rectangle2D& r, const MyPoint& p);
};