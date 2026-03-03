//accept the amount to perform foll operations. 
// assume the balance is 10000
//1. withdraw
//2. deposit
//entr the choice
//perform the selected operation


#include<iostream>
using namespace std;

int main()
{
	float bal = 10000, amount;
	int choice;
	cout << "\n 1. Withdraw \n 2. Deposit";
	cout << "\n enter the choice:";
	cin >> choice;
	cout << "\n enter the amount:";
	cin >> amount;
	switch (choice)
	{
	case 1:
		if (bal > amount)
		{
			bal = bal - amount;
		}
		else
		{
			cout << "\n Insuff balance";
		}
		break;
	case 2:
		bal = bal + amount;
		break;
	default:
		cout << "\n invalid choice";
	}
	cout << "\n the bal remaining " << bal;
	return 0;
}