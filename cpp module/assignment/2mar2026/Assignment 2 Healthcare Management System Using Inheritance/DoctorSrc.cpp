#include"Doctop.h"

Doctor::Doctor() {
	specialization = "NA";
	consultationFee = 0.0;
	experience = 0;
}

Doctor::Doctor(int staffId, string name, int age, string contactNumber, string specialization, double consultationFee, int experience) :MedicalStaff(staffId, name, age, contactNumber) {
	this->specialization = specialization;
	this->consultationFee = consultationFee;
	this->experience = experience;
}


void Doctor::acceptDoctorDetails() {

	cout << "\n Enter Doctor Details : " << endl;

	MedicalStaff::acceptStaffDetails();
	
	cout << "\n Specialization : ";
	cin.ignore();
	getline(cin, specialization);

	cout << "\n Consultation Fees : ";
	cin >> consultationFee;

	cout << "\n Experience : ";
	cin >> experience;
}


void Doctor::displayDoctorDetails() {

	cout << "\n Doctor Details : " << endl;

	MedicalStaff::displayStaffDetails();

	cout << "\n Specialization : " << specialization;
	cout << "\n Consultation Fee : " << consultationFee;
	cout << "\n Experience : " << experience;
	calculateYearlyIncome();
}

void Doctor::calculateYearlyIncome() {
	int estimatedPatientPerMonth = 300;

	//Yearly Income = consultationFee * estimated patients per month * 12;

	float yearlyIncome = consultationFee * estimatedPatientPerMonth * 12;

	cout << "\n Yearly Income : " << yearlyIncome << endl;
}