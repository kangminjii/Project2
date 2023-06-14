#pragma once

class MyPoint
{
private:
	double x;
	double y;
public:
	MyPoint();
	MyPoint(double, double);
	~MyPoint();

	double getX() const;
	double getY() const;
	double distance(const MyPoint& p);
};