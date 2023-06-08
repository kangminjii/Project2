#include "20230608_account.h"
#include <iostream>

BankAccount::BankAccount(const std::string& client, const std::string& num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show(void) const
{
	std::cout << "예금주의 이름 : " << name << std::endl;
	std::cout << "계좌 번호 : " << acctnum << std::endl;
	std::cout << "잔액 : " << balance << std::endl << std::endl;
}

void BankAccount::deposit(double cash) // 입금
{
	balance += cash;
}

void BankAccount::withdraw(double cash) // 출금
{
	if (cash > balance)
	{
		std::cout << "충분한 돈이 잔고에 없습니다." << std::endl << std::endl;
	}
	else
	{
		balance -= cash;
	}
}