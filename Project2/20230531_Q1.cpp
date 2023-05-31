#include <iostream>

/*
Q1. 비행기의 가속도 a와 이륙속도 v가 주어졌을 때,
	비행기가 이륙하기 위한 최소 활주 길이를 계산하는 프로그램을 작성하라.
		길이 = v^2 / 2a
	
	사용자에게 m/s 단위로 v와 m/s^2 단위로 a를 입력하도록 알려주고,
	최소 활주 길이를 출력하는 프로그램을 작성.
	ex) Speed and Accelation : 60 3.5
		Minimum runway length : 514.286
*/

using namespace std;

int main()
{
	double speed, accelation;
	double minRunwayLength;

	cout << "비행기가 이륙하기 위한 최소 활주 길이를 구하기 위한 속도와 가속도를 입력해주세요 : ";
	cin >> speed >> accelation;

	minRunwayLength = (speed * speed) / (2 * accelation);

	cout << "최소 활주 길이 : " << minRunwayLength << endl;
}