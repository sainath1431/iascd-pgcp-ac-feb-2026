#pragma once
#include<iostream>
using namespace std;

class Date {
private:
	int dd, mm, yy;
public:
	//decalaring the encapsulated functions

	//constructors
	Date();  //default
	Date(int dd, int mm, int yy);  //para

	//ordinary methods/func
	//accessor- read the state of an attribute of an object
	int getDD();
	int getMM();
	int getYY();

	//mutators- modify the  state of an attribute of an object
	void setDD(int dd);
	void setMM(int mm);
	void setYY(int yy);
	void acceptDate();


	//facilitators- display the state of an object
	void display();
};

