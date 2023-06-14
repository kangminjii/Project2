#include "20230614_Rectangle2D.h"
#include <iostream>

using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "r1�� ���� : " << r1.getArea() << endl;
	cout << "r1�� �ѷ� : " << r1.getPerimeter() << endl;

	cout << boolalpha;
	cout << "r1�� ���ο� r2�� �ִ°�? " << r1.contains(r2) << endl;
	cout << "r1�� r3�� ��ġ�°�? " << r1.overlaps(r3) << endl;
}