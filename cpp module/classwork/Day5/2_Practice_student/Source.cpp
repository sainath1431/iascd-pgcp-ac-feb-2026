#include"student.h"

Student::Student()
{
	this->rollNumber = 0;
	this->name = "NA";
	this->marks = 0;
}

Student::Student(int rollNumber, string name, int marks)
{
	this->rollNumber = rollNumber;
	this->name = name;
	this->marks = marks;
}

void Student::display()
{
	cout << "\nDetails are\n";
	cout << "rollno:" << rollNumber<< endl;
	cout << "name:" << name<< endl;
	cout << "marks:" << marks<< endl;
}

void Student::accept()
{
	cout << "\nEnter details";
	cout << "\nRollno:";
	cin >> rollNumber;
	cout << "\name:";
	cin >> name;
	cout << "\nMark:";
	cin >> marks;
}


