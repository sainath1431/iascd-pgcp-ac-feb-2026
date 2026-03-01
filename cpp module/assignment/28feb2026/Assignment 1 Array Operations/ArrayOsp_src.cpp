#include"ArrayOps.h"

//constructors
ArrayOps::ArrayOps() {
	
	cout << "\n Enter Size Of Array : ";
	cin >> noe;

	arr = new int[noe];

	for (int i = 0; i < noe; i++) {
		arr[i] = 0;
	}


//Mutators
void ArrayOps::accept() {
	cout << endl;
	for (int i = 0; i < noe; i++) {
		cout << "\n Enter Element : ";
		cin >> arr[i];
	}
}


//facilitators
void ArrayOps::display() {
	cout << "\n Elements : ";
	for (int i = 0; i < noe; i++) {
		cout  << "\t" << arr[i] ;
	}
}

void ArrayOps::findMinMax() {
	int max = arr[0];
	int min = arr[0];

	//int* res = new int[2];

	for (int i = 1; i < noe; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}

		if (min > arr[i]) {
			min = arr[i];
		}
	}

	//res[0] = min;
	//res[1] = max;

	//return res;

	cout << "\n Max = " << max;
	cout << "\n Min = " << min;
}
void ArrayOps::displayAvg() {
	int sum = 0;
	
	for (int i = 0; i < noe; i++) {
		sum += arr[i];
	}

	float avg = sum / noe;

	cout << "\n Average  = " << avg;
}

void ArrayOps::search(int target) {
	int pos = -1;
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]);
	int mid = -1;

	//int size = sizeof(arr) / sizeof(arr[0]); calculate size of array in cpp
	
	while (start <= end) {
		mid = (start + end) / 2;

		if (arr[mid] == target) {
			pos = mid + 1;
			break;
		}

		if (arr[mid] < target) {
			start = mid + 1;
		}
		else {
			end = end - 1;
		}
	}

	if (pos == -1) {
		cout << "\n " << target << " is not found." << endl;
	}
	else {
		cout << "\n " << target << " is found at " << pos << "." << endl;
	}
}


ArrayOps::~ArrayOps() {
	if (arr == NULL) {
		delete[] arr;
		arr = NULL;
	}
}