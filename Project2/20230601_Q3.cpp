#include <iostream>

/*
Q3. p.464 10�� 
*/

using namespace std;

double calculate(double x, double y, double (*func)(double, double));
double add(double x, double y);
double subtract(double x, double y);

int main()
{
	int number = 0;
	double a, b;

	while (1)
	{
		cout << "����: 1. ���� 2. ���� 0. ����" << endl;
		cin >> number;
		if (number == 1)
		{
			cin.get();
			cout << "�� ���� �Է� : ";
			cin >> a >> b;
			cout << calculate(a, b, add) << endl;
		}
		else if (number == 2)
		{
			cin.get();
			cout << "�� ���� �Է� : ";
			cin >> a >> b;
			cout << calculate(a, b, subtract) << endl;
		}
		else if (number == 0)
			break;
	}
}

double calculate(double x, double y, double (*func)(double, double))
{
	return func(x, y);
}

double add(double x, double y)
{
	return  x + y;
}
double subtract(double x, double y)
{
	return  x - y;
}

