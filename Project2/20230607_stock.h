#pragma once
#include <string>

class Stock
{
private:
	std::string company; // 회사명
	long shares = 0; // 주식수
	double share_val; // 주가
	double total_val; // 주식 총 가치
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock();
	//void acquire(const std::string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};