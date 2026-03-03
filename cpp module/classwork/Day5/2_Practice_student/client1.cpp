#include "student.h"


class printToScreen {

public:

	static void accept(Student sarr[]) {

		for (int i = 0; i < 3; i++) {

			sarr[i].accept();
		}
	}

	static void display(Student sarr[]) {

		for (int i = 0; i < 3; i++) {

			sarr[i].display();
		}
	}
	static void searchByRno(Student sarr[], int Roll_no) {
		bool flag = false;

		for (int i = 0; i < 3; i++) {
			
			if (sarr[i].getRno() == Roll_no) {
				flag = true;
				sarr[i].display();
				break;
			}
		}
		if (flag == false) {
			cout << "Roll no not found" << endl;
		}
	}
};

int main() {

	Student sarr[3];

	printToScreen::accept(sarr);
	printToScreen::display(sarr);

	return 0;
}