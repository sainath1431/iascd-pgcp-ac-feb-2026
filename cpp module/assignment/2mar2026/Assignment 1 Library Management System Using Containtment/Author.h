#pragma once
#include<iostream>
#include<string>
using namespace std;

class Author {
private:
	string authorName;
	string country;
public:
	Author();
	Author(string authorName, string country);
	void acceptAuthor();
	void displayAuthor();
	string getAuthorName();
};