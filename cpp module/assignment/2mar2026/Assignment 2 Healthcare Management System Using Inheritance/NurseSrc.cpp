#include"Nurse.h"

Nurse::Nurse() {
	shift = "NA";
	wardAssigned = "NA";
	salary = 0.0;
}

Nurse::Nurse(int staffId, string name, int age, string contactNumber, string shift, string wardAssigned, double salary) :MedicalStaff(staffId, name, age, contactNumber) {
	this->shift = shift;
	this->wardAssigned = wardAssigned;
	this->age = age;
	this->contactNumber = contactNumber;
}
void Nurse::acceptNurseDetails() {
	cout << "\n Enter Nurse Details : " << endl;

	MedicalStaff::acceptStaffDetails();

	cout << "\n Shift : ";
	cin.ignore();
	getline(cin, shift);

	cout << "\n Ward Assigned : ";
	cin.ignore();
	getline(cin, wardAssigned);

	cout << "\n Salary : ";
	cin >> salary;

}
void Nurse::displayNurseDetails() {
	cout << "\n Nurse Details : " << endl;

	MedicalStaff::displayStaffDetails();

	cout << "\n Shift : " << shift;
	cout << "\n Ward Assigned : " << wardAssigned;
	cout << "\n Salary : " << salary;


}