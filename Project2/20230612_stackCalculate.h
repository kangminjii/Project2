#include <string>
using namespace std;

class stackCalculate
{
private:
	// ť�� ���� ��ü �뷮
	int max;
	// ����
	char ptr;
	char* stk;
	// ť
	int num; 
	char front;
	char rear; 
	char* que; 
public:
	// ����
	string InitializeStack(int max);
	string Push(char c);
	string Pop(char* c);
	// ť
	string InitializeQueue(int max); 
	string Enque(char c); 
	string Deque(char* c); 
	// ���
	void PrintStack();
	void PrintQueue();
};