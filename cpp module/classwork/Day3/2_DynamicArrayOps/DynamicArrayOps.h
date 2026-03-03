#pragma once

#include<iostream>
using namespace std;

class DynamicArrayOps
{
private:
	int noe;
	int* arr;
public:
	DynamicArrayOps(); //init array with 0
	void accept(); //acept data from user
	void display(); //display the data
	int findMax(); //return the max
	void reverse();  //reverse an aray

	~DynamicArrayOps();//release the dynamic array
};
