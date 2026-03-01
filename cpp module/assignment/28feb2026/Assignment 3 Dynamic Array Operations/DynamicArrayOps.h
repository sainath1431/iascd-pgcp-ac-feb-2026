#pragma once

#include <iostream>
using namespace std;

class DynamicArrayOps {
private:
	int noe;
	int* arr;

public:
	DynamicArrayOps();
	void accept();
	void display();
	int findMax();
	~DynamicArrayOps();

};