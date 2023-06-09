#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Q1. 疑穿聖 拷幻 腰 揮走澗 依聖 獣皇傾戚芝馬壱
	蒋檎引 急檎税 呪研 窒径馬澗 覗稽益轡聖 拙失馬虞.
	陥製引 旭戚 唖 蒋及亜 護 %梢 蟹神澗走 域至背 窒径背虞

	ex)
		100		腰属析 凶 ... 蒋檎 しし% 急檎 しし%
		...
		1000	腰属析 凶 ... 蒋檎 しし% 急檎 しし%
		...
		10000	腰属析 凶 ... 蒋檎 しし% 急檎 しし%
		...
		100000	腰属析 凶 ... 蒋檎 しし% 急檎 しし%
*/

using namespace std;

int main()
{
	int temp;
	double head = 0, tail = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 1000000; i++)
	{
		temp = rand() % 2;
		if (temp == 0)	head++;
		else			tail++;
				
		if (i % 100 == 0)
		{
			cout << i << "腰属析 凶 ... 蒋檎 " << head / (head + tail) * 100 << "% 急檎 " << tail / (head + tail) * 100 << "%" << endl;
		}
	}

	return 0;
}
