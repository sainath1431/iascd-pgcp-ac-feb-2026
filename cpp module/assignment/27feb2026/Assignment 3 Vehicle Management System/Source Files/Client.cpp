#include"Vehicle.h"

int main() {
	Vehicle vehicle;

	vehicle.accept();
	vehicle.display();

	vehicle.setPrice(200000);
	cout << "\n\n Updated Vehicle Details : " << endl;
	cout << "\n Vehicle Number : " << vehicle.getVehicleNumber() << endl;
	cout << "\n Brand : " << vehicle.getBrand() << endl;
	cout << "\n Model : " << vehicle.getModel() << endl;
	cout << "\n Price : " << vehicle.getPrice() << endl;
	cout << "\n Mileage : " << vehicle.getMileage() << endl;

	vehicle.calculateResaleValue();

}