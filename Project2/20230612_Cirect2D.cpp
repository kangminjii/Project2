#include <iostream>
#include "20230612_Cirect2D.h"
/*
Q2. ������ �����ϴ� Cirect2D Ŭ������ �����϶�.
	- ���� �߽��� ��Ÿ���� x,y��� �� ���� double ������ �ʵ�� get ��� �Լ�.
	- double ������ �ʵ� radius�� get��� �Լ�
	- (x, y)�� (0, 0), radius�� 1�� �⺻���� �����ϴ� �μ� ���� ������
	- ������ x,y�� radius�� ���� �����ϴ� ������
	- ���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���� �ѷ��� ��ȯ�ϴ� getParameter() ��� �Լ�
	- ������ �� (x, y)�� ������ �� ���ο� ���� ���, true�� ��ȯ�ϴ�
	  contains(double x, double y) ��� �Լ�
	- ������ ���� ������ �� ���ο� ���� ���, true�� ��ȯ�ϴ�
	  contains(const Circle2D& circle) ��� �Լ�
	- ������ ���� ������ ���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ�
	  overlaps(const Circle2D& circle) ��� �Լ�
	- Ŭ������ ���� UML ���̾�׷��� �׸��� Ŭ������ �����϶�.

	Circle2D ��ü c1(2,2,5.5), c2(2,2,5.5), c3(4,5,10.5)�� �����ϰ�
	c1�� ������ �ѷ�, c1.contains(3,3), c1.contains(c2), c1.overlaps(c3) �� �����
	  ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�
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
