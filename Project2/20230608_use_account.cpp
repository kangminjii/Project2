#include "20230608_account.h"

using namespace std;

int main()
{
	BankAccount account{ "°­¹ÎÁö", "999-111", 0.0 };
	account.show();
	account.deposit(20000.0);
	account.show();
	account.withdraw(50000.0);
	account.show();
	account.withdraw(15000.0);
	account.show();
}