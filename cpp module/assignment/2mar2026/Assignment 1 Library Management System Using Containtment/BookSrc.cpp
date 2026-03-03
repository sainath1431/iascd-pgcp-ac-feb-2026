#include"Book.h";

Book::Book() {
	bookId = 0;
	bookTitle = "NA";
	price = 0.0;
}

Book::Book(int bookId, string bookTitle, double price, string authorName, string country):author(authorName, country){
	this->bookId = bookId;
	this->bookTitle = bookTitle;
	this->price = price;
}

void Book::acceptBook() {
	cout << "\n Enter Book Details : " << endl;
	cout << "\n Book ID = ";
	cin >> bookId;
	
	cout << "\n Book Title = ";
	cin.ignore();
	getline(cin, bookTitle);

	cout << "\n Price = ";
	cin >> price;
	
	author.acceptAuthor();

	cout << "\n Book Accepted Successfully.!!!!" << endl;
}

void Book::displayBook() {
	cout << "\n Book Details : " << endl;
	cout << "Book ID = " << bookId << endl;
	cout << "Book Title = " << bookTitle << endl;
	cout << "Price = " << price << endl;

	author.displayAuthor();
}

int Book::getBookId() {
	return bookId;
}

Author Book::getAuthor() {
	return author;
}