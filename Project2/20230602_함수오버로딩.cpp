#include <iostream>

using namespace std;

// #1
unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);
// #2
template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T* a, T* b, int n);
void Show(int a[]);
const int Lim = 8;
// #3
template <typename T>
void Swap2(T& a, T& b);
struct job
{
	char name[40];
	double salary;
	int floor;
};
template <> void Swap2<job>(job& j1, job& j2);
void Show2(job& j);

int main()
{
	// #1 p.514  함수의 오버로딩
	/*const char* trip = "Hawaii!!";
	unsigned long n = 12345678;
	char* temp;

	for (int i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[]temp;
	}*/


	// #2 p.522 함수 템플릿의 오버로딩
	/*int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << "." << endl;
	cout << "컴파일러가 생성한 int형 교환기를 사용하면" << endl;
	Swap(i, j);
	cout << "이제 i, j = " << i << ", " << j << "." << endl;

	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,6,2,0,1,9,6,9 };
	cout << "원본 배열 : " << endl;
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "교환된 배열 : " << endl;
	Show(d1);
	Show(d2);*/


	// #3 p.528 명시적 특수화
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << "." << endl;
	cout << "컴파일러가 생성한 int형 교환기를 사용하면" << endl;
	Swap2(i, j);
	cout << "이제 i, j = " << i << ", " << j << "." << endl;
	
	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee", 78060.72, 9 };
	cout << "job 교환전 : " << endl;
	Show2(sue);
	Show2(sidney);
	Swap2(sue, sidney);
	cout << "job 교환후 : " << endl;
	Show2(sue);
	Show2(sidney);

	return 0;
}

// #3
template <typename T>
void Swap2(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template <> void Swap2<job>(job& j1, job& j2)
{
	double t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	int t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show2(job& j)
{
	cout << j.name << ": (" << j.floor << "층에 거주) " << "$" << j.salary << endl;
}

// #2
template <typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void Show(int a[])
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

// #1
unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)	return 0;
	while (n /= 10)
	{
		digits++;
	}
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
		{
			num /= 10;
		}
		return num;
	}
	else
		return num;
}
char* left(const char* str, int n)
{
	if (n < 0)	n = 0;
	
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}