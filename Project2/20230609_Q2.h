#pragma once
#include <iostream>
/*
Q2. ���� ���� Ŭ������ �����϶�.
	������ ������ ������ �����ε��� �̿��� �����϶�.
*/

class cVector3
{
private:
	double x, y, z;
public:
	// ������&�Ҹ���
	cVector3();
	cVector3(double a, double b, double c);
	~cVector3();

	// ������ �����ε�
	bool operator==(cVector3& vec);
	bool operator!=(cVector3& vec);
	cVector3 operator+(const cVector3& v) const;
	cVector3 operator-(const cVector3& v) const;
	cVector3 operator/(const cVector3& v) const;
	
	//��� �Լ�
	double length(); // ���� ����
	cVector3 Normalize(); // ���� ����

	double Dot(cVector3& v1);
	cVector3 Cross(cVector3& v1);
	double Angle(cVector3& v1);

	friend cVector3 operator*(double n, cVector3& vec);
	friend std::ostream& operator<<(std::ostream& os, const cVector3& v);
};