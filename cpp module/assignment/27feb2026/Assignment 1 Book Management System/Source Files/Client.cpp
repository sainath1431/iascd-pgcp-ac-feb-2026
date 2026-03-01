#include"Book.h";

int main() {

	Book book;
	book.accept();
	book.display();
	
	cout << "\n\n Before Modify the Price Book Details Are : \n";
	book.display();

	book.setPrice(100);
	
	cout << "\n\n After Modify the Price Book Details Are : ";
	cout << "\n Book ID = " << book.getBookId();
	cout << "\n Book Title = " << book.getBookTitle();
	cout << "\n Author Name = " << book.getAuthorName();
	cout << "\n Price = " << book.getPrice();
	cout << "\n Quantity = " << book.getQuantity();

	book.calculateTotalValue();


}