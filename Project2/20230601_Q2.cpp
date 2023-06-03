#include <iostream>
#include <cctype>
#include <string>

/*
Q2. ���ӿ��� ��й�ȣ�� � ��Ģ�� �䱸�ϴ� ��찡 �ִ�.
	������ ���� ��й�ȣ�� ������ �Ѵٰ� ����
	1. ��й�ȣ�� ��� 8���� ���ڿ��� �Ѵ�.
	2. ��й�ȣ�� ���ڿ� ���ڷθ� �����Ǿ�� �Ѵ�.
	3. ��й�ȣ�� ��� �ΰ��� ���ڰ� ���ԵǾ�� �Ѵ�.
	����ڰ� ��й�ȣ�� �Է����� ��,
	�� ��Ģ�� ������ "Valid password"��
	�׷��� ������ "Invalid password"�� ����ϴ� ���α׷��� �ۼ��϶�.
*/

using namespace std;

int isValid(char);

int main()
{
	char password;
	
	while (1)
	{
		cout << "���ο� ��й�ȣ�� �������ּ��� : ";
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
		// �� �Լ����� true false�̱� ������ == 1 �� ���� ����
		Cnt++; // 1�� ����
		if (!isalnum(password))	// 2�� ����
		{
			valid++;
		}
		if (isdigit(password)) // 3�� ����
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