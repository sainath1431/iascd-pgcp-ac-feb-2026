#include"Employee.h"

Employee::Employee()
{
	empid = 0;
	name = "NA";
	salary = 0.0;
}
Employee::Employee(int empid, string name, double salary)
{
	this->empid = empid;
	this->name = name;
	this->salary = salary;
}

void Employee::accept()
{
	cout << "\n enter the details:";
	cin >> empid >> name >> salary;
}
void Employee::display()
{
	cout << "\n the details are:" << endl;
	cout << empid<<endl;
	cout << name<<endl;
	cout << salary << endl;
}