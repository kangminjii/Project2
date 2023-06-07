#include <iostream>
#include "20230607_stock.h"

Stock::Stock()
{
	std::cout << "디폴트 생성자가 호출되었습니다." << std::endl;
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr)
{
	std::cout << co << "를 사용하는 생성자가 호출되었습니다." << std::endl;
	company = co;
	if (n < 0)
	{
		std::cout << "주식 수는 음수가 될 수 없으므로, " << company << " shares를 0으로 설정합니다." << std::endl;
		shares = 0;
	}
	else
		shares = n;

	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "안녕, " << company << "!" << std::endl;
}

//void Stock::acquire(const std::string& co, long n, double pr)
//{
//	company = co;
//	if (n < 0)
//	{
//		std::cout << "주식 수는 음수가 될 수 없으므로, " << company << " shares를 0으로 설정합니다." << std::endl;
//		shares = 0;
//	}
//	else
//		shares = n;
//
//	share_val = pr;
//	set_tot();
//}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "매입 주식 수는 음수가 될 수 없으므로, 거래가 취소되었습니다." << std::endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "매도 주식 수는 음수가 될 수 없으므로, 거래가 취소되었습니다." << std::endl;
	}
	else if (num > shares)
	{
		cout << "보유 주식보다 많은 주식을 매도할 수 없으므로, 거래가 취소되었습니다." << std::endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	std::cout << "회사명 : " << company
		<< " 주식수 : " << shares << std::endl
		<< " 주가 : $" << share_val
		<< " 주식 총 가치 : $" << total_val << std::endl;
}