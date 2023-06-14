#include "20230614_Rectangle2D.h"
#include <iostream>

using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "r1의 면적 : " << r1.getArea() << endl;
	cout << "r1의 둘레 : " << r1.getPerimeter() << endl;

	cout << boolalpha;
	cout << "r1의 내부에 r2가 있는가? " << r1.contains(r2) << endl;
	cout << "r1과 r3는 겹치는가? " << r1.overlaps(r3) << endl;
}