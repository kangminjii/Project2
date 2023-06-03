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
	//// #1 참조
	//int rats = 101;
	//int& rodents = rats;

	//cout << rats << " : " << rodents << endl;
	//cout << &rats << " : " << &rodents << endl;

	//int bunnies = 50;
	////rodents = bunnies; // rodents와 rats의 값이 50으로 바뀐다
	//				   // 하지만 주소는 바뀌지 않는다

	//cout << bunnies << " : " << rodents << endl;
	//cout << &bunnies << " : " << &rodents << endl;
	//cout << rats << " : " << &rats << endl;

	//// rodents2는 rats를 참조하기 때문에 포인터가 다른걸 가리켜도 101이다
	//int* pt = &rats;
	//int& rodents2 = *pt;
	//pt = &bunnies;

	//cout << rodents2 << endl;


	//// #2 p.477 swap
	//int wallet1 = 3000;
	//int wallet2 = 3500;

	//cout << "지갑1 = " << wallet1 << "원, 지갑2 = " << wallet2 << "원" << endl;
	//
	//cout << "참조를 이용하여 내용들을 교환: " << endl;
	//swapr(wallet1, wallet2);
	//cout << "지갑1 = " << wallet1 << "원, 지갑2 = " << wallet2 << "원" << endl;

	//cout << "포인터를 이용하여 내용들을 교환: " << endl;
	//swapp(&wallet1, &wallet2);
	//cout << "지갑1 = " << wallet1 << "원, 지갑2 = " << wallet2 << "원" << endl;

	//cout << "값를 이용하여 내용들을 교환: " << endl;
	//swapv(wallet1, wallet2);
	//cout << "지갑1 = " << wallet1 << "원, 지갑2 = " << wallet2 << "원" << endl;


	//// #3 p.486 구조체에 대한 참조

	//// 부분 초기화
	//free_throws one = { "Ifelsa Branch", 13, 14 };
	//free_throws two = { "Andor Knott", 10, 16 };
	//free_throws three = { "Minnie Max", 7, 9 };
	//free_throws four = { "Whily Looper", 5, 9 };
	//free_throws five = { "Long Long", 6, 14 };
	//free_throws team = { "Throwgoods", 0, 0 };

	//// 초기화 X
	//free_throws dup;
	//set_pc(one);
	//display(one);
	//accumulate(team, one);
	//display(team);
	//cout << endl;

	//// 리턴 값을 매개변수로 사용
	//display(accumulate(team, two));
	//accumulate(accumulate(team, three), four);
	//display(team);
	//cout << endl;

	//// 리턴 값을 대입으로 사용
	//dup = accumulate(team, five);
	//cout << "team 출력 : " << endl;
	//display(team);
	//cout << "대입 이후 dup 출력 : " << endl;
	//display(dup);
	//set_pc(four);
	//cout << endl;

	//// 문제의 소지가 있는 대입
	//accumulate(dup, five) = four;
	//cout << "문제의 소지가 있는 대입 이후 dup 출력 : " << endl;
	//display(dup);
	//cout << endl;


	// #4 p.495
	
	string input, copy, result;

	cout << "문자열을 입력하시오 : ";
	getline(cin, input);
	copy = input;
	cout << "입력한 문자열: " << input << endl;
	result = version1(input, "***");
	cout << "바뀐 문자열 : " << result << endl;
	cout << "원래 문자열 : " << input << endl << endl;

	result = version2(input, "###");
	cout << "바뀐 문자열 : " << result << endl;
	cout << "원래 문자열 : " << input << endl << endl;

	cout << "원래 문자열 재설정 " << endl;
	input = copy;
	result = version3(input, "@@@");
	cout << "바뀐 문자열 : " << result << endl;
	cout << "원래 문자열 : " << input << endl;
		 

	return 0;
}

string version1(const string& s1, const string& s2)
{
	string temp = s2 + s1 + s2;
	return temp;
}
const string& version2(string& s1, const string& s2) // 부수 효과, 원래 문자열이 바뀜
{
	s1 = s2 + s1 + s2; // 함수에 전달된 참조를 리턴하므로 안전하다.
	return s1;
}
const string& version3(string& s1, const string& s2) // 나쁜 설계
{
	string temp = s2 + s1 + s2; // 지역 변수에 대한 참조를 리턴하므로 안전하지 않다.
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