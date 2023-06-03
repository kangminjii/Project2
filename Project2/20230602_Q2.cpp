#include <iostream>

/*
Q2. ��1�� ����(x1, y1)�� (x2, y2),
	��2�� ����(x3, y3)�� (x4, y4)�� �־��� �� ���� �������� ���ϴ� ���α׷��� �ۼ��϶�.
	
	ũ���� ������ �̿��϶�.
	ex) �� 4�� �Է� : x1, y1, x2, y2, x3, y3, x4, y4
					  2, 2,   5, -1,  4, 2,   -1, -2
		�������� (000, 000)�̴�.
		> 2 2 7 6 4 2 -1 -2
			�� ������ �����̴�.
*/

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;

	cout << "�� 4�� �Է� : ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	// Ax + By = E
	double A = y2 - y1;
	double B = x1 - x2;
	double E = A * x1 + B * y1;

	// Cx + Dy = F
	double C = y4 - y3;
	double D = x3 - x4;
	double F = C * x3 + D * y3;

	// DE = �����ΰ�?
	double DE = A * D - B * C;
	if (DE == 0)
		cout << "�� ������ �����̴�." << endl;
	else
	{
		// ũ���� ����
		double X = (E * D - B * F) / DE;
		double Y = (A * F - E * C) / DE;
		cout << "�������� (" << X << ", " << Y << ")�̴�." << endl;
	}

	return 0;
}