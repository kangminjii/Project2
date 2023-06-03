#include <iostream>
#include <cmath>

/*
Q1. �ﰢ���� 3���� �� (x1, y1), (x2, y2), (x3, y3)�� �˰� ���� �� �� �ﰢ���� ������ ���ϴ� ���α׷��� �ۼ��϶�.
	ex) ���� �Է� : 1.5 -3.4 4.6 5 9.5 -3.4
		�ﰢ���� ���� : 33.6
*/
using namespace std;


int main()
{
	double x1, x2, x3;
	double y1, y2, y3;
	double S;

	cout << "�� �� (x1, y1), (x2, y2), (x3, y3)�� �Է����ּ��� : ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// �Ź߲� ����
	S = (x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x2 * y1 + x3 * y2);
	S = abs(S) / 2;

	cout << "�ﰢ���� ���� : " << S << endl;

	// ����� ���ĵ� ����
	// S = sqrt(s(s - a)(s - b)(s - c))
	// s = (a + b + c) / 2
}