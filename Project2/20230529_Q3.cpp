#include <iostream>
#include <string>

/*
Q3. 1~10 ������ ������ �Է� �޾� ������ ���� ���·� ����ϴ� ���α׷��� �ۼ��϶�.
	ex) ���� ���ڸ� �Է� : 5
		 1
		212
	   32123
	  4321234
	 543212345
*/
using namespace std;

int main()
{
	int line;

	while (1)
	{
		cout << "1~10 ������ ������ �Է����ּ��� : ";
		cin >> line;
		cout << endl;
		if (1 <= line && line <= 10)	break;
	}
	
	for (int i = 1; i <= line; i++) // ��ٲ�
	{
		for (int j = i; j < line; j++) // ��ĭ ���
		{
			cout << " ";
		}
		for (int j = i; j >= 1; j--) // ���� ���
		{
			cout << j;
		}
		for (int j = 1; j <= i; j++) // ������ ���
		{
			if (j == 1)	continue;
			cout << j;
		}

		cout << endl;
	}
}