#include"Product.h"


Product::Product() {
	Product_id = 0;
	Product_Name = "Na";
	Product_Price = 0.0;
}
Product::Product(int id, string name, double price,int dd,int mm,int yy)
	:expiryDate(dd,mm,yy)
{
	this->Product_id = id;
	this->Product_Name = name;
	this->Product_Price = price;

}
void Product::accept() {

	cout << "Enter the product name" << endl;
	cin.ignore();
	getline(cin, Product_Name);
	cout << "Enter the product id" << endl;
	cin >> Product_id;
	cout << "Enter the product price" << endl;
	cin >> Product_Price;
	cout << "\n enter teh exp date:" << endl;
	expiryDate.acceptDate();
}
void Product::display() {
	cout << "\n Product Id is " << Product_id << endl;
	cout << "Product name is " << Product_Name << endl;
	cout << "Product Price is " << Product_Price << endl;
	cout << "\n expirry date is " << endl;
	expiryDate.display();
}

int Product::getId()
{
	return Product_id;
}

string Product::getName()
{
	return Product_Name;
}