/*
Q1. ������ �����ϴ� Rectangle2D Ŭ������ �����϶�.
	- ���簢���� �߽��� ��Ÿ���� x,y��� �� ���� double ������ �ʵ�,
		�̿� ���� get ����Լ��� set �Լ�, �簢���� ���� x, y�࿡ ������ ������ �����Ѵ�.
	- double ������ �ʵ� width, height�� �̿� ���� get ��� �Լ��� set �Լ�
	- (x, y)�� (0, 0), width, height �� ��� 1�� �⺻ ���簢���� �����ϴ� �μ� ���� ������
	- ������ x, y, width, height�� ���簢���� �����ϴ� ������
	- ���簢���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���簢���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
	- ������ ��(x, y)�� ������ ���簢���� ���ο� ���� ���, true�� ��ȯ�ϴ�
		contains(double x, double y) ����Լ�
	- ������ ���簢���� ������ ���簢���� ���ο� ���� ���, true�� ��ȯ�ϴ�
		contains(const Rectangle2D &r) ����Լ�
	- ������ ���簢���� ������ ���簢���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ�
		overlaps(const Rectangle2D &r) ����Լ�

	- Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�.
	3 ���� Rectangle2D ��ü r1(2,2,5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4)�� �����ϰ�,
	r1�� ������ �ѷ��� ȭ�鿡 ����ϸ�, r1.contains(r2), r1.overlaps(r3)�� ����� ȭ�鿡 ����ϴ� �׽�Ʈ ���α׷��� �ۼ��϶�.
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
