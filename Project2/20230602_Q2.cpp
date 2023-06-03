#include <iostream>

/*
Q2. 선1의 두점(x1, y1)과 (x2, y2),
	선2의 두점(x3, y3)과 (x4, y4)로 주어진 두 선의 교차점을 구하는 프로그램을 작성하라.
	
	크래머 공식을 이용하라.
	ex) 점 4개 입력 : x1, y1, x2, y2, x3, y3, x4, y4
					  2, 2,   5, -1,  4, 2,   -1, -2
		교차점은 (000, 000)이다.
		> 2 2 7 6 4 2 -1 -2
			두 직선은 평행이다.
*/

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;

	cout << "점 4개 입력 : ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	// Ax + By = E
	double A = y2 - y1;
	double B = x1 - x2;
	double E = A * x1 + B * y1;

	// Cx + Dy = F
	double C = y4 - y3;
	double D = x3 - x4;
	double F = C * x3 + D * y3;

	// DE = 평행인가?
	double DE = A * D - B * C;
	if (DE == 0)
		cout << "두 직선은 평행이다." << endl;
	else
	{
		// 크래머 공식
		double X = (E * D - B * F) / DE;
		double Y = (A * F - E * C) / DE;
		cout << "교차점은 (" << X << ", " << Y << ")이다." << endl;
	}

	return 0;
}