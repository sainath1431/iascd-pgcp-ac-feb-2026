#include"ArrayOps.h"

int main() {
	//ArrayOps arr;
	//
	//cout << "\n Array Before Initialization ------- ";
	//arr.display();

	//arr.accept();

	//cout << "\n Array After Initialization -------- ";
	//arr.display();

	int choice;
	char wish;


	ArrayOps arr;

	do {
		cout << "\n****************** Menu ***************\n" << endl;
		cout << "1. Accept n integer elements from the users." << endl;
		cout << "2. Display the array elements." << endl;
		cout << "3. Find and display the sum and average of elements." << endl;
		cout << "4. Calculate and display the sum and average of elements." << endl;
		cout << "5. Search for a given element in the array and display its position (if found)" << endl << endl;

		cout << "\n Enter Choice : ";
		cin >> choice;


		switch (choice) {
		case 1: {
			arr.accept();
			break;
		}

		case 2: {
			arr.display();
			break;
		}

		case 3: {
			arr.findMinMax();
			break;
		}
		case 4: {
			arr.displayAvg();
			break;
		}
		case 5: {
			int target;

			cout << "\n\n Enter Element For Search : ";
			cin >> target;

			arr.search(target);

			break;
		}
		default: {
			cout << "\n\n Invalid Choice!!!!";
			break;
		}
		}

		cout << "\n Do You Want To Continue (Yes -> 'y'/'Y') : ";
		cin >> wish;
	} while (wish == 'y' || wish == 'Y');


}