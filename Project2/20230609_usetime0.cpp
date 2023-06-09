#include <iostream>
#include "20230609_mytime0.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;
	
	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	//total = coding.Sum(fixing);
	total = coding + fixing; // 연산자 오버로딩
							// 제공하지 않는 기능을 정의함으로써 사용가능하게 함
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	return 0;
}