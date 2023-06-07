#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Q1. 동전을 백만 번 던지는 것을 시뮬레이션하고
	앞면과 뒷면의 수를 출력하는 프로그램을 작성하라.
	다음과 같이 각 앞뒤가 몇 %씩 나오는지 계산해 출력해라

	ex)
		100		번째일 때 ... 앞면 ㅇㅇ% 뒷면 ㅇㅇ%
		...
		1000	번째일 때 ... 앞면 ㅇㅇ% 뒷면 ㅇㅇ%
		...
		10000	번째일 때 ... 앞면 ㅇㅇ% 뒷면 ㅇㅇ%
		...
		100000	번째일 때 ... 앞면 ㅇㅇ% 뒷면 ㅇㅇ%
*/

using namespace std;

int main()
{
	int temp;
	double head = 0, tail = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 1000000; i++)
	{
		temp = rand() % 2;
		if (temp == 0)	head++;
		else			tail++;
				
		if (i % 100 == 0)
		{
			cout << i << "번째일 때 ... 앞면 " << head / (head + tail) * 100 << "% 뒷면 " << tail / (head + tail) * 100 << "%" << endl;
		}
	}

	return 0;
}
