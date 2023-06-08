#include <iostream>

/*
Q1. 점 p0(x0,y0)로부터 점 p1(x1,y1)까지의 직선이 주어졌을 때 점 p2(x2,y2)가 선의
	왼쪽 또는 오른쪽에 있는지 판단할 수 있다.

	점 po,p1,p2를 입력받아 점 p2가 어디에 위치하는지 판단하는 프로그램을 작성하라.

	ex 1) p0, p1, p2 : 4.4 2  6.5 9.5  -5 4
		p2는 선의 왼쪽에 있다.
	ex 2) p0, p1, p2 : 1 1  5 5  2 2 
		p2는 선상에 있다.
	ex 3) p0, p1, p2 : 3.4 2  6.5 9.5  5 2.5
		p2는 선의 오른쪽에 있다.
*/

using namespace std;

int main()
{
	double x0, y0, x1, y1, x2, y2;
	cout << "po의 x,y좌표 : ";
	cin >> x0 >> y0;
	cout << "p1의 x,y좌표 : ";
	cin >> x1 >> y1;
	cout << "p2의 x,y좌표 : ";
	cin >> x2 >> y2;

	double midX, midY; // po, p1의 중점
	midX = (x0 + x1) / 2;
	midY = (y0 + y1) / 2;

	double slide; // po - p1 직선의 기울기
	slide = (y1 - y0) / (x1 - x0);

	if ((y2 - midY) / (x2 - midX) == slide)
	{
		cout << "p2는 선상에 있다." << endl;
	}
	else if (slide > 0) // po-p1 직선의 기울기가 양수일때
	{
		if (x2 - midX <= 0)
		{
			if((y2 - midY) / (x2 - midX) > slide)	cout << "p2는 선의 오른쪽에 있다." << endl;
			else									cout << "p2는 선의 왼쪽에 있다." << endl;
		}
		else
		{
			if ((y2 - midY) / (x2 - midX) > slide)	cout << "p2는 선의 왼쪽에 있다." << endl;
			else									cout << "p2는 선의 오른쪽에 있다." << endl;
		}
	}
	else if (slide < 0) // po-p1 직선의 기울기가 음수일때
	{
		if (x2 - midX <= 0)
		{
			if ((y2 - midY) / (x2 - midX) < slide)	cout << "p2는 선의 오른쪽에 있다." << endl;
			else									cout << "p2는 선의 왼쪽에 있다." << endl;
		}
		else
		{
			if ((y2 - midY) / (x2 - midX) < slide)	cout << "p2는 선의 왼쪽에 있다." << endl;
			else									cout << "p2는 선의 오른쪽에 있다." << endl;
		}
	}
	else // po-p1 직선이 x축일때
	{
		if (y2 > 0)		 cout << "p2는 선의 위쪽에 있다." << endl;
		else if (y2 < 0) cout << "p2는 선의 아래쪽에 있다." << endl;
		else			 cout << "p2는 선상에 있다." << endl;
	}

}