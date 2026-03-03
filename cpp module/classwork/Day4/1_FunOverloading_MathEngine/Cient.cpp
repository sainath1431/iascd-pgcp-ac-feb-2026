#include"MathEngine.h"

int main()
{
	cout << "\n the addition of 2 int is " << MathEngine::add(12, 5);
	cout << "\n teh addition of 2 double is " << MathEngine::add(12.5, 6.7);
	cout << "\n the addition of 2 strings is " << MathEngine::add("Hello ", "World");
}