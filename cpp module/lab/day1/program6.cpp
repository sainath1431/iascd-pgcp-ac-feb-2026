// Calculate The Factorial
#include<iostream>
using namespace std;
 
int main() {
	int num, fact = 1;

	cout << "\n Enter Number : ";
	cin >> num;

	for (int i = num; i >= 1; i--) {
		fact = fact * i;
	}

	cout << "\n Factorial Of " << num << " is " << fact;
}
