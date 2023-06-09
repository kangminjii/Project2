/*
Q1. ������ ���� ���·� ����ϴ� ���α׷��� �ۼ��϶�.
	n�� �Է� �޾� ������ ���� 2^n ������ ������ ����ϵ��� ���α׷��� �ۼ��϶�.
	ex) n = 3
				1
			1	2	1
		1	2	4	2	1
	1	2	4	8	4	2	1
*/

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "n = ";
	cin >> n;

	for (int j = 0; j <= n; j++)
	{
		// ����
		for (int i = n-j; i > 0; i--)
		{
			cout << "\t";
		}
		// ����(�����κ�)
		for (int i = 0; i <= j; i++)
		{
			cout << pow(2, i) << "\t";
		}
		// ����(���Һκ�)
		int i = j;
		for (int k = i - 1; k >= 0; k--)
		{
			cout << pow(2, k) << "\t";
		}

		cout << endl;
	}

	return 0;
}
