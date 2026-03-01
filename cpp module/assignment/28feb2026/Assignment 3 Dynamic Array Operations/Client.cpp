#include"DynamicArrayOps.h"

int main() {
	DynamicArrayOps arr; // Constructor will get called automatically.
	arr.accept();
	arr.accept();
	
	int max = arr.findMax();
	cout << "\n Max = " << max << endl;

}

// Destructor will get called automatically when object goes out of scope.