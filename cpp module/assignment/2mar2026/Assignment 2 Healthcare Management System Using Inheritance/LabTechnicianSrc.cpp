#include"LabTechnician.h"

LabTechnician::LabTechnician() {
	labType = "NA";
	numberOfTestsHandledPerDay = 0;
	salary = 0.0;
}


LabTechnician::LabTechnician(int staffId, string name, int age, string contactNumber, string labType, int numberOfTestsHandledPerDay, double salary):MedicalStaff(staffId,name,age,contactNumber) {
	this->labType = labType;
	this->numberOfTestsHandledPerDay = numberOfTestsHandledPerDay;
	this->salary = salary;
}

void LabTechnician::acceptLabTechnicianDetails() {
	cout << "\n Enter Lab Technician Details : " << endl;

	MedicalStaff::acceptStaffDetails();

	cout << "\n Lab Type : ";
	cin >> labType;
	cout << "\n Number Of Tests Handled Per Day :  ";
	cin >> numberOfTestsHandledPerDay;
	cout << "\n Salary : ";
	cin >> salary;
}


void LabTechnician::displayLabTechnicianDetails() {
	cout << "\n Lab Technician Details : " << endl;

	MedicalStaff::displayStaffDetails();

	cout << "\n Lab Type : " << labType;
	cout << "\n Number Of Tests Handled Per Day : " << numberOfTestsHandledPerDay;
	cout << "\n Salary : " << salary;
}

