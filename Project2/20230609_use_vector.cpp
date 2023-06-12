/*
Q2. ex) x,y,z : 1 2 3
		x,y,z : -4 -5 6
		v1 length : 3.74166
		v2 length : 8.77496
		v1 �� 3�� �� : 3 6 9
		v2�� 2�� ���� : -2 -2.5 3
		�� ������ dot : xx
		�� ������ cross : 27 -18 3
		�� ������ ���̰� : 83.0023
*/

#include "20230609_vector.h"

using namespace std;

int main()
{
	cVector3 v1(1, 2, 3);
	cVector3 v2(-4, -5, 6);

	cout << "�� ���ʹ� ������? " << (v1 == v2) << endl;
	cout << "�� ���ʹ� �ٸ���? " << (v1 != v2) << endl;
	cout << endl;
	cout << "v1 length : " << v1.length() << endl;
	cout << "v2 length : " << v2.length() << endl;
	cout << endl;
	cout << "v1�� 3�� �� : " << (3 * v1) << endl;
	cout << endl;
	cout << "�� ������ ���� : " << (v1 + v2) << endl;
	cout << "�� ������ ���� : " << (v1 - v2) << endl;
	cout << "�� ������ ������ : " << (v1 / v2) << endl;
	cout << endl;
	cout << "�� ������ dot : " << v1.Dot(v2) << endl;
	cout << "�� ������ cross : " << v1.Cross(v2) << endl;
	cout << "�� ������ ���̰� : " << v1.Angle(v2) << endl;
	cout << endl;
	cout << "v1�� normalize : " << v1.Normalize() << endl;

	return 0;
}