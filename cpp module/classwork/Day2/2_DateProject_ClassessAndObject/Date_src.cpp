#include"Date.h"


//defining the encapsulated functions
Date::Date()  //default constructor
{
	dd = 1;
	mm = 1;
	yy = 2026;
}

Date::Date(int dd, int mm, int yy)  //para constructor
{
	this->dd = dd;  //object's dd=para dd value
	this->mm = mm;
	this->yy = yy;
}

void Date::displayDate()
{
	cout << "\n the date is " << dd << "/" << mm << "/" << yy;
}

int Date::getDD()
{
	return dd;
}
int Date::getMM()
{
	return mm;
}
int Date::getYY()
{
	return yy;
}
void Date::setDD(int dd)
{
	this->dd = dd;
}
void Date::setMM(int mm)
{
	this->mm = mm;
}
void Date::setYY(int yy)
{
	this->yy = yy;
}
void Date::acceptDate()
{
	cout << "\n enter the date:";
	cin >> dd;
	cin >> mm;
	cin >> yy;
}
