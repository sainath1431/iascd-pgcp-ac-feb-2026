#include"Book.h"


class PrintToScreen {
public:
	static void acceptBooks(Book bookList[]) {
		for (int i = 0; i < 3; i++) {
			bookList[i].acceptBook();
		}
	}

	static void displayBooks(Book bookList[]) {
		for (int i = 0; i < 3; i++) {
			cout << "\n Book No : " << i + 1 << "*****" << endl;
			bookList[i].displayBook();
		}
	}

	static void searchById(Book bookList[], int id) {
		bool flag = false;

		for (int i = 0; i < 3; i++) {
			if (id == bookList[i].getBookId()) {
				flag = true;
				bookList[i].displayBook();
				break;
			}
		}

		if (flag == false) {
			cout << "\n Book Not Found..." << endl;
		}
	}

	static void searchByAuthor(Book bookList[] , string authorName) {
		bool flag = false;

		for (int i = 0; i < 3; i++) {
			if (bookList[i].getAuthor().getAuthorName() == authorName) {
				flag = true;
				bookList[i].displayBook();
				break;
			}
		}

		if (flag == false) {
			cout << "\n Book Not Found..." << endl;
		}
	}
};


int main() {
	Book bookList[3];
	int choice;
	char wish;
	string authorName = "NA";
	int bookId = 0;




	do {
		cout << "\n*********** MENU ***********\n" << endl;
		cout << "1.Accept Book. \n2.Display Book. \n3.Search Book By ID. \n4.Search Book By Author Name." << endl;

		cout << "\n Enter Choice = ";
		cin >> choice;

		switch (choice) {
		case 1:
			PrintToScreen::acceptBooks(bookList);
			break;

		case 2:
			PrintToScreen::displayBooks(bookList);
			break;

		case 3:

			cout << "\n Enter Book ID : ";
			cin >> bookId;

			PrintToScreen::searchById(bookList, bookId);

			break;

		case 4:

			cout << "\n Enter Author Name : ";
			cin.ignore();
			getline(cin, authorName);

			PrintToScreen::searchByAuthor(bookList, authorName);
			break;

		default:
			cout << "\n Invalid Choice!!! Please Enter MENU OPTIONS." << endl;
		}

		cout << "\n Do You Want To Continue (Yes -> 'y' / 'Y')  :";
		cin >> wish;


	} while (wish == 'y' || wish == 'Y');




}