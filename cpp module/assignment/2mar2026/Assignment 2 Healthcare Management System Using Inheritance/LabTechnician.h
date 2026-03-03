#pragma once
#include"MedicalStaff.h"

class LabTechnician : public MedicalStaff {
private:
	string labType;
	int numberOfTestsHandledPerDay;
	double salary;
public:
	LabTechnician();
	LabTechnician(int staffId, string name, int age, string contactNumber, string labType, int numberOfTestsHandledPerDay, double salary);
	void acceptLabTechnicianDetails();
	void displayLabTechnicianDetails();

};