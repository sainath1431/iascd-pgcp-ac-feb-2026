#pragma once
#include<iostream>
using namespace std;

class SwapNos
{
public:
	static void swapByValues(int n1,int n2);
	static void swapbyaddress(int* n1, int* n2);
	static void swapByReference(int& n1, int& n2);

};
