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
	std::cout << "�������� �̸� : " << name << std::endl;
	std::cout << "���� ��ȣ : " << acctnum << std::endl;
	std::cout << "�ܾ� : " << balance << std::endl << std::endl;
}

void BankAccount::deposit(double cash) // �Ա�
{
	balance += cash;
}

void BankAccount::withdraw(double cash) // ���
{
	if (cash > balance)
	{
		std::cout << "����� ���� �ܰ� �����ϴ�." << std::endl << std::endl;
	}
	else
	{
		balance -= cash;
	}
}