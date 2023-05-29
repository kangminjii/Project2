#include <iostream>
#include <string>

using namespace std;

int main()
{
	char word[20] = "mate"; // 문자열과 비교 불가능
	//string word = "mate";	// 문자열과 비교 가능

	if (word == "mate")
	{
		cout << "yes";
	}
	
	char ch;
	int count = 0;
	cout << "문자들을 입력하시오; 끝내려면 #을 입력하세요 :\n";
	cin.get(ch); // 입력받는 띄어쓰기까지 읽어준다
	//cin >> ch;

	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch); // 입력받는 띄어쓰기까지 읽어준다
		//cin >> ch;
	}

	cout << endl << count << " 문자를 읽었습니다.\n";
}