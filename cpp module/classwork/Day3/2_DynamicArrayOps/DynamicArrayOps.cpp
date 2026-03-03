#include"DynamicArrayOps.h"
DynamicArrayOps::DynamicArrayOps() 
{
	//allocate array
	cout << "\n enter the numebr of ele:";
	cin >> noe;

	arr = new int[noe];
	//initialize array

	for (int i = 0; i < noe; i++)
	{
		arr[i] = 0;
	}
}
void DynamicArrayOps::accept() //acept data from user
{
	for (int i = 0; i < noe; i++)
	{
		cout << "\n enter the ele:";
		cin >> arr[i];
	}
}
void DynamicArrayOps::display() //display the data
{
	for (int i = 0; i < noe; i++)
	{
		cout << "\n the ele:" << arr[i];
	}
}
int DynamicArrayOps::findMax() //return the max
{
	int max = arr[0];
	for (int i = 1; i < noe; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

void DynamicArrayOps::reverse()
{
	int i = 0, j = noe - 1;
	while (i <= j) {
		int t=arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		i++;
		j--;
	}
}

DynamicArrayOps::~DynamicArrayOps()
{
	if (arr != NULL)
	{
		delete[]arr;
		arr = NULL;
	}
}