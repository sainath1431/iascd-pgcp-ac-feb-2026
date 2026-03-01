//Accept a number and check number is a Armstrong Number Of Not.

#include <iostream>
using namespace std;

int calculateDigits(int num) {
	int count = 0;
	while (num != 0) {
		count++;
		num = num / 10;
	}
	return count;
}

int power(int base, int exponent) {
	int power = 1;
	while (exponent != 0) {
		power = power * base;
		exponent--;
	}

	return power;
}

int main() {
	int num, temp, sum = 0, totalDigits , lastDigit;

	cout << "\n Enter Number : ";
	cin >> num;

	temp = num;

	totalDigits = calculateDigits(temp);

	while (temp != 0) {
		lastDigit = temp % 10;
		sum = sum + power(lastDigit, totalDigits);
		temp = temp / 10;
	}

	if (sum == num) {
		cout << num << " is a armstrong number.";
	}
	else {
		cout << num << " is not a armstrong number.";
	}

	return 0;
}