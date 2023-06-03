#include <iostream>
#include <cmath>

/*
Q1. 삼각형의 3개의 점 (x1, y1), (x2, y2), (x3, y3)를 알고 있을 때 이 삼각형의 면적을 구하는 프로그램을 작성하라.
	ex) 세점 입력 : 1.5 -3.4 4.6 5 9.5 -3.4
		삼각형의 면적 : 33.6
*/
using namespace std;


int main()
{
	double x1, x2, x3;
	double y1, y2, y3;
	double S;

	cout << "세 점 (x1, y1), (x2, y2), (x3, y3)를 입력해주세요 : ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// 신발끈 공식
	S = (x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x2 * y1 + x3 * y2);
	S = abs(S) / 2;

	cout << "삼각형의 면적 : " << S << endl;

	// 헤론의 공식도 사용됨
	// S = sqrt(s(s - a)(s - b)(s - c))
	// s = (a + b + c) / 2
}