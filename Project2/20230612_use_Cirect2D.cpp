/*
Q2. ������ �����ϴ� Cirect2D Ŭ������ �����϶�.
	- ���� �߽��� ��Ÿ���� x,y��� �� ���� double ������ �ʵ�� get ��� �Լ�.
	- double ������ �ʵ� radius�� get��� �Լ�
	- (x, y)�� (0, 0), radius�� 1�� �⺻���� �����ϴ� �μ� ���� ������
	- ������ x,y�� radius�� ���� �����ϴ� ������
	- ���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
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

#include "20230612_Cirect2D.h"
#include <iostream>

using namespace std;

int main()
{
	Cirect2D c1(2, 2, 5.5);
	Cirect2D c2(2, 2, 5.5);
	Cirect2D c3(4, 5, 10.5);

	cout << "c1�� ����: " << c1.getArea() << ", c1�� �ѷ�: " << c1.getPerimeter() << endl;
	cout << boolalpha;
	cout << "c1�� (3,3)�� �����ϴ°�? " << c1.contains(3, 3) << endl;
	cout << "c1�� c2�� �����ϴ°�? " << c1.contains(c2) << endl;
	cout << "c1�� c3�� ��ø�ϴ°�? " << c1.overlaps(c3) << endl;

	return 0;
}
