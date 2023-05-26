#include <iostream>
#include <string>
using namespace std;

/*
Q1. p.232 �������� 5, 6, 9
*/

typedef struct CandyBar
{
	string name;
	double weight;
	int calorie;
};

int main()
{
	// #5
	CandyBar snack;
	snack.name = "Mocha Munch";
	snack.weight = 2.3;
	snack.calorie = 350;

	cout << "snack�� �̸� : " << snack.name << endl;
	cout << "snack�� ���� : " << snack.weight << endl;
	cout << "snack�� Į�θ� : " << snack.calorie << endl;
	cout << endl;

	// #6
	CandyBar mySnack[3] = { {"first", 11.1, 100}, { "second", 22.2, 200} , { "third", 33.3, 300} };

	cout << "ù��° snack�� �̸� : " << mySnack[0].name << ", ���� : " << mySnack[0].weight << ", Į�θ� : " << mySnack[0].calorie << endl;
	cout << "�ι�° snack�� �̸� : " << mySnack[1].name << ", ���� : " << mySnack[1].weight << ", Į�θ� : " << mySnack[1].calorie << endl;
	cout << "����° snack�� �̸� : " << mySnack[2].name << ", ���� : " << mySnack[2].weight << ", Į�θ� : " << mySnack[2].calorie << endl;
	cout << endl;

	// #9
	CandyBar* yourSnack = new CandyBar[3];
	yourSnack[0] = { "fourth", 44.4, 400 };
	yourSnack[1] = { "fifth", 55.5, 500 };
	yourSnack[2] = { "sixth", 66.6, 600 };

	cout << "ù��° snack�� �̸� : " << yourSnack->name << ", ���� : " << yourSnack->weight << ", Į�θ� : " << yourSnack->calorie << endl;
	cout << "�ι�° snack�� �̸� : " << (yourSnack + 1)->name << ", ���� : " << (yourSnack + 1)->weight << ", Į�θ� : " << (yourSnack + 1)->calorie << endl;
	cout << "����° snack�� �̸� : " << (yourSnack + 2)->name << ", ���� : " << (yourSnack + 2)->weight << ", Į�θ� : " << (yourSnack + 2)->calorie << endl;
	cout << endl;

	delete[] yourSnack;

}