#include <iostream>
#include "20230607_stock.h"

using namespace std;

int main()
{
	Stock stock1("NanoSmart", 20, 12.50);
	stock1.show();
	Stock stock2("Boffo Objects", 2, 2.0);
	stock2.show();

	cout << "stock1�� stock2�� �����Ѵ�." << endl;
	stock2 = stock1;
	cout << "stock1�� stock2�� ����Ѵ�." << endl;
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




