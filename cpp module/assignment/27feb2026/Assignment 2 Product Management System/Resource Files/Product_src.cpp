#include"Product.h"


int Product::productCount = 0;

Product::Product() {
	productCount++;
	productId = productCount;
	productName = "Unknown";
	price = 0.0;
	quantity = 0;
}
Product::Product(int productId, string productName, float price, int quantity, int productCount) {
	this->productName = productName;
	this->price = price;
	this->quantity = quantity;
	this->productCount = productCount;
}
void Product::accept() {
	cout << "\n\n Enter the Product Details : " << endl << endl;
	cout << "\n Enter Product Name =  ";
	//cin >> productName;
	//cin.ignore();
	getline(cin, productName);

	cout << "\n Enter Price = ";
	cin >> price;
	cout << "\n Enter Quantity = ";
	cin >> quantity;
	
	cout << "\n Product Details are Stored Successfully.!!!" << endl;

}
void Product::display() {
	cout << "\n\n Product Details : " << endl;
	cout << "\n Product Id  = " << productId;
	cout << "\n Product Name = " << productName;
	cout << "\n Price = " << price;
	cout << "\n Quantity = " << quantity <<endl << endl;
}

int Product::getProductId() {
	return productId;
}
string Product::getProductName() {
	return productName;
}
float Product::getPrice() {
	return price;
}
int Product::getQuantity() {
	return quantity;
}
void Product::setProductId(int productId) {
	this->productId = productId;
}
void Product::setProductName(string productName) {
	this->productName = productName;
}
void Product::setPrice(float price) {
	this->price = price;
}
void Product::setQuantity(int quantity) {
	this->quantity = quantity;
}
void Product::showProductCount() {
	cout << "\n Total Producs = " << productCount << endl << endl;
}
