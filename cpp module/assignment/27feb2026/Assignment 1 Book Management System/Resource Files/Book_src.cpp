#include"Book.h"

Book::Book() {
	bookId = 0;
	bookTitle = "Not Available";
	authorName = "Unknown";
	price = 0.0;
	quantity = 0;
}

Book::Book(int bookId, string bookTitle, string authorName, float price, int quantity) {
	this->bookId = bookId;
	this->bookTitle = bookTitle;
	this->authorName = authorName;
	this->price = price;
	this->quantity = quantity;
}
void Book::accept() {
	cout << "\n Enter Book Details : ";
	cout << "\n Book ID = ";
	cin >> bookId;
	
	cout << "\n Book Title = ";
	cin.ignore();
	getline(cin, bookTitle);

	cout << "\n Author Name = ";
	//cin.ignore();
	getline(cin, authorName);

	cout << "\n Price = ";
	cin >> price;

	cout << "\n Quantity = ";
	cin >> quantity;
}
void Book::display() {
	cout << "\n Book Details : ";
	cout << "\n Book ID = " << bookId;
	cout << "\n Book Title = " << bookTitle;
	cout << "\n Author Name = " << authorName;
	cout << "\n Price = " << price;
	cout << "\n Quantity = " << quantity;
}
void Book::setBookId(int bookId) {
	this->bookId = bookId;
}
void Book::setBookTitle(string bookTitle) {
	this->bookTitle = bookTitle;
}
void Book::setAuthorName(string authorName) {
	this->authorName = authorName;
}
void Book::setPrice(float price) {
	this->price = price;
}
void Book::setQuantity(int quantity) {
	this->quantity = quantity;
}

int Book::getBookId() {
	return bookId;
}
string Book::getBookTitle() {
	return bookTitle;
}
string Book::getAuthorName() {
	return authorName;
}
float Book::getPrice() {
	return price;
}
int Book::getQuantity() {
	return quantity;
}
void Book::calculateTotalValue() {
	float totalValue = price * quantity;
	cout << "\n\n Total Value = " << totalValue;
}