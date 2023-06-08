#include <iostream>

/*
Q2. ������ �� �ܾ �����ϰ� ����ڰ� �� ���� �� ���ڸ��� �����ϵ��� �ؼ� �ܾ ���ߴ� ����.
	�ܾ��� �� ���ڴ� '*'���� ǥ�õȴ�.
	����ڰ� �ùٸ� ������ ���� ���� ���� ���ڰ� ȭ�鿡 ǥ�õȴ�.
	����ڰ� �ܾ� ���߱⸦ ������ �� �Ǽ��� Ƚ���� ǥ���ϰ�, �ٸ� �ܾ�� ����� �������� ������ �Ѵ�.
	ex) ������ �ܾ� -> apple
		�ܾ��� �� ���ڸ� �Է��Ͻÿ�. ***** > a
									 a****
		�ܾ��� �� ���ڸ� �Է��Ͻÿ�. a**** > r
			r�� �ܾ ���Ե��� �ʽ��ϴ�.
		�ܾ��� �� ���ڸ� �Է��Ͻÿ�. a**** > a
			a�� �̹� �ܾ ���ԵǾ� �ֽ��ϴ�.
		....
		�� xx�� ����, oo�� ���� ���� ! apple
*/

using namespace std;

void check(char*, char*, char, int);

int main()
{

	char* answer = new char[sizeof(answer)*10];
	char* semiAnswer = new char[sizeof(semiAnswer) * 10];
	char alphabet = ' ';
	int size = 0, fail = 0, pass = 0;

	cout << "������ �ܾ� -> ";
	cin >> answer;

	for (int i = 0; i < sizeof(answer) * 10; i++)
	{
		if (answer[i] == '\0')
		{
			semiAnswer[i] = '\0';
			break;
		}
		size++;
		semiAnswer[i] = '*'; // �ʱ�ȭ
	}
	
	cout << "�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. " << semiAnswer << " > ";

	while (1)
	{
		int count = 0;
		int number = 0;
		int exit = 0;
		
		cin >> alphabet;

		// �ߺ�����
		for (int i = 0; i < size; i++)
		{
			if (semiAnswer[i] == alphabet)
			{
				cout << "\t" << alphabet << "�� �̹� �ܾ ���ԵǾ� �ֽ��ϴ�." << endl;
				number = 1;
				break;
			}
		}
		// ���Ե��� ���� & ���� ����
		for (int i = 0; i < size; i++)
		{
			if (answer[i] == alphabet)
			{
				count++;
			}
		}
		if (!count)
		{
			cout << "\t" << alphabet << "�� �ܾ ���Ե��� �ʽ��ϴ�." << endl;
			fail++;
		}
		// ��� & ���� ����
		if (count && !number)
		{
			cout << "\t\t\t";
			check(answer, semiAnswer, alphabet, size);
			cout << endl;
			pass++;
		}
		// Ż��
		for (int i = 0; i < size; i++)
		{
			if (answer[i] == semiAnswer[i]) exit++;
		}
		if (exit == size)
		{
			cout << "��" << fail << "�� ����, " << pass << "�� ���� ���� !  " << answer << endl;
			break;
		}

		cout << "�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. " << semiAnswer << " > ";
	}

}

void check(char* answer, char* semiAnswer, char alphabet, int size)
{

	for (int i = 0; i < size; i++)
	{
		if (answer[i] == alphabet)
		{
			cout << answer[i];
			semiAnswer[i] = answer[i];
		}
		else if (semiAnswer[i] != '*')
		{
			cout << semiAnswer[i];
		}
		else
		{
			cout << "*";
			semiAnswer[i] = '*';
		}
	}
}
