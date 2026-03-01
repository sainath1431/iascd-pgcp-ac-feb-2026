#pragma once
#include <iostream>
#include <string>
using namespace std;

class StringOps {
private:
	char* str;

public:
	StringOps();
	StringOps(string str);
	void accept();
	void display();

	int strlen();
	char* reverse();
	bool checkPalindrome();
	char* upperCase();
	bool strcmp(string str1);
};
