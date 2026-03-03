#include"Header.h"

int main()
{
	Student s1("John", 88), s2("Kim", 98);

	cout << "\n s1-------------";
	s1.display();
	cout << "\n s2------------";
	s2.display();

	cout << "\n the total number of objects are " << Student::getCount();

	Student s3;
	s3.display();
	cout << "\n the total number of objects are " << Student::getCount();

}