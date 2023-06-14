/*
Q1. 다음을 포함하는 Rectangle2D 클래스를 정의하라.
	- 직사각형의 중심을 나타내는 x,y라는 두 개의 double 데이터 필드,
		이에 대한 get 상수함수와 set 함수, 사각형의 변은 x, y축에 평행인 것으로 가정한다.
	- double 데이터 필드 width, height와 이에 대한 get 상수 함수와 set 함수
	- (x, y)는 (0, 0), width, height 는 모두 1인 기본 직사각형을 생성하는 인수 없는 생성자
	- 지정된 x, y, width, height로 직사각형을 생성하는 생성자
	- 직사각형의 면적을 반환하는 getArea() 상수 함수
	- 직사각형의 둘레를 반환하는 getPerimeter() 상수 함수
	- 지정된 점(x, y)가 생성된 직사각형의 내부에 있을 경우, true를 반환하는
		contains(double x, double y) 상수함수
	- 지정된 직사각형이 생성된 직사각형의 내부에 있을 경우, true를 반환하는
		contains(const Rectangle2D &r) 상수함수
	- 지정된 직사각형이 생성된 직사각형과 중첩되는 경우, true를 반환하는
		overlaps(const Rectangle2D &r) 상수함수

	- 클래스에 대한 UML 다이어그램을 그리고, 클래스를 구현하라.
	3 개의 Rectangle2D 객체 r1(2,2,5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4)를 생성하고,
	r1의 면적과 둘레를 화면에 출력하며, r1.contains(r2), r1.overlaps(r3)의 결과를 화면에 출력하는 테스트 프로그램을 작성하라.
*/
#include "20230614_Rectangle2D.h"
#include "20230614_MyPoint.h"
#include <cmath>

double Rectangle2D::getX() const
{
	return x;
}
double Rectangle2D::getY() const
{
	return y;
}
double Rectangle2D::getWidth()
{
	return width;
}
double Rectangle2D::getHeight()
{
	return height;
}

void Rectangle2D::setX(double x1)
{
	x = x1;
}
void Rectangle2D::setY(double y1)
{
	y = y1;
}
void Rectangle2D::setWidth(double w)
{
	width = w;
}
void Rectangle2D::setHeight(double h)
{
	height = h;
}

Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}
Rectangle2D::Rectangle2D(double x1, double y1, double w, double h)
{
	x = x1;
	y = y1;
	width = w;
	height = h;
}
Rectangle2D::~Rectangle2D()
{
}

double Rectangle2D::getArea()
{
	return	width * height;
}
double Rectangle2D::getPerimeter()
{
	return (2 * width) + (2 * height);
}

bool Rectangle2D::contains(double x1, double y1)
{
	width /= 2;
	height /= 2;
	if (x - width <= x1 && x1 <= x + width)
	{
		if (y - height <= y1 && y1 <= y + height)
			return true;
	}
	else	return false;
}
bool Rectangle2D::contains(const Rectangle2D& r)
{
	width /= 2;		
	height /= 2;
	double widthR = r.width / 2;
	double heightR = r.height / 2;

	if (abs(r.x - x) <= abs(width - widthR) && abs(r.y - y) <= abs(height - heightR))
	{
		return true;
	}
	else	return false;
}
bool Rectangle2D::overlaps(const Rectangle2D& r)
{
	width /= 2;
	height /= 2;
	double widthR = r.width / 2;
	double heightR = r.height / 2;

	if (contains(r) == false)
	{
		if (abs(r.x - x) >= width + widthR || abs(r.y - y) >= height + heightR)
		{
			return false;
		}
	}
	else	return true;
}

bool contains(const Rectangle2D& r, const MyPoint& p)
{
	if (r.x - r.width / 2 <= p.getX() && p.getX() <= r.x + r.width / 2)
	{
		if (r.y - r.height <= p.getY() && p.getY() <= r.y + r.height)
			return true;
	}
	else	return false;
}
