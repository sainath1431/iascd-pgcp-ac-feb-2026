#pragma once
#include"Employee.h"

class SalesPerson :public Employee
{
private:
	int nos;
	double commission;
public:
	SalesPerson();
	SalesPerson(int empid, string name, double salary, int nos, double commission);
	void accept();
	void display();
};