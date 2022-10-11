#pragma once
#include <iostream>
using namespace std;
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
class Motorcycle {
private: 
	string make; 
	string model; 
	int year; 
	string licensePlate;
	int wheels; 
	bool sideCar;
public: 
	void setMake(string ma);
	void setModel(string mo);
	void setYear(int y);
	void setLP(string lp);
	void setWheels(int w);
	void setSideCar(bool s);
	string getMake() { return make; };
	string getModel() { return model; };
	int getYear() { return year; };
	string getLP() { return licensePlate; };
	int getWheels() { return wheels; };
	bool getSideCar() { return sideCar; };
};
#endif