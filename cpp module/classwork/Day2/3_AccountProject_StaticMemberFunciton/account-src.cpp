#include "Account.h"
float Account::interestRate = 0.04f;
Account:: Account() {
	accountno = 0;
	name = "NA";
	balance = 0;
}

Account::Account(int accountno, string name, float balance) {
	this->accountno = accountno;
	this->name = name;
	this->balance = balance;
}
void Account::displayDetails()
{
	cout << "the details are-" 
		<< "\n accno "<<accountno << " "
		<< "\n name "<< name << " "
		<< "\n balance "<<balance << " "
		<< "\n interest rate "<<interestRate<<endl;
	
}
void Account::acceptDetails()
{
	cout << "enter details";
	cin >> accountno;
	cin >> name;
	cin >> balance;
}

void Account::updateInterestRate(float itr)
{
	interestRate = itr;
}