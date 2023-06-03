#include <iostream>
#include <string>

using namespace std;

void swapr(int& a, int& b);
void swapp(int* a, int* b);
void swapv(int a, int b);

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);

int main()
{
	//// #1 ����
	//int rats = 101;
	//int& rodents = rats;

	//cout << rats << " : " << rodents << endl;
	//cout << &rats << " : " << &rodents << endl;

	//int bunnies = 50;
	////rodents = bunnies; // rodents�� rats�� ���� 50���� �ٲ��
	//				   // ������ �ּҴ� �ٲ��� �ʴ´�

	//cout << bunnies << " : " << rodents << endl;
	//cout << &bunnies << " : " << &rodents << endl;
	//cout << rats << " : " << &rats << endl;

	//// rodents2�� rats�� �����ϱ� ������ �����Ͱ� �ٸ��� �����ѵ� 101�̴�
	//int* pt = &rats;
	//int& rodents2 = *pt;
	//pt = &bunnies;

	//cout << rodents2 << endl;


	//// #2 p.477 swap
	//int wallet1 = 3000;
	//int wallet2 = 3500;

	//cout << "����1 = " << wallet1 << "��, ����2 = " << wallet2 << "��" << endl;
	//
	//cout << "������ �̿��Ͽ� ������� ��ȯ: " << endl;
	//swapr(wallet1, wallet2);
	//cout << "����1 = " << wallet1 << "��, ����2 = " << wallet2 << "��" << endl;

	//cout << "�����͸� �̿��Ͽ� ������� ��ȯ: " << endl;
	//swapp(&wallet1, &wallet2);
	//cout << "����1 = " << wallet1 << "��, ����2 = " << wallet2 << "��" << endl;

	//cout << "���� �̿��Ͽ� ������� ��ȯ: " << endl;
	//swapv(wallet1, wallet2);
	//cout << "����1 = " << wallet1 << "��, ����2 = " << wallet2 << "��" << endl;


	//// #3 p.486 ����ü�� ���� ����

	//// �κ� �ʱ�ȭ
	//free_throws one = { "Ifelsa Branch", 13, 14 };
	//free_throws two = { "Andor Knott", 10, 16 };
	//free_throws three = { "Minnie Max", 7, 9 };
	//free_throws four = { "Whily Looper", 5, 9 };
	//free_throws five = { "Long Long", 6, 14 };
	//free_throws team = { "Throwgoods", 0, 0 };

	//// �ʱ�ȭ X
	//free_throws dup;
	//set_pc(one);
	//display(one);
	//accumulate(team, one);
	//display(team);
	//cout << endl;

	//// ���� ���� �Ű������� ���
	//display(accumulate(team, two));
	//accumulate(accumulate(team, three), four);
	//display(team);
	//cout << endl;

	//// ���� ���� �������� ���
	//dup = accumulate(team, five);
	//cout << "team ��� : " << endl;
	//display(team);
	//cout << "���� ���� dup ��� : " << endl;
	//display(dup);
	//set_pc(four);
	//cout << endl;

	//// ������ ������ �ִ� ����
	//accumulate(dup, five) = four;
	//cout << "������ ������ �ִ� ���� ���� dup ��� : " << endl;
	//display(dup);
	//cout << endl;


	// #4 p.495
	
	string input, copy, result;

	cout << "���ڿ��� �Է��Ͻÿ� : ";
	getline(cin, input);
	copy = input;
	cout << "�Է��� ���ڿ�: " << input << endl;
	result = version1(input, "***");
	cout << "�ٲ� ���ڿ� : " << result << endl;
	cout << "���� ���ڿ� : " << input << endl << endl;

	result = version2(input, "###");
	cout << "�ٲ� ���ڿ� : " << result << endl;
	cout << "���� ���ڿ� : " << input << endl << endl;

	cout << "���� ���ڿ� �缳�� " << endl;
	input = copy;
	result = version3(input, "@@@");
	cout << "�ٲ� ���ڿ� : " << result << endl;
	cout << "���� ���ڿ� : " << input << endl;
		 

	return 0;
}

string version1(const string& s1, const string& s2)
{
	string temp = s2 + s1 + s2;
	return temp;
}
const string& version2(string& s1, const string& s2) // �μ� ȿ��, ���� ���ڿ��� �ٲ�
{
	s1 = s2 + s1 + s2; // �Լ��� ���޵� ������ �����ϹǷ� �����ϴ�.
	return s1;
}
const string& version3(string& s1, const string& s2) // ���� ����
{
	string temp = s2 + s1 + s2; // ���� ������ ���� ������ �����ϹǷ� �������� �ʴ�.
	return temp;
}

void display(const free_throws& ft)
{
	cout << "Name : " << ft.name << endl << "Made : " << ft.made;
	cout << "\tAttempts : " << ft.attempts << "\tPercent : " << ft.percent << endl;
}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}

void swapr(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swapp(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}