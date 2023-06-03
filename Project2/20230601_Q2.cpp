#include <iostream>
#include <cctype>
#include <string>

/*
Q2. 게임에서 비밀번호에 어떤 법칙을 요구하는 경우가 있다.
	다음과 같이 비밀번호를 만들어야 한다고 하자
	1. 비밀번호는 적어도 8개의 문자여야 한다.
	2. 비밀번호는 문자와 숫자로만 구성되어야 한다.
	3. 비밀번호는 적어도 두개의 숫자가 포함되어야 한다.
	사용자가 비밀번호를 입력했을 때,
	위 법칙에 맞으면 "Valid password"를
	그렇지 않으면 "Invalid password"를 출력하는 프로그램을 작성하라.
*/

using namespace std;

int isValid(char);

int main()
{
	char password;
	
	while (1)
	{
		cout << "새로운 비밀번호를 생성해주세요 : ";
		cin >> password;

		if (isValid(password))
		{
			cout << "Valid password" << endl;
			break;
		}
		else
		{
			cout << "Invalid password" << endl;
		}
	}
}

int isValid(char password)
{
	int count = 0;
	int Cnt = 0;
	int valid = 0;

	while (password != '\n')
	{
		// 이 함수들은 true false이기 때문에 == 1 로 쓰지 말것
		Cnt++; // 1번 조건
		if (!isalnum(password))	// 2번 조건
		{
			valid++;
		}
		if (isdigit(password)) // 3번 조건
		{
			count++;
		}
		cin.get(password);
	}

	if (Cnt < 8 || count < 2)
	{
		valid++;
	}

	if (valid == 0)	return 1;
	else return 0;
}