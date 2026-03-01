#pragma once
#include<iostream>
using namespace std;

class ArrayOps {
private:
	int noe;
	int* arr;
public:
	//constructors
	ArrayOps();

	//Mutators
	void accept();


	//facilitators
	void display();
	void findMinMax();
	void displayAvg();
	void search(int target);

	//Destructors
	~ArrayOps();



};