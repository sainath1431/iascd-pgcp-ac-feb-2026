#include"SalesPerson.h"

SalesPerson::SalesPerson()
{
	nos = 0;
	commission = 0;
}

SalesPerson::SalesPerson(int empid, string name, double salary, int nos, double commission)
	:Employee(empid,name,salary)
{
	this->nos = nos;
	this->commission = commission;
}

void SalesPerson::accept()
{
	Employee::accept();
	cout << "\n enter nos and commission:";
	cin >> nos >> commission;
}

void SalesPerson::display()
{
	Employee::display();
	cout << "nos-" << nos<<endl;
	cout << "Commission-" << commission<<endl;
}