#include"ArrayOperations.h"

ArrayOps::ArrayOps()//init array with 0
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 0;
	}
}
void ArrayOps::accept() //acept data from user
{
	for (int i = 0; i < 5; i++)
	{
		cout << "\n eneter the ele:";
		cin >> arr[i];
	}
}
void ArrayOps::display()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "\n the ele:" << arr[i];
	}
}

int ArrayOps::findMax()
{
	int max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
