#include <iostream>
#include <string>
/*
Q2. �ܾ �Է¹޾Ƽ� ȸ������ ���θ� �Ǵ��ؼ� ����� ����ϴ� ���α׷��� �ۼ��϶�.
	ex) level
		-> ȸ��
*/

using namespace std;

int main()
{
	while (1)
	{
		string word;
		int number;

		cout << "�ܾ �Է����ּ��� : ";
		cin >> word;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] != word[word.size() - 1 - i])
			{
				cout << word << "�� ȸ���� �ƴմϴ�." << endl;
				break;
			}
			if (i == word.size() - 1)
			{
				cout << word << "�� ȸ���Դϴ�." << endl;
			}
		}

		cout << "���Ḧ ���Ͻø� 1�� �����ּ��� : ";
		cin >> number;
		if (number == 1)	break;
	}
}