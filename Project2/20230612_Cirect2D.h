#pragma once

class Cirect2D
{
private:
	double x;
	double y;
	double radius;

public:
	double getX() const;
	double getY() const;
	double getRadius() const;

	Cirect2D();
	Cirect2D(double x, double y, double radius);
	~Cirect2D();

	double getArea() const; // 원의 면적
	double getPerimeter() const; // 원의 둘레

	bool contains(double x, double y);
	bool contains(const Cirect2D& circle);
	bool overlaps(const Cirect2D& circle);
};