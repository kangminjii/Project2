#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char automobile[50];
	int year;
	double a_price, d_price;

	//ofstream outFile;
	//outFile.open("carinfo.txt");

	//cout << "�ڵ��� ����Ŀ�� ������ �Է��Ͻÿ� : ";
	//cin.getline(automobile, 50);
	//cout << "������ �Է��Ͻÿ� : ";
	//cin >> year;
	//cout << "���� ������ �Է��Ͻÿ� : ";
	//cin >> a_price;
	//d_price = 0.913 * a_price;

	//cout << fixed;					// ���� �Ҽ��� ���
	//cout.precision(2);				// �������� �Ҽ��� �ڸ���
	//cout.setf(ios_base::showpoint); // �Ҽ����� �����ش�
	//cout << "����Ŀ�� ���� : " << automobile << endl;
	//cout << "���� : " << year << endl;
	//cout << "���� ���� $" << a_price << endl;
	//cout << "���� ���� $" << d_price << endl;

	//outFile << fixed;					// ���� �Ҽ��� ���
	//outFile.precision(4);				// �������� �Ҽ��� �ڸ���
	//outFile.setf(ios_base::showpoint);  // �Ҽ����� �����ش�
	//outFile << "����Ŀ�� ���� : " << automobile << endl;
	//outFile << "���� : " << year << endl;
	//outFile << "���� ���� $" << a_price << endl;
	//outFile << "���� ���� $" << d_price << endl;

	//outFile.close();

	// ���� ����
	ofstream outfile;
	outfile.open("ccc.txt");
	outfile << "ABCEFG" << endl;
	outfile.close();

	// ���� �б�
	ifstream infile;
	infile.open("ccc.txt");
	if (!infile.is_open())
	{
		cout << "file is not open" << endl;
		return 0;
	}
	string str;
	infile >> str;
	cout << str << endl;

	if (infile.eof())
		cout << "���� ���� �����߽��ϴ�.\n";
	else if (infile.fail())
		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n";
	else
		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�.\n";


	return 0;
}