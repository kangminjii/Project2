#include <iostream>
#include <string>

using namespace std;

int main()
{
	char word[20] = "mate"; // ���ڿ��� �� �Ұ���
	//string word = "mate";	// ���ڿ��� �� ����

	if (word == "mate")
	{
		cout << "yes";
	}
	
	char ch;
	int count = 0;
	cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��ϼ��� :\n";
	cin.get(ch); // �Է¹޴� ������� �о��ش�
	//cin >> ch;

	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch); // �Է¹޴� ������� �о��ش�
		//cin >> ch;
	}

	cout << endl << count << " ���ڸ� �о����ϴ�.\n";
}