#pragma once
#include"Employee.h"

class Manager :public Employee
{
private:
	double fa, ta;
public:
	Manager();
	Manager(int empid, string name, double salary, double fa, double ta);
	void accept();
	void display();
};
