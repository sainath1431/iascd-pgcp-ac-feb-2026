#include"Product.h"

int main() {

	//to invoke para constructor for every object in an array
	//we need to create the array of pointer to object
	//every pointer to object will point to new object (para constr )
	Product** cart;
	int nop;
	cout << "\n enter the numebr of products:";
	cin >> nop; //3
	cart = new Product*[nop]; //array of pointer to product
	for (int i = 0; i < nop; i++)
	{
		int pid; string pname, double price;
		cout << "\n enter details:";
		cin >> pid;
		cin.ignore();
		getline(cin, pname);
		cin>>price;
		cart[i] = new Product(pid, pname, price);
	}

	for (int i = 0; i < nop; i++) {
		cart[i]->display();
	}

	for (int i = 0; i < nop; i++) {
		delete[] cart[i];
	}

	delete[]cart;

	//dynamic array

	//Product* parr;
	//int nop;
	//cout << "\n enter the numebr of products:";
	//cin >> nop;  //3
	//parr = new Product[nop];
	//for (int i = 0; i < nop; i++) {
	//	parr[i].accept();
	//}
	//for (int i = 0; i < nop; i++) {
	//	parr[i].display();
	//}

	//delete[] parr;


	//compile time array
	/*Product parr[3];
	for (int i = 0; i < 3; i++) {
		parr[i].accept();
	}
	for (int i = 0; i < 3; i++) {
		parr[i].display();
	}*/
}