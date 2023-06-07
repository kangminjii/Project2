#include <iostream>
#include "20230607_stock.h"

using namespace std;

int main()
{
	Stock stock1("NanoSmart", 20, 12.50);
	stock1.show();
	Stock stock2("Boffo Objects", 2, 2.0);
	stock2.show();

	cout << "stock1을 stock2에 대입한다." << endl;
	stock2 = stock1;
	cout << "stock1과 stock2를 출력한다." << endl;
	stock1.show();
	stock2.show();


	/*Stock fluffy;
	fluffy.buy(15, 18.125);
	fluffy.show();
	fluffy.sell(400, 20.00);
	fluffy.show();
	fluffy.buy(300000, 40.125);
	fluffy.show();
	fluffy.sell(300000, 0.125);
	fluffy.show();*/

	return 0;
}




