#include"Manager.h"

Manager::Manager()
{
	fa = 0.0;
	ta = 0.0;
}
Manager::Manager(int empid, string name, double salary, double fa, double ta)
	:Employee(empid, name, salary)
{
	this->fa = fa;
	this->ta = ta;
}
void Manager::accept()
{
	Employee::accept();
	cout << "\n enter fa:";
	cin >> fa;
	cout << "\n enter ta:";
	cin >> ta;
}
void Manager::display()
{
	Employee::display();
	cout << "food all-" << fa << endl;
	cout << "travel all-" << ta << endl;
}