/*
Q3. 스택 계산기
	[후위 표기식 만들기]
	1. 연산자 우선순위는 ( ) < + - < * /
	2. 중위 표기법에서 한글자씩 읽어들인다
	3. 읽어들인 글자가 연산자 이면
		- 왼쪽 괄호 이면 그냥 스택에 추가 ( Operator Stack )
		- 오른쪽 괄호 이면 스택에서 왼쪽 괄호를 만날때까지 하나씩 꺼내 큐로 옮겨준다.
			왼쪽 괄호와 만나면 둘다 버린다.
		- 나머지 사칙 연산은 그 연산자가 스택에서 꺼낸 연산자보다 
			우선순위가 높거나 같은 동안에는 계속 큐로 옮겨준다.
			그리고 자신을 스택에 추가한다.
	4. 읽어들인 글자가 피연산자 이면 큐에 넣는다. ( PostFix Queue )

	2~4의 과정을 반복해서 후위 표기식을 만든다. ( PostFix Queue )
	
	[계산 과정]
	5. 큐에서 데이터를 읽어 스택으로 옮긴다. ( Operand Stack )
		- 큐에서 값을 하나씩 읽는다.
		- 피연산자 이면 스택에 저장
		- 연산자 이면 스택에서 값을 두개 꺼내서 연산자에 대한 연산을 하고  
			그 결과를 다시 스택에 저장

	큐에 값이 없을 때까지 5의 과정을 반복해서 최종 계산값을 구한다.
*/

#include <iostream>
#include <fstream>
#include <string>
#include "20230612_stackCalculate.h"

using namespace std;

int main()
{
	char ch[200];
	char temp, x;

	ifstream file("calc.txt");
	if (!file.is_open())	
	{
		cout << "파일을 열 수 없습니다." << endl;
		return 1;
	}

	stackCalculate Operator_Stack, Operator_Queue;
	
	if (Operator_Stack.InitializeStack(64) == "0")
	{
		puts("스택 생성에 실패했습니다.");
		return 1;
	}
	if (Operator_Queue.InitializeQueue(64) == "0")
	{
		puts("큐 생성에 실패했습니다.");
		return 1;
	}
	int i = 0;
	while (file.good())
	{
		file.get(ch[i]);

		if (ch[i] == '(')
		{
			if (Operator_Stack.Push(ch[i]) == "-1")
			{
				puts("\a오류: 푸시에 실패했습니다.");
				break;
			}
			
			Operator_Stack.PrintStack();
		}
		else if (ch[i] == ')')
		{
			do
			{
				Operator_Stack.Pop(&temp);
				Operator_Queue.Enque(temp);
			} while (temp != '(');

			Operator_Stack.Pop(&temp);

			Operator_Stack.PrintStack();
			Operator_Queue.PrintQueue();
		}
		else if (ch[i] == '+' || ch[i] == '-')
		{
			if (ch[i - 1] == '*' || ch[i - 1] == '/')
			{
				Operator_Stack.Pop(&temp);
				Operator_Queue.Enque(temp);
				Operator_Stack.Push(ch[i]);
			}
			else	Operator_Stack.Push(ch[i]);

			Operator_Stack.PrintStack();
			Operator_Queue.PrintQueue();
		}
		else if (ch[i] == '*' || ch[i] == '/')
		{
			Operator_Stack.Push(ch[i]);
			Operator_Stack.PrintStack();
		}
		else // 숫자일때
		{
			if (Operator_Queue.Enque(ch[i]) == "0")
			{
				puts("\a오류: 인큐에 실패했습니다.");
				break;
			}

			Operator_Queue.PrintQueue();
		}

		i++;
	}

	cout << "Final Stack : "; 
	Operator_Stack.PrintStack();
	cout << endl;
	cout << "Final Queue : ";
	Operator_Queue.PrintQueue(); 
	cout << endl;
	return 0;
}