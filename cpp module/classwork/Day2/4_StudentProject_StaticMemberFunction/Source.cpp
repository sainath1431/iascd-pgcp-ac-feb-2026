#include"Header.h"

int Student::count = 0;
Student::Student()
{
	count++;
	rollNumber = count+100;
	name = "NA";
	marks = 0;
}
Student::Student(string name, float marks)
{
	count++;
	rollNumber = count+100;
	this->name = name;
	this->marks = marks;

}
void Student :: accept()
{
	cout << "\n enter the name";
	cin >> name;
	cout << "\n enter the marks";
	cin >> marks;
}
void Student::display()
{
	cout << "\n name "<<name;
	cout << "\n rollnumber "<<rollNumber;
	cout << "\n marks "<<marks;
}

int Student::getCount()
{
	return count;
}