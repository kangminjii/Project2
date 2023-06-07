#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Q1. ������ �鸸 �� ������ ���� �ùķ��̼��ϰ�
	�ո�� �޸��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
	������ ���� �� �յڰ� �� %�� �������� ����� ����ض�

	ex)
		100		��°�� �� ... �ո� ����% �޸� ����%
		...
		1000	��°�� �� ... �ո� ����% �޸� ����%
		...
		10000	��°�� �� ... �ո� ����% �޸� ����%
		...
		100000	��°�� �� ... �ո� ����% �޸� ����%
*/

using namespace std;

int main()
{
	int temp;
	double head = 0, tail = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 1000000; i++)
	{
		temp = rand() % 2;
		if (temp == 0)	head++;
		else			tail++;
				
		if (i % 100 == 0)
		{
			cout << i << "��°�� �� ... �ո� " << head / (head + tail) * 100 << "% �޸� " << tail / (head + tail) * 100 << "%" << endl;
		}
	}

	return 0;
}
