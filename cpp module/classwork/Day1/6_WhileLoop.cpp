//accept a number and display its reverse

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num, reversenum=0,dig,temp;
//	cout << "\n eneter the numebr:";
//	cin >> num;
//	temp = num;
//	while (temp != 0)
//	{
//		dig = temp % 10;
//		reversenum = (reversenum * 10) + dig;
//		temp = temp / 10;
//	}
//	cout << "\n the reversenum is " << reversenum;
//}

//accept a number and display whether it is armstrong
//num=153  sum of cube of digts is same as that original number
#include<iostream>
using namespace std;

int main()
{
	int num, sum = 0, dig, temp;
	cout << "\n eneter the numebr:";
	cin >> num;
	temp = num;
	while (temp != 0)
	{
		dig = temp % 10;
		sum = sum + (dig * dig * dig);
		temp = temp / 10;
	}
	if (sum == num)
	{
		cout << "\n it is an armstrong number";
	}
	else
	{
		cout << "\n not an armstrong";
	}
	return 0;
}