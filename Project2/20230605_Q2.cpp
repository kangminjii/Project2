#include <iostream>
#include <cmath>

/*
Q2. �� ���� ���� ������ ���� ��ġ���� ����, �ܺο� �ִ��� �Ǵ��ϴ� ���α׷��� �ۼ��϶�.

	ex)  ù��° �� x,y,r: 0.5 5.1 13
		 �ι�° �� x,y,r: 1 1.7 4.5
		 >> �ι�° ���� ù��° ���� ���ο� �ִ�.
*/

using namespace std;

void isInside(double, double, double, double, double, double);

int main()
{
	double x1, y1, r1, x2, y2, r2;

	cout << "ù ��° �� x,y,r : ";
	cin >> x1 >> y1 >> r1;
	cout << "�� ��° �� x,y,r : ";
	cin >> x2 >> y2 >> r2;

	isInside(x1, x2, y1, y2, r1, r2);

	return 0;
}

void isInside(double x1, double x2, double y1, double y2, double r1, double r2)
{
	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	if (distance > r1 + r2)
	{
		cout << "�� ���� ���� ��ġ�� �ʽ��ϴ�." << endl;
	}
	else if (distance < abs(r1 - r2))
	{
		cout << "�� ���� �ٸ� �ѿ��� ���ο� �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << "�� ���� ���� ��Ĩ�ϴ�." << endl;
	}
}