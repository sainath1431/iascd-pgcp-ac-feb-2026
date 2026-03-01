#include"Product.h"

int main() {
	Product p;

	cout << "\n\nProduct Default Value :-------------";
	p.display();

	p.accept();

	cout << "\n\n Product After Set User Values : ----------------";
	p.display();

	Product p1;
	p1.setProductName("Laptop");
	p1.setPrice(100000);
	p1.setQuantity(2);
	cout << "\n Product p1 Details : ";
	cout << "\n Product p1 Id : " << p1.getProductId();
	cout << "\n Product p1 Name : " << p1.getProductName();
	cout << "\n Product p1 Price : " << p1.getPrice();
	cout << "\n Product p1 Quantity : " << p1.getQuantity() << endl;

	
	Product::showProductCount();

}