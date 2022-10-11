#pragma once
#include <string>
#include <iostream>
using namespace std;
#ifndef CAR_H
#define CAR_H

//create car class
class Car {
private:
	//initialize all variables needed for data collection 
	string make;				
	string model;
	int year;
	string licensePlateNum;
	string gasType;
	double mpg;
public: 
	//make prototype for all setter functions
	void setMake(string ma);
	void setModel(string mo);
	void setYear(int y);
	void setLPN(string lpn);				
	void setGasType(string gt);
	void setMPG(double MPG);
	//make prototype for all getter functions 
	string getMake() { return make; };
	string getModel() { return model; };
	int getYear() { return year; };
	string getLPN() { return licensePlateNum; };
	string getGasType() { return gasType; };
	double getMPG() { return mpg; };
};
#endif
