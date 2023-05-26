#include <iostream>
#include <string>
using namespace std;

/*
Q1. p.232 연습문제 5, 6, 9
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

	cout << "snack의 이름 : " << snack.name << endl;
	cout << "snack의 무게 : " << snack.weight << endl;
	cout << "snack의 칼로리 : " << snack.calorie << endl;
	cout << endl;

	// #6
	CandyBar mySnack[3] = { {"first", 11.1, 100}, { "second", 22.2, 200} , { "third", 33.3, 300} };

	cout << "첫번째 snack의 이름 : " << mySnack[0].name << ", 무게 : " << mySnack[0].weight << ", 칼로리 : " << mySnack[0].calorie << endl;
	cout << "두번째 snack의 이름 : " << mySnack[1].name << ", 무게 : " << mySnack[1].weight << ", 칼로리 : " << mySnack[1].calorie << endl;
	cout << "세번째 snack의 이름 : " << mySnack[2].name << ", 무게 : " << mySnack[2].weight << ", 칼로리 : " << mySnack[2].calorie << endl;
	cout << endl;

	// #9
	CandyBar* yourSnack = new CandyBar[3];
	yourSnack[0] = { "fourth", 44.4, 400 };
	yourSnack[1] = { "fifth", 55.5, 500 };
	yourSnack[2] = { "sixth", 66.6, 600 };

	cout << "첫번째 snack의 이름 : " << yourSnack->name << ", 무게 : " << yourSnack->weight << ", 칼로리 : " << yourSnack->calorie << endl;
	cout << "두번째 snack의 이름 : " << (yourSnack + 1)->name << ", 무게 : " << (yourSnack + 1)->weight << ", 칼로리 : " << (yourSnack + 1)->calorie << endl;
	cout << "세번째 snack의 이름 : " << (yourSnack + 2)->name << ", 무게 : " << (yourSnack + 2)->weight << ", 칼로리 : " << (yourSnack + 2)->calorie << endl;
	cout << endl;

	delete[] yourSnack;

}