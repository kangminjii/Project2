#include <iostream>
using namespace std;

/*
Q2. p.129 연습문제 3, 5, 7
*/

int main()
{
	// #3

	double total;
	int degree, minute, second;

	cout << "위도를 도, 분, 초 단위로 입력하시오 : " << endl;
	cout << "먼저, 도각을 입력하시오 : ";
	cin >> degree;
	cout << "다음에, 분각을 입력하시오 : ";
	cin >> minute;
	cout << "끝으로, 초각을 입력하시오 : ";
	cin >> second;
	
	total = degree + (1.0 / 60) * minute + (1.0 / 60 / 60) * second;

	cout << degree << "도, " << minute << "분, " << second << "초 = " << total << "도";


	// #5

	/*long long world_people, america_people;

	cout << "세계 인구수를 입력하시오 : ";
	cin >> world_people;
	cout << "미국의 인구수를 입력하시오 : ";
	cin >> america_people;

	double rate = double(america_people) / world_people * 100.0;
	
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << rate << "%이다." << endl;*/


	// #7

	/*double europe, america;

	cout << "휘발유 소비량을 유럽 스타일(연료/거리)로 입력하시오 : ";
	cin >> europe;
	
	america = 3.875 * 62.14 / europe;
	
	cout << "미국 스타일(거리/연료)로 표기한다면 : " << america << "mpg입니다." << endl;*/

}