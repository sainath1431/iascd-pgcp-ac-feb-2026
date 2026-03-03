#pragma once
#include"MedicalStaff.h";

class Nurse : public MedicalStaff {
private:
	string shift;
	string wardAssigned;
	double salary;
public:
	Nurse();
	Nurse(int staffId, string name, int age, string contactNumber, string shift, string wardAssigned, double salary);
	void acceptNurseDetails();
	void displayNurseDetails();

};