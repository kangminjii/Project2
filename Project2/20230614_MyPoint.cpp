#include "20230614_MyPoint.h"
#include <cmath>
/*
Q2. x와 y축의 점을 표시하는 MyPoint 클래스를 설계하라.
	- 좌표를 나타내는 두 개의 x,y 데이터 필드
	- 점(0,0)을 생성하는 인수 없는 생성자
	- 지정 좌표의 점을 생성하는 생성자
	- x,y 데이터 필드를 위한 각각 두 개의 get함수
	- MyPoint 유형의 한 점에서 다른 점까지의 거리를 반환하는 distance함수
	
	클래스에 대한 UML 다이어그램을 그리고, 클래스를 구현하라.
	두 개의 점 (0,0)과 (10,30.5)를 생성하고 두 점 사이의 거리를 표시하는 프로그램을 작성하라.

	생성된 좌표의 점이 circle2D 클래스의 객체나 Rectangle2D 객체의 내부에 있는지 여부를 판단하는 
	contains함수를 MyPoint 객체를 인자로 하는 프렌드 함수로 구현하라.
*/

MyPoint::MyPoint()
{
	x = 0;
	y = 0;
}
MyPoint::MyPoint(double x1, double y1)
{
	x = x1;
	y = y1;
}
MyPoint::~MyPoint()
{
}

double MyPoint::getX() const
{
	return x;
}
double MyPoint::getY() const
{
	return y;
}

double MyPoint::distance(const MyPoint& p)
{
	return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
