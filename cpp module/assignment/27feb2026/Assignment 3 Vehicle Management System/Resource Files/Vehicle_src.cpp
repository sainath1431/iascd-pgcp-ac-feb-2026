#include"Vehicle.h";

Vehicle::Vehicle() {
	vehicleNumber = "Not Registered";
	brand = "Unknown";
	model = "Unknown";
	price = 0.0f;
	mileage = 0.0f;
}

Vehicle::Vehicle(string vehicleNumber, string brand, string model, float price, float mileage) {
	this->vehicleNumber = vehicleNumber;
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->mileage = mileage;
}


string Vehicle::getVehicleNumber() {
	return vehicleNumber;
}
string Vehicle::getBrand() {
	return brand;
}
string Vehicle::getModel() {
	return model;
}
float Vehicle::getPrice() {
	return price;
}
float Vehicle::getMileage() {
	return mileage;
}


void Vehicle::setVehicleNumber(string vehicleNumber) {
	this->vehicleNumber = vehicleNumber;
}
void Vehicle:: setBrand(string brand) {
	this->brand = brand;
}
void Vehicle:: setModel(string model) {
	this->model = model;
}
void Vehicle::setPrice(float price) {
	this->price = price;
}
void Vehicle::setMileage(float mileage) {
	this->mileage = mileage;
}

void Vehicle::accept() {
	cout << "\n\n Enter Vehicle Information : " << endl;
	cout << "\n Enter Vehicle Number = ";
	//cin >> vehicleNumber;
	getline(cin, vehicleNumber);

	cout << "\n Enter Brand = ";
	//cin >> brand;
	getline(cin, brand);
	
	cout << "\n Enter Model = ";
	//cin >> model;
	getline(cin, model);

	cout << "\n Enter Price = ";
	cin >> price;

	cout << "\n Enter Mileage = ";
	cin >> mileage;
}


void Vehicle::display() {
	cout << "\n\n Vehicle Details : " << endl;
	cout << "\n Vehicle Number = " << vehicleNumber << endl;
	cout << "\n Brand = " << brand << endl;
	cout << "\n Model = " << model << endl;
	cout << "\n Price = " << price << endl;
	cout << "\n Mileage = " << mileage << endl;
}

void Vehicle::calculateResaleValue() {
	float resaleValue = 0.80 * price;
	cout << "\n\n Resale Value = " << resaleValue;
}