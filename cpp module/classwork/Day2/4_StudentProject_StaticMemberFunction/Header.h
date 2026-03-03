
#pragma once
#include<iostream>
using namespace std;
class Student {
private:
		int rollNumber;
		string name;
		float marks;
		static int count;
public:
	Student();
	Student(string name, float marks);
	void accept();
	void display();
	static int getCount();

};
