#include <iostream>
#include "20230609_vector.h"

/*
Q1. ���� ������ �����Ͻÿ�.
	1. u = (-1,3,2)�̰� v = (3,-4,1)�̶�� �� ��
		���� ����� �����϶�
		(a) u+v
		(b) u-v
		(c) 3u+2v
		(d) -2u+v

	2. u = (-1,3,2)�̰� v = (3,-4,1)�̶�� �� ��
		u�� v�� ����ȭ �϶�.

	3. ���� ���͵� ������ ���� ���϶�.
		(a) u = (1,1,1), v = (2,3,4)
		(b) u = (1,1,0), v = (-2,2,0)
		(c) u = (-1,-1,-1), v = (3,1,0)

	4. � ��ǥ�踦 �������� �� A = (0,0,0), B = (0,1,3), 
		C = (5,1,0)�� �ϳ��� �ﰢ���� �����Ѵٰ� ����.
		�� �ﰢ���� ������ ���͸� ���϶�.
*/
using namespace std;

int main()
{
	// #1
	cVector3 u(-1, 3, 2);
	cVector3 v(3, -4, 1);

	cout << "#1" << endl;
	cout << "(a) u + v = " << u + v << endl << "(b) u - v = " << u - v << endl;
	cout << "(c) 3u + 2v = " << 3 * u + 2 * v << endl << "(d) -2u + v = " << (-2) * u + v << endl << endl;

	// #2
	cout << "#2" << endl;
	cout << "u�� ����ȭ : " << u.Normalize() << endl;
	cout << "v�� ����ȭ : " << v.Normalize() << endl << endl;

	// #3
	cVector3 ua(1, 1, 1), va(2, 3, 4);
	cVector3 ub(1, 1, 0), vb(-2, 2, 0);
	cVector3 uc(-1, -1, -1), vc(3, 1, 0);

	cout << "#3" << endl;
	cout << "(a) ���̰� : " << ua.Angle(va) << endl;
	cout << "(b) ���̰� : " << ub.Angle(vb) << endl;
	cout << "(c) ���̰� : " << uc.Angle(vc) << endl << endl;

	// #4
	cVector3 A(0, 0, 0), B(0, 1, 3), C(5, 1, 0);

	cVector3 AB, AC;
	AB = B - A;
	AC = C - A;

	cout << "#4" << endl;
	cout << "�ﰢ���� ������ ���� : " << AB.Cross(AC) << endl << endl;

	return 0;
}