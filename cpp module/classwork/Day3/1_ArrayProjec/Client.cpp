#include"ArrayOperations.h"

int main()
{
	ArrayOps obj1;
	obj1.display();

	obj1.accept();
	obj1.display();

	int max = obj1.findMax();
	cout << "\n the max is " << max;
}