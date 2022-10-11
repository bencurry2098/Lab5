#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

//create car object called car
Car car;

//setter functions
void Car::setMake(string ma) {
	make = ma;
}
void Car::setModel(string mo) {
	model = mo;
}
void Car::setYear(int y) {
	year = y;
}
void Car::setGasType(string gt) {
	gasType = gt;
}
void Car::setLPN(string lpn) {
	licensePlateNum = lpn;
}
void Car::setMPG(double MPG) {
	mpg = MPG;
}