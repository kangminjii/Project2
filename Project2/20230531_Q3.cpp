#include <fstream>
#include <iostream>
#include <string>

/*
Q3. p.368 4��
	a. ȸ����� -> ���� ����
		�̸�, ����, bop id
	b. �Ǹ� ����
	c. ���� ����
	.. 
	q. ����
*/

using namespace std;
const int strSize = 100;

int main()
{
	char fullName[strSize];
	char title[strSize];
	char bopId[strSize];

	char menu;
	
	int count = 0;

	ofstream outfile;
	outfile.open("bop.txt");

	while (1)
	{
		cout << "a. ȸ�����\t b. �Ǹ� ����\t c. ���� ����\t d. bop ID ����\t q. ����" << endl;
		cout << "���ϴ� ���� �����Ͻʽÿ� : ";
		cin >> menu;
		cin.get();
		
		ifstream infile;
		infile.open("bop.txt");
		if (!infile.is_open())
		{
			cout << "file is not open" << endl;
			return 0;
		}

		string str;

		switch (menu)
		{
			case 'a':
				cout << "�̸�, ����, bop id�� �Է����ּ��� : " << endl;
				cin.getline(fullName, strSize);
				cin.getline(title, strSize);
				cin.getline(bopId, strSize);
				outfile << fullName << endl;
				outfile << title << endl;
				outfile << bopId << endl;
				break;
			case 'b':
				while (infile.good())
				{
					getline(infile, str);
					count++;
					if (count % 3 == 1)
					{
						cout << str << endl;
					}
					if (infile.eof())
					{
						cout << "��!" << endl;
						count = 0;
						break;
					}
				}
				break;
			case 'c':
				
				while (infile.good())
				{
					getline(infile, str);
					count++;
					if (count % 3 == 2)
					{
						cout << str << endl;
					}
					if (infile.eof())
					{
						cout << "��!" << endl;
						count = 0;
						break;
					}
				}
				break;
			case 'd':
				while (infile.good())
				{
					getline(infile, str);
					count++;
					if (count % 3 == 0)
					{
						cout << str << endl;
					}
					if (infile.eof())
					{
						cout << "��!" << endl;
						count = 0;
						break;
					}
				}
				break;
			case 'q':
				break;

		}
		
		if (menu == 'q')	break;
	}
	outfile.close();

	return 0;
}