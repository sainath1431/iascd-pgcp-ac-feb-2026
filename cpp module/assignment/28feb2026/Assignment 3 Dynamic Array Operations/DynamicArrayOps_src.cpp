#include"DynamicArrayOps.h"

DynamicArrayOps::DynamicArrayOps() {
	cout << "\n Enter No. Of Elements : ";
	cin >> noe;

	//Array Allocation.
	arr = new int[noe];

	for (int i = 0; i < noe; i++) {
		arr[i] = 0;
	}

	cout << "\n Array Created Successfully.!!!";
}

void DynamicArrayOps::accept() {
	cout << "\n Enter Array Elements : " << endl << endl;
	for (int i = 0; i < noe; i++) {
		cout << "\n Enter Element : ";
		cin >> arr[i];
	}
}

void DynamicArrayOps::display() {
	cout << "\n Array Elements : ";
	for (int i = 0; i < noe; i++) {
		cout << "\t" << arr[i];
	}
}

int DynamicArrayOps::findMax() {
	int max = arr[0];

	for (int i = 1; i < noe; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}


DynamicArrayOps::~DynamicArrayOps() {
	if (arr != NULL) {
		delete[] arr;
		arr = NULL;
	}
}

