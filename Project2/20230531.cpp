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

	//cout << "자동차 메이커와 차종을 입력하시오 : ";
	//cin.getline(automobile, 50);
	//cout << "연식을 입력하시오 : ";
	//cin >> year;
	//cout << "구입 가격을 입력하시오 : ";
	//cin >> a_price;
	//d_price = 0.913 * a_price;

	//cout << fixed;					// 고정 소수점 출력
	//cout.precision(2);				// 보여지는 소수점 자릿수
	//cout.setf(ios_base::showpoint); // 소수점을 보여준다
	//cout << "메이커와 차종 : " << automobile << endl;
	//cout << "연식 : " << year << endl;
	//cout << "구입 가격 $" << a_price << endl;
	//cout << "현재 가격 $" << d_price << endl;

	//outFile << fixed;					// 고정 소수점 출력
	//outFile.precision(4);				// 보여지는 소수점 자릿수
	//outFile.setf(ios_base::showpoint);  // 소수점을 보여준다
	//outFile << "메이커와 차종 : " << automobile << endl;
	//outFile << "연식 : " << year << endl;
	//outFile << "구입 가격 $" << a_price << endl;
	//outFile << "현재 가격 $" << d_price << endl;

	//outFile.close();

	// 파일 쓰기
	ofstream outfile;
	outfile.open("ccc.txt");
	outfile << "ABCEFG" << endl;
	outfile.close();

	// 파일 읽기
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
		cout << "파일 끝에 도달했습니다.\n";
	else if (infile.fail())
		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
	else
		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";


	return 0;
}