#include <iostream>

/*
Q3. p.122 연습문제 Q4처럼 이진검색 과정을
	자세히 출력하는 프로그램을 작성하시오.
	선형검색과 이진검색의 속도를 비교하라.

	5 7 15 28 29 31 39 58 68 72 95
*/

using namespace std;

int main()
{
	int n;
	cout << "원소의 총 개수 : ";
	cin >> n;

	int array[sizeof(n)];
	int* arrayPointer = array;
	cout << "배열을 입력해주세요 : ";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	int answer;
	cout << "찾고 싶은 수 : ";
	cin >> answer;
	int location = n / 2;
	while (*array)
	{
		if (answer > array[n / 2])
		{
			arrayPointer = &array[n - location / 2];

		}
	
	
	
	}
	
	





	return 0;
}