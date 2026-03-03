#include"MedicalStaff.h";

MedicalStaff::MedicalStaff() {
	staffId = 0;
	name = "NA";
	age = 0;
	contactNumber = "NA";
}

MedicalStaff::MedicalStaff(int staffId, string name, int age, string contactNumber) {
	this->staffId = staffId;
	this->name = name;
	this->age = age;
	this->contactNumber = contactNumber;
}

void MedicalStaff::acceptStaffDetails() {
	//cout << "\nEnter Staff Details : " << endl;
	cout << "\nID = ";
	cin >> staffId;

	cout << "\nName = ";
	cin.ignore();
	getline(cin, name);

	cout << "\nAge = ";
	cin >> age;

	cout << "\nContact Number = ";
	cin >> contactNumber;
}

void MedicalStaff::displayStaffDetails() {
	//cout << "\n Staff Details = " << endl;
	cout << "\n ID = " << staffId;
	cout << "\n Name = " << name;
	cout << "\n Age = " << age;
	cout << "\n Contact Number = " << contactNumber;
}