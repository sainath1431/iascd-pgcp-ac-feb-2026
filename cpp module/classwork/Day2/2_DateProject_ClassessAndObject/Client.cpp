#include"Date.h"
int main()
{
	Date d1;  //d1 is an object of Date class
	d1.displayDate();
	
	Date d2(12,12,2012);
	d2.displayDate();

	d1.acceptDate();
	d1.displayDate();

	d2.setYY(2013);
	d2.displayDate();

	int month = d2.getMM();
	cout << "\n the month of d2 is " << month;
}
