#include <iostream>
#include <string>

/*
Q1. p.232 �������� 7,8��
*/
using namespace std;

struct Pizza
{
	string name;
	double diameter;
	double weight;
};


// #7
//int main()
//{
//	Pizza pi;
//
//	cout << "���� ȸ���� �̸� : ";
//	getline(cin, pi.name);
//	cout << "������ ���� : ";
//	cin >> pi.diameter;
//	cout << "������ �߷� : ";
//	cin >> pi.weight;
//
//	cout << "\n���� ȸ���� �̸� : " << pi.name << endl;
//	cout << "������ ���� : " << pi.diameter << endl;
//	cout << "������ �߷� : " << pi.weight << endl;
//
//	return 0;
//}

// #8
int main()
{
	Pizza* pi = new Pizza;

	cout << "������ ���� : ";
	cin >> pi->diameter;
	cin.get();
	cout << "���� ȸ���� �̸� : ";
	getline(cin, pi->name);
	cout << "������ �߷� : ";
	cin >> pi->weight;
	
	cout << "\n���� ȸ���� �̸� : " << pi->name << endl;
	cout << "������ ���� : " << pi->diameter << endl;
	cout << "������ �߷� : " << pi->weight << endl;

	return 0;
}

