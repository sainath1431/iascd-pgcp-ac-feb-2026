#pragma once
#include"Author.h";
#include<iostream>
using namespace std;

class Book {
private:
	int bookId;
	string bookTitle;
	double price;
	Author author;
public:
	Book();
	Book(int bookId, string bookTitle, double price, string authorName, string country);
	void acceptBook();
	void displayBook();
	int getBookId();
	Author getAuthor();
};