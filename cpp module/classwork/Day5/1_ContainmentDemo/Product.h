#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Date.h"

class Product {
private:
	int Product_id;
	string Product_Name;
	double Product_Price;
	Date expiryDate;
public:
	Product();
	Product(int id, string name, double price,int dd,int mm,int yy);
	void accept();
	void display();

	int getId();
	string getName();
};
