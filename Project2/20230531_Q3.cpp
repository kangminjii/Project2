#include <fstream>
#include <iostream>
#include <string>

/*
Q3. p.368 4번
	a. 회원등록 -> 파일 저장
		이름, 직함, bop id
	b. 실명 열람
	c. 직함 열람
	.. 
	q. 종료
*/

using namespace std;
const int strSize = 100;

int main()
{
	char fullName[strSize];
	char title[strSize];
	char bopId[strSize];

	char menu;
	
	int count = 0;

	ofstream outfile;
	outfile.open("bop.txt");

	while (1)
	{
		cout << "a. 회원등록\t b. 실명 열람\t c. 직함 열람\t d. bop ID 열람\t q. 종료" << endl;
		cout << "원하는 것을 선택하십시오 : ";
		cin >> menu;
		cin.get();
		
		ifstream infile;
		infile.open("bop.txt");
		if (!infile.is_open())
		{
			cout << "file is not open" << endl;
			return 0;
		}

		string str;

		switch (menu)
		{
			case 'a':
				cout << "이름, 직함, bop id를 입력해주세요 : " << endl;
				cin.getline(fullName, strSize);
				cin.getline(title, strSize);
				cin.getline(bopId, strSize);
				outfile << fullName << endl;
				outfile << title << endl;
				outfile << bopId << endl;
				break;
			case 'b':
				while (infile.good())
				{
					getline(infile, str);
					count++;
					if (count % 3 == 1)
					{
						cout << str << endl;
					}
					if (infile.eof())
					{
						cout << "끝!" << endl;
						count = 0;
						break;
					}
				}
				break;
			case 'c':
				
				while (infile.good())
				{
					getline(infile, str);
					count++;
					if (count % 3 == 2)
					{
						cout << str << endl;
					}
					if (infile.eof())
					{
						cout << "끝!" << endl;
						count = 0;
						break;
					}
				}
				break;
			case 'd':
				while (infile.good())
				{
					getline(infile, str);
					count++;
					if (count % 3 == 0)
					{
						cout << str << endl;
					}
					if (infile.eof())
					{
						cout << "끝!" << endl;
						count = 0;
						break;
					}
				}
				break;
			case 'q':
				break;

		}
		
		if (menu == 'q')	break;
	}
	outfile.close();

	return 0;
}