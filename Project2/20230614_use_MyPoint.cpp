#include "20230614_MyPoint.h"
#include "20230612_Cirect2D.h"
#include "20230614_Rectangle2D.h"
#include <iostream>

using namespace std;

// ������ ��ǥ�� ���� circle2D Ŭ������ ��ü�� Rectangle2D ��ü�� ���ο� �ִ��� ���θ� �Ǵ��ϴ� contains�Լ��� MyPoint ��ü�� ���ڷ� �ϴ� ������ �Լ��� �����϶�.
int main()
{
	MyPoint p1(0, 0);
	MyPoint p2(10, 30.5);

	cout << "�� p1�� p2 ������ �Ÿ� : " << p1.distance(p2) << endl;

	Cirect2D c1(0, 0, 1);
	Rectangle2D r1(0, 0, 20, 62);

	cout << boolalpha;
	cout << "�� p1�� c1�� ���ο� �ִ°�? " << contains(c1, p1) << endl;
	cout << "�� p1�� r1�� ���ο� �ִ°�? " << contains(r1, p1) << endl;

	cout << "�� p2�� c1�� ���ο� �ִ°�? " << contains(c1, p2) << endl;
	cout << "�� p2�� r1�� ���ο� �ִ°�? " << contains(r1, p2) << endl;

	return 0;
}