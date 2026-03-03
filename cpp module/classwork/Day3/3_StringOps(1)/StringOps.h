#pragma once
#include<iostream>
using namespace std;

class StringOps
{
private:
	char str[50];
public:
	StringOps(char str[]); //init the object str with para str
	void display();  //display the string
	int astrlen();
	char* astrcpy(char source[]); //to copy the para source string into object str
};
