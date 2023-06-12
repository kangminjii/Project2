/*
Q3. ���� ����
	[���� ǥ��� �����]
	1. ������ �켱������ ( ) < + - < * /
	2. ���� ǥ������� �ѱ��ھ� �о���δ�
	3. �о���� ���ڰ� ������ �̸�
		- ���� ��ȣ �̸� �׳� ���ÿ� �߰� ( Operator Stack )
		- ������ ��ȣ �̸� ���ÿ��� ���� ��ȣ�� ���������� �ϳ��� ���� ť�� �Ű��ش�.
			���� ��ȣ�� ������ �Ѵ� ������.
		- ������ ��Ģ ������ �� �����ڰ� ���ÿ��� ���� �����ں��� 
			�켱������ ���ų� ���� ���ȿ��� ��� ť�� �Ű��ش�.
			�׸��� �ڽ��� ���ÿ� �߰��Ѵ�.
	4. �о���� ���ڰ� �ǿ����� �̸� ť�� �ִ´�. ( PostFix Queue )

	2~4�� ������ �ݺ��ؼ� ���� ǥ����� �����. ( PostFix Queue )
	
	[��� ����]
	5. ť���� �����͸� �о� �������� �ű��. ( Operand Stack )
		- ť���� ���� �ϳ��� �д´�.
		- �ǿ����� �̸� ���ÿ� ����
		- ������ �̸� ���ÿ��� ���� �ΰ� ������ �����ڿ� ���� ������ �ϰ�  
			�� ����� �ٽ� ���ÿ� ����

	ť�� ���� ���� ������ 5�� ������ �ݺ��ؼ� ���� ��갪�� ���Ѵ�.
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
		cout << "������ �� �� �����ϴ�." << endl;
		return 1;
	}

	stackCalculate Operator_Stack, Operator_Queue;
	
	if (Operator_Stack.InitializeStack(64) == "0")
	{
		puts("���� ������ �����߽��ϴ�.");
		return 1;
	}
	if (Operator_Queue.InitializeQueue(64) == "0")
	{
		puts("ť ������ �����߽��ϴ�.");
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
				puts("\a����: Ǫ�ÿ� �����߽��ϴ�.");
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
		else // �����϶�
		{
			if (Operator_Queue.Enque(ch[i]) == "0")
			{
				puts("\a����: ��ť�� �����߽��ϴ�.");
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