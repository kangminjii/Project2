#include <iostream>
#include <string>
/*
Q2. 단어를 입력받아서 회문인지 여부를 판단해서 결과를 출력하는 프로그램을 작성하라.
	ex) level
		-> 회문
*/

using namespace std;

int main()
{
	while (1)
	{
		string word;
		int number;

		cout << "단어를 입력해주세요 : ";
		cin >> word;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] != word[word.size() - 1 - i])
			{
				cout << word << "는 회문이 아닙니다." << endl;
				break;
			}
			if (i == word.size() - 1)
			{
				cout << word << "는 회문입니다." << endl;
			}
		}

		cout << "종료를 원하시면 1을 눌러주세요 : ";
		cin >> number;
		if (number == 1)	break;
	}
}