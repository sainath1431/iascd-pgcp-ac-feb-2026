//Accept the amount to perform following operations
//Assume the balance is 10000
//1.withdraw
//2.deposit
//enter the choice
//perform the selected operation.

#include <iostream>
using namespace std;

int main() {
	float balance = 10000, amount;
	int choice;

	cout << "Menu \n 1.Withdraw \n 2.Deposit";

	cout << "\n Enter Choice : ";
	cin >> choice;

	cout << "\n Enter Amount : ";
	cin >> amount;

	switch (choice) {
	case 1:
		if (amount < balance) {
			balance = balance - amount;
		}
		else {
			cout << "Insufficient Balance";
		}
		break;

	case 2:
		balance = balance + amount;
		break;

	default:
		cout << "Invalid Choice!!!";
		break;
	}

	cout << "\n Remaining Balance : " << balance;

	return 0;


};