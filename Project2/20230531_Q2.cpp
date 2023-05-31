#include <iostream>
#include <cmath>

/*
Q2. 두점 (x1, y1), (x2, y2)를 입력 받아 이 두점 사이의 거리를 출력하는 프로그램을 작성
	거리 계산 공식은
		square root ( (x2 - x1)^2 + (y2 - y1)^2 )

*/

using namespace std;

int main()
{
	double x1, x2, y1, y2;
	double distance;

	cout << "(x1, y1) 입력 : ";
	cin >> x1 >> y1;
	cout << "(x2, y2) 입력 : ";
	cin >> x2 >> y2;

	distance = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	distance = sqrt(distance);

	cout << "두 점 사이의 거리 : " << distance << endl;
}