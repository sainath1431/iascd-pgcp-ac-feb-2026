#pragma once
#include<iostream>
using namespace std;
class Account {
private:
	int accountno;
	string name;
	float balance;
	static float interestRate;
public:
	Account();
	Account(int accountno, string name, float balance);
	void acceptDetails();
	void displayDetails();
	
	static void updateInterestRate(float itr);
};
