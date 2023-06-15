#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20230615_string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
	using namespace std;

	String name;

	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�\n>> ";
	cin >> name;

	cout << name << " ��! ������ ���� �Ӵ� " << ArSize << "���� �Է��� �ֽʽÿ�(�������� Enter):\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}

	int total = i;
	if (total > 0)
	{
		cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.\n";
		for (i = 0; i < total; i++)
			cout << sayings[i] << endl;

		String* shortest = &sayings[0];
		String* first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
				shortest = &sayings[i];
			if (sayings[i] < *first)
				first = &sayings[i];
		}
		cout << "���� ª�� �Ӵ�:\n" << *shortest << endl;
		cout << "���������� ���� �տ� ������ �Ӵ�:\n" << *first << endl;
		srand(time(0));
		int choice = rand() % total;


		String* favorite = new String(sayings[choice]);
		cout << "���� ���� �����ϴ� �Ӵ� :\n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "�˰� �ִ� �Ӵ��� �ϳ��� �����?" << endl;

	cout << "���α׷��� �����մϴ�." << endl;
	return 0;
}