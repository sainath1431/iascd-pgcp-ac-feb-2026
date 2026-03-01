#pragma once
#include <iostream>;
#include <string>;
using namespace std;

class Vehicle {
private:
	string vehicleNumber;
	string brand;
	string model;
	float price;
	float mileage;

public:
	Vehicle();
	Vehicle(string vehicleNumber, string brand, string model, float price, float mileage);
	void accept();
	void display();
	string getVehicleNumber();
	string getBrand();
	string getModel();
	float getPrice();
	float getMileage();
	void setVehicleNumber(string vehicleNumber);
	void setBrand(string brand);
	void setModel(string model);
	void setPrice(float price);
	void setMileage(float mileage);
	void calculateResaleValue();
};