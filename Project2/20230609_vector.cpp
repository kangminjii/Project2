#include "20230609_vector.h"
#include <cmath>

cVector3::cVector3()
{
	x = y = z = 0;
}

cVector3::cVector3(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

cVector3::~cVector3()
{
}

bool cVector3::operator==(cVector3& vec)
{
	if (x == vec.x && y == vec.y && z == vec.z)	return true;
	else										return false;
}

bool cVector3::operator!=(cVector3& vec)
{
	if (x == vec.x && y == vec.y && z == vec.z)	return false;
	else										return true;
}

cVector3 cVector3::operator+(const cVector3& v1) const
{
	cVector3 temp;
	temp.x = x + v1.x;
	temp.y = y + v1.y;
	temp.z = z + v1.z;

	return temp;
}

cVector3 cVector3::operator-(const cVector3& v1) const
{
	cVector3 temp;
	temp.x = x - v1.x;
	temp.y = y - v1.y;
	temp.z = z - v1.z;

	return temp;
}

cVector3 cVector3::operator/(const cVector3& v1) const
{
	cVector3 temp;
	temp.x = x / v1.x;
	temp.y = y / v1.y;
	temp.z = z / v1.z;

	return temp;
}

double cVector3::length()
{
	return sqrt(x * x + y * y + z * z);
}

cVector3 cVector3::Normalize()
{
	cVector3 temp;

	temp.x = x / length();
	temp.y = y / length();
	temp.z = z / length();
	
	return temp;
}

double cVector3::Dot(cVector3& v1)
{
	return (x * v1.x) + (y * v1.y) + (z * v1.z);
}

cVector3 cVector3::Cross(cVector3& v1)
{
	cVector3 temp;
	temp.x = y * v1.z - z * v1.y;
	temp.y = z * v1.x - x * v1.z;
	temp.z = x * v1.y - y * v1.x;

	return temp;
}

double cVector3::Angle(cVector3& v1)
{
	return acos(Dot(v1) / length() / v1.length()) * 180 / 3.14;
}

cVector3 operator*(double n, cVector3& vec)
{
	cVector3 temp;

	temp.x = vec.x * n;
	temp.y = vec.y * n;
	temp.z = vec.z * n;

	return temp;
}

std::ostream& operator<<(std::ostream& os, const cVector3& v)
{
	os << "(" << v.x << ", " << v.y << ", " << v.z << ")";

	return os;
}
