#include "20230608_move.h"

int main()
{
	Move m1(3, 3);
	m1.showmove();
	Move m2(1, 1);
	m2.showmove();

	m2 = m2.add(m1);
	m2.showmove();

	m2.reset(-1, -1);
	m2.showmove();

	return 0;
}