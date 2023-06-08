#include "20230608_move.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove() const
{
	std::cout << "현재 x값은 : " << x << ", 현재 y값은 : " << y << "이다. " << std::endl;

}
Move Move::add(const Move& m) const
{
	return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}