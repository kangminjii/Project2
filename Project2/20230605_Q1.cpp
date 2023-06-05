//#include <iostream>
//#include <cmath>
//
///*
//Q1. �� ���簢���� ���� �߽����� x��ǥ, y��ǥ, ��, ���̸� �Է� �޾�
//	�� ��° ���簢���� ù ��° ���簢���� ���ο� �ִ��� ù ��° ���簢����
//	��ġ������ �����ϴ� ���α׷��� �ۼ��϶�.
//
//	ex) 
//	ù ��° �簢�� x,y,width,height : 1 2 3 5.5
//	�� ��° �簢�� x,y,width,height : 3 4 4.5 5
//	�� ��° �簢���� ù ��° �簢���� ���ƴ�.
//
//	ex) 2.5 4 2.5 43
//		1.5 5 0.5 3		���ο�
//	ex) 1 2 3 3
//		40 45 3 2		��ġ�� ����
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
//	cout << "ù ��° �簢�� x, y, width, height : ";
//	cin >> x1 >> y1 >> width1 >> height1;
//	cout << "�� ��° �簢�� x, y, width, height : ";
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
// // 0 0 2 2 2 3 0.10.1 --> �ȸ����� �������� �����Բ� �ٽ� �ۼ�
// 
//	if (left1 <= left2 && right1 >= right2 && down1 <= down2 && up1 >= up2)
//		cout << "�� ���簢���� �ٸ� ���簢�� ���ο� ���� �ֽ��ϴ�." << endl;
//	else if (left1 >= left2 && right1 >= right2)
//	{
//		if(distance > width1 + width2 || distance > height1 + height2)
//			cout << "�� ���簢���� ��ġ�� �ʽ��ϴ�." << endl;
//	}
//	else
//		cout << "�� ���簢���� ��Ĩ�ϴ�." << endl;
//	
//}