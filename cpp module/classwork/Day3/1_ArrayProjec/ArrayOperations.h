#pragma once

#include<iostream>
using namespace std;

class ArrayOps
{
private:
	int arr[5];
public:
	ArrayOps(); //init array with 0
	void accept(); //acept data from user
	void display(); //display the data
	int findMax(); //return the max
};
