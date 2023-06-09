#include <iostream>
#include "20230609_mytime0.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;
	
	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	//total = coding.Sum(fixing);
	total = coding + fixing; // ������ �����ε�
							// �������� �ʴ� ����� ���������ν� ��밡���ϰ� ��
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	return 0;
}