#include <iostream>
using namespace std;

/*
Q1. p.129 �������� 1.
*/

int main()
{
	int height;

	cout << "Ű�� ��Ƽ���� ������ �Է����ּ��� : ___cm\b\b\b\b\b";
	cin >> height;

	const double cal_height = double(height) / 100;

	cout << "���� �� : " << cal_height << "m, ��Ƽ���� �� : " << height << "cm" << endl;

}