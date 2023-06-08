#pragma once
#include <string>

class BankAccount
{
private:
	std::string name;  // �̸�
	std::string acctnum;  // ���¹�ȣ
	double balance;    // �ܰ�
public:
	BankAccount(const std::string& client, const std::string& num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash); // �Ա�
	void withdraw(double cash); // ���
};