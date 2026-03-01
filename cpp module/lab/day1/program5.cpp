#include<iostream>
using namespace std;

int main() {
		
	int num;

	cout << "Enter Number : ";
	cin >> num;

	cout << "Factors Of " << num << " Are : " << endl;

	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			cout << i << endl;
		}
	}

	return 0;
}