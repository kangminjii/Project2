//#include <iostream>
//#include <cmath>
//
///*
//Q1. 두 직사각형에 대해 중심점의 x좌표, y좌표, 폭, 높이를 입력 받아
//	두 번째 직사각형이 첫 번째 직사각형의 내부에 있는지 첫 번째 직사각형과
//	겹치는지를 결정하는 프로그램을 작성하라.
//
//	ex) 
//	첫 번째 사각형 x,y,width,height : 1 2 3 5.5
//	두 번째 사각형 x,y,width,height : 3 4 4.5 5
//	두 번째 사각형은 첫 번째 사각형과 겹쳤다.
//
//	ex) 2.5 4 2.5 43
//		1.5 5 0.5 3		내부에
//	ex) 1 2 3 3
//		40 45 3 2		겹치지 않음
//*/
//
//
//using namespace std;
//
//void isInside(double, double, double, double, double, double, double, double);
//
//int main()
//{
//	double x1, x2, y1, y2, width1, width2, height1, height2;
//
//	cout << "첫 번째 사각형 x, y, width, height : ";
//	cin >> x1 >> y1 >> width1 >> height1;
//	cout << "두 번째 사각형 x, y, width, height : ";
//	cin >> x2 >> y2 >> width2 >> height2;
//
//	isInside(x1, x2, y1, y2, width1, width2, height1, height2);
//
//
//	return 0;
//}
//
//void isInside(double x1, double x2, double y1, double y2, double width1, double width2, double height1, double height2)
//{
//	double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//
//	width1 /= 2;	width2 /= 2;
//	height1 /= 2;	height2 /= 2;
//	
//	double left1 = x1 - width1;
//	double left2 = x2 - width2;
//	double right1 = x1 + width1;
//	double right2 = x2 + width2;
//	double down1 = y1 - height1;
//	double down2 = y2 - height2;
//	double up1 = y1 + height1;
//	double up2 = y2 + height2;
//
// // 0 0 2 2 2 3 0.10.1 --> 안만나는 조건으로 나오게끔 다시 작성
// 
//	if (left1 <= left2 && right1 >= right2 && down1 <= down2 && up1 >= up2)
//		cout << "한 직사각형은 다른 직사각형 내부에 속해 있습니다." << endl;
//	else if (left1 >= left2 && right1 >= right2)
//	{
//		if(distance > width1 + width2 || distance > height1 + height2)
//			cout << "두 직사각형은 겹치지 않습니다." << endl;
//	}
//	else
//		cout << "두 직사각형은 겹칩니다." << endl;
//	
//}