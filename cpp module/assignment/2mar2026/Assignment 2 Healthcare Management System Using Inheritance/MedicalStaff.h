#pragma once
#include<iostream>
#include<string>
using namespace std;

class MedicalStaff {
protected:
	int staffId;
	string name;
	int age;
	string contactNumber;

public:
	MedicalStaff();
	MedicalStaff(int staffId, string name, int age, string contactNumber);
	void acceptStaffDetails();
	void displayStaffDetails();
};
