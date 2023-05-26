#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
char* getname(void);

int main()
{
	char* name;

	name = getname();
	cout << (int*)name << ": " << name << endl;
	delete[] name;

	name = getname();
	cout << (int*)name << ": " << name << endl;
	delete[] name;

	return 0;
}

char* getname()
{
	char temp[80];
	cout << "이름을 입력하시오: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}