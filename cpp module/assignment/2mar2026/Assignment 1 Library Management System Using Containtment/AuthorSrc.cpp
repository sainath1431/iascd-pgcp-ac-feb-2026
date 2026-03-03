#include"Author.h"


Author::Author() {
	authorName = "NA";
	country = "NA";
}

Author::Author(string authorName, string country) {
	this->authorName = authorName;
	this->country = country;
}

void Author::acceptAuthor() {
	cout << "\n Enter Author Details : " << endl;
	cout << "\n Enter Name = ";
	cin.ignore();
	getline(cin, authorName);

	cout << "Enter Country = ";
	//cin.ignore();
	getline(cin, country);
}

void Author::displayAuthor() {
	cout << "\n Author Details : " << endl;
	cout << "Name  = " << authorName << endl;
	cout << "Country = " << country << endl;
}

string Author::getAuthorName() {
	return authorName;
}