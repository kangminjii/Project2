#include <iostream>
#include <cmath>
#include <stdlib.h>

/*
Q1. ��(x,y)�� �Է� �޾� �� ���� (x0,y0)�� �߽����� �ϰ� ������ r�� ���� ���ο�
	�����ϴ��� �˻��ϴ� ���α׷��� �ۼ��϶�.
	ex)
		input > r:10, x0=0, y0=0, x=4, y=5
		output > ��(4,5)�� �߽���(0,0)�̰� �������� 10�� �� �ȿ� �ֽ��ϴ�.
				 ��(9,9) ->
	���� ���ο� �����ϴ��� �˻��ϴ� �Լ��� �����,
	��(x,y), (x0,y0)�� ���ڷ� �Ѱ��� �� ������ ����ü�� �̿��ؼ� ������ �Ѵ�.

*/
using namespace std;


typedef struct dot
{
	int x;
	int y;
};
int isInside(dot* A, dot* B, int r);

int main()
{
	dot* original = new dot;
	dot* user = new dot;
	int r, answer = 0;

	cout << "(x0,y0) �Է� : ";
	cin >> original->x >> original->y;

	cout << "(x,y) �Է� : ";
	cin >> user->x >> user->y;

	cout << "������ r �Է� : ";
	cin >> r;

	answer = isInside(original, user, r);

	if (answer == 1)
		cout << "��(" << user->x << ", " << user->y << ")�� �߽��� (" << original->x << ", " << original->y << ")�̰� �������� " << r << "�� �� �ȿ� �ֽ��ϴ�." << endl;
	else
		cout << "��(" << user->x << ", " << user->y << ")�� �߽��� (" << original->x << ", " << original->y << ")�̰� �������� " << r << "�� �� �ȿ� �����ϴ�." << endl;

}
int isInside(dot *A, dot *B, int r)
{
	double distance = pow((A->x - B->x), 2) + pow((A->y - B->y), 2);

	if (distance <= pow(r, 2))	return 1;
	else return 0;
}