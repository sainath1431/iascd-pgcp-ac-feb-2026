#include"SwapNos.h"

void SwapNos::swapByValues(int n1,int n2)
{
	int temp=n1;
	n1 = n2;
	n2 = temp;

}
void SwapNos::swapbyaddress(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void SwapNos::swapByReference(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}