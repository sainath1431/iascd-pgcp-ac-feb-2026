#include"StringOps.h";

int main() {
	
	int choice;
	char wish;

	StringOps str;

	do {
		cout << "\n*************** Menu *******************" << endl;
		cout << "\n 1. Accept a string from the user." << endl;
		cout << "\n 2. Display the entered string." << endl;
		cout << "\n 3. Find the length of the string manually (without using strlen() ) ";
		cout << "\n 4. Reverse the string." << endl;
		cout << "\n 5. Check whether the string is a palindrome." << endl;
		cout << "\n 6. Convert all lowercase characters to uppercase." << endl;
		cout << "\n 7. Compare two strings without using strcmp()." << endl << endl;

		cout << "\n Enter Choice : ";
		cin >> choice;

		switch (choice) {
		case 1: {
			str.accept();
			break;
		}
		case 2: {
			str.display();
			break;
		}
		case 3: {
			int length = str.strlen();
			cout << "\n length = " << length << endl;
			break;
		}
		case 4: {
			str.reverse();
			cout << "\n String Reversed Successfully!!!" << endl;
			break;
		}
		case 5: {
			if (str.checkPalindrome()) {
				cout << "\n String is a Palindrome String." << endl;
			}
			else {
				cout << "\n String is Not a Palindrome String." << endl;
			}
			break;
		}
		case 6: {
			str.upperCase();
			cout << "\nAll Character Of String Tranform in Uppercase." << endl;
			break;
		}
		case 7: {
			string str1;

			cout << "\n\n Enter String for Compare = ";
			cin >> str1;

			if (str.strcmp(str1)) {
				cout << "\n Give String Content Equal To Exsiting String Content." << endl;
			}
			else {
				cout << "\n Give String Content Different From Exsiting String Content." << endl;
			}
			
			break;
		}
		default: {
			cout << "\n Invalid Choice..." << endl;
			break;
		}
		}

		cout << "\n\n Do U wish to continue (yes -> 'y'/'Y') : ";
		cin >> wish;
	} while (wish == 'y' || wish == 'Y');


}