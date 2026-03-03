#pragma once

#include<iostream>
using namespace std;

class Employee
{
protected:
	int empid;
	string name;
	double salary;
public:
	Employee();
	Employee(int empid, string name, double salary);
	void accept();
	void display();
};
