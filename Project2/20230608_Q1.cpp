#include <iostream>

/*
Q1. �� p0(x0,y0)�κ��� �� p1(x1,y1)������ ������ �־����� �� �� p2(x2,y2)�� ����
	���� �Ǵ� �����ʿ� �ִ��� �Ǵ��� �� �ִ�.

	�� po,p1,p2�� �Է¹޾� �� p2�� ��� ��ġ�ϴ��� �Ǵ��ϴ� ���α׷��� �ۼ��϶�.

	ex 1) p0, p1, p2 : 4.4 2  6.5 9.5  -5 4
		p2�� ���� ���ʿ� �ִ�.
	ex 2) p0, p1, p2 : 1 1  5 5  2 2 
		p2�� ���� �ִ�.
	ex 3) p0, p1, p2 : 3.4 2  6.5 9.5  5 2.5
		p2�� ���� �����ʿ� �ִ�.
*/

using namespace std;

int main()
{
	double x0, y0, x1, y1, x2, y2;
	cout << "po�� x,y��ǥ : ";
	cin >> x0 >> y0;
	cout << "p1�� x,y��ǥ : ";
	cin >> x1 >> y1;
	cout << "p2�� x,y��ǥ : ";
	cin >> x2 >> y2;

	double midX, midY; // po, p1�� ����
	midX = (x0 + x1) / 2;
	midY = (y0 + y1) / 2;

	double slide; // po - p1 ������ ����
	slide = (y1 - y0) / (x1 - x0);

	if ((y2 - midY) / (x2 - midX) == slide)
	{
		cout << "p2�� ���� �ִ�." << endl;
	}
	else if (slide > 0) // po-p1 ������ ���Ⱑ ����϶�
	{
		if (x2 - midX <= 0)
		{
			if((y2 - midY) / (x2 - midX) > slide)	cout << "p2�� ���� �����ʿ� �ִ�." << endl;
			else									cout << "p2�� ���� ���ʿ� �ִ�." << endl;
		}
		else
		{
			if ((y2 - midY) / (x2 - midX) > slide)	cout << "p2�� ���� ���ʿ� �ִ�." << endl;
			else									cout << "p2�� ���� �����ʿ� �ִ�." << endl;
		}
	}
	else if (slide < 0) // po-p1 ������ ���Ⱑ �����϶�
	{
		if (x2 - midX <= 0)
		{
			if ((y2 - midY) / (x2 - midX) < slide)	cout << "p2�� ���� �����ʿ� �ִ�." << endl;
			else									cout << "p2�� ���� ���ʿ� �ִ�." << endl;
		}
		else
		{
			if ((y2 - midY) / (x2 - midX) < slide)	cout << "p2�� ���� ���ʿ� �ִ�." << endl;
			else									cout << "p2�� ���� �����ʿ� �ִ�." << endl;
		}
	}
	else // po-p1 ������ x���϶�
	{
		if (y2 > 0)		 cout << "p2�� ���� ���ʿ� �ִ�." << endl;
		else if (y2 < 0) cout << "p2�� ���� �Ʒ��ʿ� �ִ�." << endl;
		else			 cout << "p2�� ���� �ִ�." << endl;
	}

}