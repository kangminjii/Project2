#pragma once
#include <string>

class BankAccount
{
private:
	std::string name;  // 이름
	std::string acctnum;  // 계좌번호
	double balance;    // 잔고
public:
	BankAccount(const std::string& client, const std::string& num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash); // 입금
	void withdraw(double cash); // 출금
};