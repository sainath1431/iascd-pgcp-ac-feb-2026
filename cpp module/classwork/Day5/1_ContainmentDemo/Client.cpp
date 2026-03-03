#include"Product.h"

class PrintToScreen
{
public:
	static void accept(Product parr[])
	{
		for (int i = 0; i < 3; i++)
		{
			parr[i].accept();
		}
	}
	static void display(Product parr[])
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "\n Sr numbr " << i + 1;
			parr[i].display();
		}
	}
	static void searchById(Product parr[],int id)
	{
		bool flag = false;
		for (int i = 0; i < 3; i++)
		{
			if (id == parr[i].getId())
			{
				flag = true;
				parr[i].display();
				break;
			}
		}
		if (flag == false)
		{
			cout << "\n Not found";
		}
	}

	static void searchByName(Product parr[], string name)
	{
		bool flag = false;
		for (int i = 0; i < 3; i++)
		{
			if (name == parr[i].getName())
			{
				flag = true;
				parr[i].display();
				break;
			}
		}
		if (flag == false)
		{
			cout << "\n Not found";
		}

	}

};

int main()
{

	Product parr[3];

	PrintToScreen::accept(parr);
	int choice; char wish; string name = "Na"; int id = 0;
	do
	{
		cout << "\n 1.Display all products "<<
			"\n 2. search by id \n 3. Search by name" << endl;
		cout << "\n enter the choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			PrintToScreen::display(parr);
			break;
		case 2:
			
			cout << "\n enter the id to search:";
			cin >> id;
			PrintToScreen::searchById(parr, id);
			break;
		case 3:
			
			cout << "\n enter the name to search:";
			cin >> name;
			PrintToScreen::searchByName(parr, name);
			break;
		default:
			cout << "\n invlid choice";
			break;
		}
		cout << "\n do u want to continue:";
		cin >> wish;
	} while (wish == 'y' || wish == 'Y');


	/*PrintToScreen::display(parr);
	
	PrintToScreen::searchById(parr, id);*/

	


//	Product p;  //Date()->Product()
//	p.display();
//
//
//	Product p2(101, "Medicine", 78, 12, 12, 2025);
//	p2.display();
}