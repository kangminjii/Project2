#include <iostream>
using namespace std;

/*
Q1. p.129 연습문제 1.
*/

int main()
{
	int height;

	cout << "키를 센티미터 단위로 입력해주세요 : ___cm\b\b\b\b\b";
	cin >> height;

	const double cal_height = double(height) / 100;

	cout << "미터 값 : " << cal_height << "m, 센티미터 값 : " << height << "cm" << endl;

}