#define _CRT_SECURE_NO_WARNINGS
#include "20230615_string2.h"
#include <cstring>

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

String& String::operator+(const char* s)
{
	char* temp = this->str;

	this->len += strlen(s);
	this->str = new char[len + 1];

	std::strcpy(this->str, temp);
	std::strcat(this->str, s);

	delete[] temp;
	return *this;
}
String& String::operator+(const String& st)
{
	char* temp = this->str;

	this->len += st.len;
	this->str = new char[len + 1];

	std::strcpy(this->str, temp);
	std::strcat(this->str, st.str);
	
	delete[] temp;
	return *this;
}
String& operator+(const char* s, String& st)
{
	String temp(s);

	st = temp + st;

	return st;
}

String& String::stringlow()
{
	for (int i = 0; i < this->len; i++)
	{
		this->str[i] = tolower(this->str[i]);
	}

	return *this;
}

String& String::stringup()
{
	for (int i = 0; i < this->len; i++)
	{
		this->str[i] = toupper(this->str[i]);
	}

	return *this;
}

int String::has(char s)
{
	int count = 0;
	for (int i = 0; i < this->len; i++)
	{
		if (this->str[i] == s)	count++;
	}

	return count;
}
