#include <iostream>
#include <cmath>
#include <stdlib.h>

/*
Q1. 점(x,y)를 입력 받아 그 점이 (x0,y0)를 중심으로 하고 반지름 r인 원의 내부에
	존재하는지 검사하는 프로그램을 작성하라.
	ex)
		input > r:10, x0=0, y0=0, x=4, y=5
		output > 점(4,5)는 중심이(0,0)이고 반지름이 10인 원 안에 있습니다.
				 점(9,9) ->
	점이 내부에 존재하는지 검사하는 함수를 만들고,
	점(x,y), (x0,y0)를 인자로 넘겨줄 때 포인터 구조체를 이용해서 만들어야 한다.

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

	cout << "(x0,y0) 입력 : ";
	cin >> original->x >> original->y;

	cout << "(x,y) 입력 : ";
	cin >> user->x >> user->y;

	cout << "반지름 r 입력 : ";
	cin >> r;

	answer = isInside(original, user, r);

	if (answer == 1)
		cout << "점(" << user->x << ", " << user->y << ")는 중심이 (" << original->x << ", " << original->y << ")이고 반지름이 " << r << "인 원 안에 있습니다." << endl;
	else
		cout << "점(" << user->x << ", " << user->y << ")는 중심이 (" << original->x << ", " << original->y << ")이고 반지름이 " << r << "인 원 안에 없습니다." << endl;

}
int isInside(dot *A, dot *B, int r)
{
	double distance = pow((A->x - B->x), 2) + pow((A->y - B->y), 2);

	if (distance <= pow(r, 2))	return 1;
	else return 0;
}