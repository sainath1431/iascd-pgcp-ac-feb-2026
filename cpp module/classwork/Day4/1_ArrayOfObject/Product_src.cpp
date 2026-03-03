#include"Product.h"


Product :: Product() {
	Product_id=0;
	 Product_Name="Na";
	 Product_Price=0.0;
}
Product::Product(int id, string name, double price) {
	this->Product_id = id;
	this->Product_Name = name;
	this->Product_Price = price;

}
void Product::  accept() {

	cout << "Enter the product name" << endl;
	cin.ignore();
	getline(cin, Product_Name);
	cout << "Enter the product id" << endl;
	cin >> Product_id;	
	cout << "Enter the product price" << endl;
	cin >> Product_Price;
}
void Product :: display() {
	cout << "Product Id is " << Product_id << endl;
	cout << "Product name is " << Product_Name << endl;
	cout << "Product Price is " << Product_Price << endl;


}