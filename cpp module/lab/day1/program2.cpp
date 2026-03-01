//Accept Salary and print the bouns if salary is greater than 
// 50000 else no bonus;

#include <iostream>
using namespace std;

int main() {
	float salary, bonus;

	cout << "Enter Salary : ";
	cin >> salary;

	if (salary > 50000) {
		bonus = 0.10 * salary;
		cout << "Bonus = " << bonus;
	}
	else {
		cout << "Not Eligible For Bonus";
	}

	return 0;
}