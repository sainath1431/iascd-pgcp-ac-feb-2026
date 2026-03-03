#include"SwapNos.h"

int main()
{
	int num1 = 10, num2 = 20;

	cout << "\n before swapping num1-" << num1 << " num2-" << num2 << endl;
	//SwapNos::swapbyaddress(&num1, &num2);
	SwapNos::swapByReference(num1, num2);
	cout << "\n after swapping num1-" << num1 << " num2-" << num2 << endl;

}