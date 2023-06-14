#include "20230614_MyPoint.h"
#include "20230612_Cirect2D.h"
#include "20230614_Rectangle2D.h"
#include <iostream>

using namespace std;

// 생성된 좌표의 점이 circle2D 클래스의 객체나 Rectangle2D 객체의 내부에 있는지 여부를 판단하는 contains함수를 MyPoint 객체를 인자로 하는 프렌드 함수로 구현하라.
int main()
{
	MyPoint p1(0, 0);
	MyPoint p2(10, 30.5);

	cout << "점 p1과 p2 사이의 거리 : " << p1.distance(p2) << endl;

	Cirect2D c1(0, 0, 1);
	Rectangle2D r1(0, 0, 20, 62);

	cout << boolalpha;
	cout << "점 p1은 c1의 내부에 있는가? " << contains(c1, p1) << endl;
	cout << "점 p1은 r1의 내부에 있는가? " << contains(r1, p1) << endl;

	cout << "점 p2은 c1의 내부에 있는가? " << contains(c1, p2) << endl;
	cout << "점 p2은 r1의 내부에 있는가? " << contains(r1, p2) << endl;

	return 0;
}