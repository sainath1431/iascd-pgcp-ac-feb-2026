#pragma once
#include<iostream>
using namespace std;

class Time
{
private:
	int hh, mm;

public:	
	Time();
	Time(int hh, int mm);
	void display();
	void accept();

	int gethh();
	int getmm();
	void sethh(int hh);
	void setmm(int mm);
};