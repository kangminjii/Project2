#include <iostream>
#include "20230612_Cirect2D.h"
/*
Q2. 다음을 포함하는 Cirect2D 클래스를 정의하라.
	- 원의 중심을 나타내는 x,y라는 두 개의 double 데이터 필드와 get 상수 함수.
	- double 데이터 필드 radius와 get상수 함수
	- (x, y)가 (0, 0), radius가 1인 기본원을 생성하는 인수 없는 생성자
	- 지정된 x,y의 radius로 원을 생성하는 생성자
	- 원의 면적을 반환하는 getArea() 상수 함수
	- 원의 둘레를 반환하는 getParameter() 상수 함수
	- 지정된 점 (x, y)가 생성된 원 내부에 있을 경우, true를 반환하는
	  contains(double x, double y) 상수 함수
	- 지정된 원이 생성된 원 내부에 있을 경우, true를 반환하는
	  contains(const Circle2D& circle) 상수 함수
	- 지정된 원이 생성된 원과 중첩되는 경우, true를 반환하는
	  overlaps(const Circle2D& circle) 상수 함수
	- 클래스에 대한 UML 다이어그램을 그리고 클래스를 구현하라.

	Circle2D 객체 c1(2,2,5.5), c2(2,2,5.5), c3(4,5,10.5)를 생성하고
	c1의 면적과 둘레, c1.contains(3,3), c1.contains(c2), c1.overlaps(c3) 의 결과를
	  화면에 출력하는 프로그램을 작성하라
*/

double Cirect2D::getX() const
{
	return x;
}

double Cirect2D::getY() const
{
	return y;
}

double Cirect2D::getRadius() const
{
	return radius;
}

Cirect2D::Cirect2D()
{
	x = 0;
	y = 0;
	radius = 1;
}

Cirect2D::Cirect2D(double x1, double y1, double radius1)
{
	x = x1;
	y = y1;
	radius = radius1;
}

Cirect2D::~Cirect2D()
{

}

double Cirect2D::getArea() const
{
	return radius * radius * 3.14;
}

double Cirect2D::getPerimeter() const
{
	return 2 * radius * 3.14;
}

bool Cirect2D::contains(double x1, double y1)
{
	double distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));

	if (distance <= radius)	return true;
	else					return false;
}

bool Cirect2D::contains(const Cirect2D& circle)
{
	if (sqrt(pow(circle.x - x, 2) + pow(circle.y - y, 2)) <= abs(radius - circle.radius))
	{
		return true;
	}
	else return false;
}

bool Cirect2D::overlaps(const Cirect2D& circle)
{
	double distance = sqrt(pow(circle.x - x, 2) + pow(circle.y - y, 2));

	if (contains(circle) == false)
	{
		if (distance <= circle.radius + radius)	return true;
		else return false;
	}
	else return true;
}
