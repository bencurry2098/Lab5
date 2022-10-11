#pragma once
#ifndef INVOICE_H
#define INVOICE_H
#include "Employee.h"
#include "Car.h"
#include "Student.h"
#include "Service.h"
#include "Lev.h"
#include "Moped.h"

class Invoice {
private: 
	string userType;
	string vehicleType;
	double total;
	string passType;
public: 
	Invoice() = default;
	Invoice(string ut, string vt, double t, string pt);
	void setUserType(string u);
	void setVehicleType(string v);
	void setPassType(string p);
	string getPassType() { return passType; };
	string getUserType() { return userType; };
	string getVehicleType() { return vehicleType; };
	double calcTotal(string userType, string vehicleType, string passType); 
	void outputServiceInfo();
	void outputMopedInfo();
	void outputVisitorInfo();
	void outputMotorcycleInfo( );
	void outputInvoice(string u, string v, Employee employee,  Car car, Student student);
};
#endif
