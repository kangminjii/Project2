#include <iostream>
#include <cmath>

/*
Q2. ���� (x1, y1), (x2, y2)�� �Է� �޾� �� ���� ������ �Ÿ��� ����ϴ� ���α׷��� �ۼ�
	�Ÿ� ��� ������
		square root ( (x2 - x1)^2 + (y2 - y1)^2 )

*/

using namespace std;

int main()
{
	double x1, x2, y1, y2;
	double distance;

	cout << "(x1, y1) �Է� : ";
	cin >> x1 >> y1;
	cout << "(x2, y2) �Է� : ";
	cin >> x2 >> y2;

	distance = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	distance = sqrt(distance);

	cout << "�� �� ������ �Ÿ� : " << distance << endl;
}