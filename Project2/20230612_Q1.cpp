#include <iostream>
#include "20230609_vector.h"

/*
Q1. 벡터 연산을 구현하시오.
	1. u = (-1,3,2)이고 v = (3,-4,1)이라고 할 때
		다음 계산을 수행하라
		(a) u+v
		(b) u-v
		(c) 3u+2v
		(d) -2u+v

	2. u = (-1,3,2)이고 v = (3,-4,1)이라고 할 때
		u와 v를 정규화 하라.

	3. 다음 벡터들 사이의 각을 구하라.
		(a) u = (1,1,1), v = (2,3,4)
		(b) u = (1,1,0), v = (-2,2,0)
		(c) u = (-1,-1,-1), v = (3,1,0)

	4. 어떤 좌표계를 기준으로 점 A = (0,0,0), B = (0,1,3), 
		C = (5,1,0)이 하나의 삼각형을 정의한다고 하자.
		이 삼각형에 수직인 벡터를 구하라.
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
	cout << "u의 정규화 : " << u.Normalize() << endl;
	cout << "v의 정규화 : " << v.Normalize() << endl << endl;

	// #3
	cVector3 ua(1, 1, 1), va(2, 3, 4);
	cVector3 ub(1, 1, 0), vb(-2, 2, 0);
	cVector3 uc(-1, -1, -1), vc(3, 1, 0);

	cout << "#3" << endl;
	cout << "(a) 사이각 : " << ua.Angle(va) << endl;
	cout << "(b) 사이각 : " << ub.Angle(vb) << endl;
	cout << "(c) 사이각 : " << uc.Angle(vc) << endl << endl;

	// #4
	cVector3 A(0, 0, 0), B(0, 1, 3), C(5, 1, 0);

	cVector3 AB, AC;
	AB = B - A;
	AC = C - A;

	cout << "#4" << endl;
	cout << "삼각형에 수직인 벡터 : " << AB.Cross(AC) << endl << endl;

	return 0;
}