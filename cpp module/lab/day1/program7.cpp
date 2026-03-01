//Accept a number and display its reverse.

#include <iostream>
using namespace std;

int main() {

	int num, temp, reverseNum = 0 ,digit;

	cout << "\n Enter Number : ";
	cin >> num;

	temp = num;

	while (temp != 0) {
		digit = temp % 10;
		reverseNum = (reverseNum * 10) + digit;
		temp = temp / 10;
	}

	cout << "\n Reverse Of " << num << " is " << reverseNum;


}