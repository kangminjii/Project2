#include <iostream>
using namespace std;

/*
Q2. p.129 �������� 3, 5, 7
*/

int main()
{
	// #3

	double total;
	int degree, minute, second;

	cout << "������ ��, ��, �� ������ �Է��Ͻÿ� : " << endl;
	cout << "����, ������ �Է��Ͻÿ� : ";
	cin >> degree;
	cout << "������, �а��� �Է��Ͻÿ� : ";
	cin >> minute;
	cout << "������, �ʰ��� �Է��Ͻÿ� : ";
	cin >> second;
	
	total = degree + (1.0 / 60) * minute + (1.0 / 60 / 60) * second;

	cout << degree << "��, " << minute << "��, " << second << "�� = " << total << "��";


	// #5

	/*long long world_people, america_people;

	cout << "���� �α����� �Է��Ͻÿ� : ";
	cin >> world_people;
	cout << "�̱��� �α����� �Է��Ͻÿ� : ";
	cin >> america_people;

	double rate = double(america_people) / world_people * 100.0;
	
	cout << "���� �α������� �̱��� �����ϴ� ������ " << rate << "%�̴�." << endl;*/


	// #7

	/*double europe, america;

	cout << "�ֹ��� �Һ��� ���� ��Ÿ��(����/�Ÿ�)�� �Է��Ͻÿ� : ";
	cin >> europe;
	
	america = 3.875 * 62.14 / europe;
	
	cout << "�̱� ��Ÿ��(�Ÿ�/����)�� ǥ���Ѵٸ� : " << america << "mpg�Դϴ�." << endl;*/

}