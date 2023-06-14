#define _CRT_SECURE_NO_WARNINGS
#include "20230614_strngbad.h"
#include <cstring>

int StringBad::num_strings = 0;

StringBad::StringBad(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	std::cout << num_strings << ": \"" << str << "\" ��ü ����\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	std::cout << num_strings << ": \"" << str << "\" ����Ʈ��ü ����\n";
}

StringBad::~StringBad()
{
	std::cout << "\"" << str << "\" ��ü �ı�, ";
	num_strings--;
	std::cout << "���� ��ü �� : " << num_strings << std::endl;
	delete[] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
}