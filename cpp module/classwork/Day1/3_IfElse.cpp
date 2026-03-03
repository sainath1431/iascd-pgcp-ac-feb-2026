//accept 2 numbers and display max

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n1, n2;
//	cout << "Enter 2 numbers:";
//	cin >> n1;
//	cin >> n2;
//	if (n1 > n2)
//	{
//		cout << n1 << " is max";
//	}
//	else
//	{
//		cout << n2 << " is max";
//	}
//	return 0;
//}
//accept salary of an emp. display 10% Bonus if salary is
// greater than 50000. else no bonus

#include<iostream>
using namespace std;

int main()
{
	float salary, bonus;
	cout << "Enter salary:";
	cin >> salary;
	if (salary > 50000)
	{
		bonus = salary * 0.10;
		cout << "\n bonus:"<<bonus;
	}
	else
	{
		cout << "\n Not eligible for bonus";
	}
	return 0;
}