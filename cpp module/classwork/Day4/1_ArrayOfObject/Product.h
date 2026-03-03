#pragma once
#include<iostream>
using namespace std;
#include<string>

class Product {
private:
	int Product_id;
	string Product_Name;
	double Product_Price;

public:
	Product();
	Product(int id, string name, double price);
	void accept();
	void display();
};
