#include <iostream>

/*
Q3. p.122 �������� Q4ó�� �����˻� ������
	�ڼ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�����˻��� �����˻��� �ӵ��� ���϶�.

	5 7 15 28 29 31 39 58 68 72 95
*/

using namespace std;

int main()
{
	int n;
	cout << "������ �� ���� : ";
	cin >> n;

	int array[sizeof(n)];
	int* arrayPointer = array;
	cout << "�迭�� �Է����ּ��� : ";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	int answer;
	cout << "ã�� ���� �� : ";
	cin >> answer;
	int location = n / 2;
	while (*array)
	{
		if (answer > array[n / 2])
		{
			arrayPointer = &array[n - location / 2];

		}
	
	
	
	}
	
	





	return 0;
}