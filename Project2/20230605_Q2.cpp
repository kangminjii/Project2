#include <iostream>
#include <cmath>

/*
Q2. 두 원에 대해 각각의 원이 겹치는지 내부, 외부에 있는지 판단하는 프로그램을 작성하라.

	ex)  첫번째 원 x,y,r: 0.5 5.1 13
		 두번째 원 x,y,r: 1 1.7 4.5
		 >> 두번째 원은 첫번째 원의 내부에 있다.
*/

using namespace std;

void isInside(double, double, double, double, double, double);

int main()
{
	double x1, y1, r1, x2, y2, r2;

	cout << "첫 번째 원 x,y,r : ";
	cin >> x1 >> y1 >> r1;
	cout << "두 번째 원 x,y,r : ";
	cin >> x2 >> y2 >> r2;

	isInside(x1, x2, y1, y2, r1, r2);

	return 0;
}

void isInside(double x1, double x2, double y1, double y2, double r1, double r2)
{
	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	if (distance > r1 + r2)
	{
		cout << "두 원은 서로 겹치지 않습니다." << endl;
	}
	else if (distance < abs(r1 - r2))
	{
		cout << "한 원이 다른 한원의 내부에 있습니다." << endl;
	}
	else
	{
		cout << "두 원은 서로 겹칩니다." << endl;
	}
}