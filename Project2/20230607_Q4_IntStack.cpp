#include <stdio.h>
#include <stdlib.h>
#include "20230607_Q4.h"

//typedef struct
//{
//	int max;
//	int ptr;
//	int* stk;
//} IntStack;

int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	s->max = max;
	s->stk = (int*)calloc(max, sizeof(int));

	if (s->stk == NULL)		return -1; // 할당이 잘못됐다
	else return 0;
}

int Push(IntStack* s, int x)
{
	if (s->ptr >= s->max)	return -1; // 배열 사이즈를 넘었다
	else
	{
		s->stk[s->ptr] = x;
		s->ptr++;
		return 0;
	}
}

int Pop(IntStack* s, int* x)
{
	if (s->ptr <= 0)	return -1; // 배열에 저장된 값이 없다
	else
	{
		s->stk[s->ptr] = NULL;
		s->ptr--;
		*x = s->stk[s->ptr];
		return 0;
	}
}

int Peek(const IntStack* s, int* x)
{
	if (s->ptr <= 0)		return -1;
	else
	{
		*x = s->stk[s->ptr];
		return 0;
	}
}

void Clear(IntStack* s);

int Capacity(const IntStack* s);
int Size(const IntStack* s);
int IsEmpty(const IntStack* s);
int IsFull(const IntStack* s);
int Search(const IntStack* s, int x);

void Print(const IntStack* s)
{
	for (int i = 0; i < s->ptr; i++)
	{
		printf("%d ", s->stk[i]);
	}
	printf("\n");
}

void Terminate(IntStack* s)
{
	delete s;
}