#include <iostream>
#include <string>
#include <cstring>

/*
Q4. p.305 �������� 7,8
*/

using namespace std;

struct Work
{
	string name;
	int car;
};

int main()
{
	// #7
	int number;

	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
	cin >> number;

	Work* customer = new Work[number];

	for (int i = 0; i < number; i++)
	{
		cout << "�ڵ��� #" << i + 1 << ":" << endl;

		cout << "���۾�ü: ";
		cin >> (customer + i)->name;
		cout << "���۳⵵ : ";
		cin >> (customer + i)->car;
	}

	cout << "\n���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�." << endl;
	for (int i = 0; i < number; i++)
	{
		cout << (customer + i)->car << "���� " << (customer + i)->name << endl;
	}


	// #8
	char word[100];
	int count = 0;

	cout << "\n���� �ܾ���� �Է��Ͻÿ� (�������� done�� �Է�) :" << endl;
	
	while (1)
	{
		cin >> word;
		
		if (strcmp(word, "done") == 0)
			break;
		else	
			count++;
	}

	cout << "�� " << count << " �ܾ �ԷµǾ����ϴ�." << endl;

}