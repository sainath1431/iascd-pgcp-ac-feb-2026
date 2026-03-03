#include"Account.h"

int main()
{
	Account acc1(1, "King", 99000);
	cout << "\n acc1------------";
	acc1.displayDetails();
	
	cout << "\n acc2---------------";
	Account acc2(2, "John", 76000);
	acc2.displayDetails();

	Account::updateInterestRate(0.07);
	cout << "\n acc1------------";
	acc1.displayDetails();
	cout << "\n acc2---------------";
	acc2.displayDetails();

}