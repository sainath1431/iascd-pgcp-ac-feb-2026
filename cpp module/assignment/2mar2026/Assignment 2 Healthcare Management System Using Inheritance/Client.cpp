#include"Doctop.h"
#include"Nurse.h"
#include"LabTechnician.h";

int main() {

	cout << "\n\n*****************Doctor************";
	Doctor d;
	d.acceptDoctorDetails();
	d.displayDoctorDetails();

	cout << "\n\n************Nurse*****************\n";

	Nurse n;
	n.acceptNurseDetails();
	n.displayNurseDetails();

	cout << "\n\n*************LabTechnician***********\n";

	LabTechnician l;
	l.acceptLabTechnicianDetails();
	l.displayLabTechnicianDetails();


	return 0;
}