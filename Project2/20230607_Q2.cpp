#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Q2. ������ ����� ������ ���� ��
	���		������		Ȯ��		������		Ȯ��
	----------------------------------------------------
	5star		A-Item		1%			
	----------------------------------------------------
	4star		B-Item		3%			C-Item		3%
	----------------------------------------------------
	3star		D-Item		5%			E-Item		5%
				F-Item		5%
	----------------------------------------------------
	2star		G-Item		10%			H-Item		10%
				I-Item		10%			J-Item		10%
	----------------------------------------------------
	1star		K-Item		38%			
	----------------------------------------------------

	�� �������� ������ Ȯ���� �°� ��Ȯ�� ���� �� �ֵ��� ���α׷��� �ۼ��Ͻÿ�
	ex	> Ƚ�� ? 100   A:1, B:3, C:3, D:5, ............
		> Ƚ�� ? 1000  A:10, B:30, C:30, D:50, ............
*/

using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int Item[11] = { 0 };
	int possibility[11] = { 1, 3, 3, 5, 5, 5, 10, 10, 10, 10, 38 };
	int number = 0;

	cout << "Ƚ�� = ";
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		int temp = rand() % 11;

		if (Item[temp] == number / 100 * possibility[temp])
		{
			i--;
			continue;
		}
		Item[temp]++;
	}
	//��¹�
	for (int i = 0; i < 11; i++)
	{
		cout << char('A' + i) << " : " << Item[i] << "\t";
	}
	

	return 0;
}