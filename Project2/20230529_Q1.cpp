#include <iostream>
#include <string>

/*
Q1. p.232 연습문제 7,8번
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
//	cout << "피자 회사의 이름 : ";
//	getline(cin, pi.name);
//	cout << "피자의 지름 : ";
//	cin >> pi.diameter;
//	cout << "피자의 중량 : ";
//	cin >> pi.weight;
//
//	cout << "\n피자 회사의 이름 : " << pi.name << endl;
//	cout << "피자의 지름 : " << pi.diameter << endl;
//	cout << "피자의 중량 : " << pi.weight << endl;
//
//	return 0;
//}

// #8
int main()
{
	Pizza* pi = new Pizza;

	cout << "피자의 지름 : ";
	cin >> pi->diameter;
	cin.get();
	cout << "피자 회사의 이름 : ";
	getline(cin, pi->name);
	cout << "피자의 중량 : ";
	cin >> pi->weight;
	
	cout << "\n피자 회사의 이름 : " << pi->name << endl;
	cout << "피자의 지름 : " << pi->diameter << endl;
	cout << "피자의 중량 : " << pi->weight << endl;

	return 0;
}

