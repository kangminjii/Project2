#include "20230612_stackCalculate.h"
#include <iostream>

string stackCalculate::InitializeStack(int max1)
{
	ptr = 0;
	max = max1;
	stk = (char*)calloc(max, sizeof(char));

	if (stk == NULL)		return "-1"; // �Ҵ��� �߸��ƴ�
	else return "Yes";
}

string stackCalculate::Push(char c)
{
	if (ptr >= max)	return "-1"; // �迭 ����� �Ѿ���
	else
	{
		stk[ptr] = c;
		ptr++;
		return "Yes";
	}
}

string stackCalculate::Pop(char* c)
{
	if (ptr <= 0)	return "-1"; // �迭�� ����� ���� ����
	else
	{
		stk[ptr] = NULL;
		ptr--;
		*c = stk[ptr];
		return c;
	}
}

string stackCalculate::InitializeQueue(int max1)
{
	max = max1;
	num = 0;
	front = 0;
	rear = 0;

	que = (char*)calloc(max, sizeof(char));
	if (que == NULL)	return "-1";
	else return "Yes";
}

string stackCalculate::Enque(char c)
{
	if (num >= max)		return "-1";
	else
	{
		que[rear] = c;
		num++;
		rear++;
		if (rear == max)	rear = 0;
		return "Yes";
	}
}

string stackCalculate::Deque(char* c)
{
	if (num <= 0)	return "-1";
	else
	{
		num--;
		*c = que[front];
		que[front] = NULL;
		front++;
		if (front == max)	front = 0;
		return c;
	}
}

void stackCalculate::PrintStack()
{
	cout << "Stack : ";
	for (int i = 0; i < ptr; i++)
	{
		cout << stk[i] << " ";
	}
	cout << endl;
}

void stackCalculate::PrintQueue()
{
	cout << "Queue : ";
	for (int i = 0; i < num; i++)
	{
		cout << que[(i + front) % max] << " ";
	}
	cout << endl;
}
