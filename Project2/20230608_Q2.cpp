#include <iostream>

/*
Q2. 임의의 한 단어를 생성하고 사용자가 한 번에 한 문자만을 추측하도록 해서 단어를 맞추는 게임.
	단어의 각 문자는 '*'으로 표시된다.
	사용자가 올바른 추측을 했을 때는 실제 문자가 화면에 표시된다.
	사용자가 단어 맞추기를 끝냈을 때 실수한 횟수를 표시하고, 다른 단어로 계속할 것인지를 묻도록 한다.
	ex) 생성된 단어 -> apple
		단어중 한 글자를 입력하시오. ***** > a
									 a****
		단어중 한 글자를 입력하시오. a**** > r
			r은 단어에 포함되지 않습니다.
		단어중 한 글자를 입력하시오. a**** > a
			a는 이미 단어에 포함되어 있습니다.
		....
		총 xx번 실패, oo번 만에 정답 ! apple
*/

using namespace std;

void check(char*, char*, char, int);

int main()
{

	char* answer = new char[sizeof(answer)*10];
	char* semiAnswer = new char[sizeof(semiAnswer) * 10];
	char alphabet = ' ';
	int size = 0, fail = 0, pass = 0;

	cout << "생성된 단어 -> ";
	cin >> answer;

	for (int i = 0; i < sizeof(answer) * 10; i++)
	{
		if (answer[i] == '\0')
		{
			semiAnswer[i] = '\0';
			break;
		}
		size++;
		semiAnswer[i] = '*'; // 초기화
	}
	
	cout << "단어 중 한 글자를 입력하시오. " << semiAnswer << " > ";

	while (1)
	{
		int count = 0;
		int number = 0;
		int exit = 0;
		
		cin >> alphabet;

		// 중복여부
		for (int i = 0; i < size; i++)
		{
			if (semiAnswer[i] == alphabet)
			{
				cout << "\t" << alphabet << "은 이미 단어에 포함되어 있습니다." << endl;
				number = 1;
				break;
			}
		}
		// 포함되지 않음 & 실패 증가
		for (int i = 0; i < size; i++)
		{
			if (answer[i] == alphabet)
			{
				count++;
			}
		}
		if (!count)
		{
			cout << "\t" << alphabet << "은 단어에 포함되지 않습니다." << endl;
			fail++;
		}
		// 출력 & 성공 증가
		if (count && !number)
		{
			cout << "\t\t\t";
			check(answer, semiAnswer, alphabet, size);
			cout << endl;
			pass++;
		}
		// 탈출
		for (int i = 0; i < size; i++)
		{
			if (answer[i] == semiAnswer[i]) exit++;
		}
		if (exit == size)
		{
			cout << "총" << fail << "번 실패, " << pass << "번 만에 정답 !  " << answer << endl;
			break;
		}

		cout << "단어 중 한 글자를 입력하시오. " << semiAnswer << " > ";
	}

}

void check(char* answer, char* semiAnswer, char alphabet, int size)
{

	for (int i = 0; i < size; i++)
	{
		if (answer[i] == alphabet)
		{
			cout << answer[i];
			semiAnswer[i] = answer[i];
		}
		else if (semiAnswer[i] != '*')
		{
			cout << semiAnswer[i];
		}
		else
		{
			cout << "*";
			semiAnswer[i] = '*';
		}
	}
}
