#include <iostream>
#include <string>

/*
Q3. 1~10 사이의 정수를 입력 받아 다음과 같은 형태로 출력하는 프로그램을 작성하라.
	ex) 라인 숫자를 입력 : 5
		 1
		212
	   32123
	  4321234
	 543212345
*/
using namespace std;

int main()
{
	int line;

	while (1)
	{
		cout << "1~10 사이의 정수를 입력해주세요 : ";
		cin >> line;
		cout << endl;
		if (1 <= line && line <= 10)	break;
	}
	
	for (int i = 1; i <= line; i++) // 행바꿈
	{
		for (int j = i; j < line; j++) // 빈칸 출력
		{
			cout << " ";
		}
		for (int j = i; j >= 1; j--) // 왼쪽 출력
		{
			cout << j;
		}
		for (int j = 1; j <= i; j++) // 오른쪽 출력
		{
			if (j == 1)	continue;
			cout << j;
		}

		cout << endl;
	}
}