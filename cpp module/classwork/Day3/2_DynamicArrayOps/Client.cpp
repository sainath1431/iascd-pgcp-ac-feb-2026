#include"DynamicArrayOps.h"

int main()
{
	int choice,max=0;
	char wish;
	DynamicArrayOps obj1;
	obj1.accept();
	cout << "\n obj1------------------";
	obj1.display();
	do
	{
		cout << "\n 1. find Maximum \n 2. Revere array \n 3. Display an array";
		cout << "\n eneter the choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			max = obj1.findMax();
			cout << "\n the max is " << max;
			break;
		case 2:
			obj1.reverse();
			cout << "\n array is reversed!!!";
			break;
		case 3:
			cout << "\n Array is-------";
			obj1.display();
			break;
		default:
			cout << "\n invalid choice";
			break;
		}
		cout << "\n do u wish to continue?";
		cin >> wish;
	} while (wish=='y'|| wish=='Y');


	

	
	/*DynamicArrayOps obj1;

	obj1.display();
	
	obj1.accept();
	obj1.display();

	int max = obj1.findMax();
	cout << "\n the max is " << max;*/

}