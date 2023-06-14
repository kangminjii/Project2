#include "20230614_MyPoint.h"
#include <cmath>
/*
Q2. x�� y���� ���� ǥ���ϴ� MyPoint Ŭ������ �����϶�.
	- ��ǥ�� ��Ÿ���� �� ���� x,y ������ �ʵ�
	- ��(0,0)�� �����ϴ� �μ� ���� ������
	- ���� ��ǥ�� ���� �����ϴ� ������
	- x,y ������ �ʵ带 ���� ���� �� ���� get�Լ�
	- MyPoint ������ �� ������ �ٸ� �������� �Ÿ��� ��ȯ�ϴ� distance�Լ�
	
	Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�.
	�� ���� �� (0,0)�� (10,30.5)�� �����ϰ� �� �� ������ �Ÿ��� ǥ���ϴ� ���α׷��� �ۼ��϶�.

	������ ��ǥ�� ���� circle2D Ŭ������ ��ü�� Rectangle2D ��ü�� ���ο� �ִ��� ���θ� �Ǵ��ϴ� 
	contains�Լ��� MyPoint ��ü�� ���ڷ� �ϴ� ������ �Լ��� �����϶�.
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
