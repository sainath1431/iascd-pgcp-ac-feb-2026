#include"StringOps.h"

int main()
{
	char str[20] = "India";
	StringOps obj1(str);
	obj1.display();

	char source[20] = "World";
	obj1.astrcpy(source);
	obj1.display();

	StringOps obj2(str);
	obj2.astrcpy(obj1.astrcpy(source));
	obj2.display();

}