#include <iostream>
#include <string>

using namespace std;

const int ArSize = 8;
int sum_arr(const int* begin, const int* end);
unsigned int c_in_str(const char* str, char ch);

struct polar 
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

void rect_to_polar2(const rect *pxy, polar *pda);
void show_polar2(const polar* pda);

const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

const double* f1(const double* ar, int n);
const double* f2(const double ar[], int n);
const double* f3(const double ar[], int n);

int main()
{
	//int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };

	//int sum = sum_arr(cookies, cookies + ArSize);
	//cout << "���� ���� �� �հ�: " << sum << endl;
	//sum = sum_arr(cookies, cookies + 3);
	//cout << "ó�� �� ����� ���� " << sum << "���� �Ծ����ϴ�." << endl;
	//sum = sum_arr(cookies + 4, cookies + 8);
	//cout << "������ �� ����� ���� " << sum << "���� �Ծ����ϴ�." << endl;


	//char mmm[15] = "minimum";

	//// ���ڿ� ��� char*�� �����Ű�� �ȵȴ�, ���� const�� �ٿ��� �Ѵ�
	//const char* wail = "ululate";

	//unsigned int ms = c_in_str(mmm, 'm');
	//unsigned int us = c_in_str(wail, 'u');

	//cout << mmm << "���� m�� " << ms << "�� ������ϴ�." << endl;
	//cout << wail << "���� u�� " << us << "�� ������ϴ�." << endl;


	rect rplace;
	polar pplace;

	// p.426
	/*cout << "x���� y���� �Է��Ͻÿ� : ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�) : ";
	}
	cout << "���α׷��� �����մϴ�." << endl;*/

	// p.431
	/*cout << "x���� y���� �Է��Ͻÿ� : ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar2(&rplace, &pplace);
		show_polar2(&pplace);
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�) : ";
	}
	cout << "���α׷��� �����մϴ�." << endl;*/


	// p.441
	// ���ȣ��
	// Len = 66, Divs = 6
	//char ruler[Len];
	//for (int i = 1; i < Len - 2; i++) // 1~63
	//	ruler[i] = ' ';
	//ruler[Len - 1] = '\0';
	//int max = Len - 2;
	//int min = 0;
	//ruler[min] = ruler[max] = '|'; // ù��
	//cout << ruler << endl;
	//for (int i = 1; i <= Divs; i++) // 6�� ���
	//{
	//	subdivide(ruler, min, max, i);
	//	cout << ruler << endl;
	//	for (int j = 1; j < Len - 2; j++)
	//		ruler[j] = ' ';
	//}


	// p.451
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2;

	cout << "�Լ� ������ : " << endl << "�ּ� ��" << endl;
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double* (*pa[3])(const double*, int) = { f1, f2, f3 };
	auto pb = pa;


	cout << endl << "�Լ� �����͸� ���ҷ� ������ �迭: " << endl << "�ּ� �� " << endl;
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << endl << "�Լ� �����͸� ����Ű�� ������: " << endl << "�ּ� �� " << endl;
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;


	cout << endl << "�����͸� ���ҷ� ������ �迭�� ����Ű�� ������: " << endl << "�ּ� �� " << endl;
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	const double* (*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;


	return 0;
}

const double* f1(const double* ar, int n)
{
	return ar;
}
const double* f2(const double ar[], int n)
{
	return ar + 1;
}
const double* f3(const double ar[], int n)
{
	return ar + 2;
}




void subdivide(char ar[], int low, int high, int level)
{
	char ch;
	if (level == 0)	return;
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	//cin.get(ch); // ���ȣ�� ���� Ȯ�ο�
	subdivide(ar, mid, high, level - 1);
}

polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(pow(xypos.x, 2) + pow(xypos.y, 2));
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
void rect_to_polar2(const rect *pxy, polar*pda)
{
	pda->distance = sqrt(pow(pxy->x, 2) + pow(pxy->y, 2));
	pda->angle = atan2(pxy->y, pxy->x);
}

void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << dapos.distance;
	cout << ", ���� = " << dapos.angle * Rad_to_deg;
	cout << "��" << endl;
}
void show_polar2(const polar* pda)
{
	const double Rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << pda->distance;
	cout << ", ���� = " << pda->angle * Rad_to_deg;
	cout << "��" << endl;
}

unsigned int c_in_str(const char* str, char ch)
{
	int count = 0; 

	while (*str)
	{
		if (*str == ch)	count++;
		str++;
	}
	return count;
}
int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
	{
		cout << *pt << " ";
		total += *pt;
	}
	cout << endl;

	return total;
}