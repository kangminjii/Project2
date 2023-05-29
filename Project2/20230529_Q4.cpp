#include <iostream>
#include <string>
#include <cstring>

/*
Q4. p.305 연습문제 7,8
*/

using namespace std;

struct Work
{
	string name;
	int car;
};

int main()
{
	// #7
	int number;

	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	cin >> number;

	Work* customer = new Work[number];

	for (int i = 0; i < number; i++)
	{
		cout << "자동차 #" << i + 1 << ":" << endl;

		cout << "제작업체: ";
		cin >> (customer + i)->name;
		cout << "제작년도 : ";
		cin >> (customer + i)->car;
	}

	cout << "\n현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
	for (int i = 0; i < number; i++)
	{
		cout << (customer + i)->car << "년형 " << (customer + i)->name << endl;
	}


	// #8
	char word[100];
	int count = 0;

	cout << "\n영어 단어들을 입력하시오 (끝내려면 done을 입력) :" << endl;
	
	while (1)
	{
		cin >> word;
		
		if (strcmp(word, "done") == 0)
			break;
		else	
			count++;
	}

	cout << "총 " << count << " 단어가 입력되었습니다." << endl;

}