#include <iostream>

/*
Q1. ������� ���ӵ� a�� �̷��ӵ� v�� �־����� ��,
	����Ⱑ �̷��ϱ� ���� �ּ� Ȱ�� ���̸� ����ϴ� ���α׷��� �ۼ��϶�.
		���� = v^2 / 2a
	
	����ڿ��� m/s ������ v�� m/s^2 ������ a�� �Է��ϵ��� �˷��ְ�,
	�ּ� Ȱ�� ���̸� ����ϴ� ���α׷��� �ۼ�.
	ex) Speed and Accelation : 60 3.5
		Minimum runway length : 514.286
*/

using namespace std;

int main()
{
	double speed, accelation;
	double minRunwayLength;

	cout << "����Ⱑ �̷��ϱ� ���� �ּ� Ȱ�� ���̸� ���ϱ� ���� �ӵ��� ���ӵ��� �Է����ּ��� : ";
	cin >> speed >> accelation;

	minRunwayLength = (speed * speed) / (2 * accelation);

	cout << "�ּ� Ȱ�� ���� : " << minRunwayLength << endl;
}