#pragma once
#include <iostream>
/*
Q2. 다음 벡터 클래스를 구현하라.
	벡터의 연산을 연산자 오버로딩을 이용해 적상하라.
*/

class cVector3
{
private:
	double x, y, z;
public:
	// 생성자&소멸자
	cVector3();
	cVector3(double a, double b, double c);
	~cVector3();

	// 연산자 오버로딩
	bool operator==(cVector3& vec);
	bool operator!=(cVector3& vec);
	cVector3 operator+(const cVector3& v) const;
	cVector3 operator-(const cVector3& v) const;
	cVector3 operator/(const cVector3& v) const;
	
	//멤버 함수
	double length(); // 벡터 길이
	cVector3 Normalize(); // 단위 벡터

	double Dot(cVector3& v1);
	cVector3 Cross(cVector3& v1);
	double Angle(cVector3& v1);

	friend cVector3 operator*(double n, cVector3& vec);
	friend std::ostream& operator<<(std::ostream& os, const cVector3& v);
};