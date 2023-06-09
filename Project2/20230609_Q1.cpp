/*
Q1. 다음과 같은 형태로 출력하는 프로그램을 작성하라.
	n을 입력 받아 다음과 같이 2^n 형태의 값들을 출력하도록 프로그램을 작성하라.
	ex) n = 3
				1
			1	2	1
		1	2	4	2	1
	1	2	4	8	4	2	1
*/

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "n = ";
	cin >> n;

	for (int j = 0; j <= n; j++)
	{
		// 여백
		for (int i = n-j; i > 0; i--)
		{
			cout << "\t";
		}
		// 좌측(증가부분)
		for (int i = 0; i <= j; i++)
		{
			cout << pow(2, i) << "\t";
		}
		// 우측(감소부분)
		int i = j;
		for (int k = i - 1; k >= 0; k--)
		{
			cout << pow(2, k) << "\t";
		}

		cout << endl;
	}

	return 0;
}
