#pragma once
#include"MedicalStaff.h"

class Doctor : public MedicalStaff {
private:
	string specialization;
	double consultationFee;
	int experience;

public:
	Doctor();
	Doctor(int staffId, string name, int age, string contactNumber, string specialization, double consultationFee, int experience);
	void acceptDoctorDetails();
	void displayDoctorDetails();
	void calculateYearlyIncome();
};