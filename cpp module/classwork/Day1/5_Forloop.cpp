//display even numbers  upto 20 using for loop

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	for (num = 2; num <= 20; num += 2)
//	{
//		cout << num << endl;  //2 4 6...20
//	}
//	return 0;
//}


//accept a number and display its factors

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	cout << "\n eneter the numebr:";
//	cin >> num;
//	cout << "\n the factors are------";
//	for (int i = 2; i <= num/2; i++)
//	{
//		if (num % i == 0)
//		{
//			cout << num << endl;
//		}
//	}
//	return 0;
//}

//accept a number and display its factorial

#include<iostream>
using namespace std;

int main()
{
	int num, fact = 1;;
	cout << "\n eneter the numebr:";
	cin >> num;
	cout << "\n the factorial is------";
	for (int i = num; i >= 1; i--)
	{
		fact = fact * i;
	}
	cout << "\n the factrial of " << num << " is " << fact;
}
