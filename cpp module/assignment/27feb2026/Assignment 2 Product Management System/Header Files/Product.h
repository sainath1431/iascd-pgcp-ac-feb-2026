#pragma once
#include<iostream>
#include<string>
using namespace std;

class Book {
private:
	int bookId;
	string bookTitle;
	string authorName;
	float price;
	int quantity;

public:
	Book();
	Book(int bookId, string bookTitle, string authorName, float price, int quantity);
	void accept();
	void display();
	void setBookId(int bookId);
	void setBookTitle(string bookTitle);
	void setAuthorName(string authorName);
	void setPrice(float price);
	void setQuantity(int quantity);
	int getBookId();
	string getBookTitle();
	string getAuthorName();
	float getPrice();
	int getQuantity();
	void calculateTotalValue();
};