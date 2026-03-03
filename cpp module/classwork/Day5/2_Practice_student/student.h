#pragma once
#include<iostream>
using namespace std;

class Student {
private :
	int rollNumber;
	string name;
	int marks;
public:
	Student();
	Student(int rollNumber, string name, int marks);
	
	int getRno();
	string getName();
	int getMarks();
	void accept();
	void display();


};