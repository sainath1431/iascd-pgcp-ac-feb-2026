#include"SalesPerson.h"
#include"Manager.h"
class PrintToScreen
{
public:
	static void displayDetails(Employee* eptr)
	{
		eptr->display();
	}

};

int main()
{
	SalesPerson sp1(101, "King", 89000, 1000, 0.10);
	PrintToScreen::displayDetails(&sp1);
	

	Manager m1(102, "John", 78000, 5000, 5000);
	PrintToScreen::displayDetails(&m1);


	//SalesPerson sp1;
	//sp1.display();

	/*SalesPerson sp2(101, "King", 89000, 1000, 0.10);
	sp2.display();

	Manager m2(102, "John", 78000, 5000, 5000);
	m2.display();*/
}