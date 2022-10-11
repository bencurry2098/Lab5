#include <iostream>
using namespace std;
#include <iomanip>
#include "Employee.h"
#include "Car.h"
#include "Student.h"
#include "Service.h"
#include "Lev.h"
#include "Moped.h"
#include "Invoice.h"
#include "Visitor.h"
#include "Motorcycle.h"

Invoice::Invoice(string ut, string vt, double t, string pt) : userType("Student"), vehicleType("Car"), total(180.0), passType("Annual") {
	userType = ut;
	vehicleType = vt;
	total = t;
	passType = pt;
}

void Invoice::setUserType(string u) {
	userType = u;
}
void Invoice::setVehicleType(string v) {
	vehicleType = v;
}
void Invoice::setPassType(string p) {
	passType = p;
}

double Invoice::calcTotal(string userType, string vehicleType, string passType) {
	if (passType == "Annual") {
		if (userType == "Student") {
			total = 180.0;
		}
		else if (userType == "Employee") {
			total = 140.0;
		}
		else if (userType == "Service worker") {
			total = 80.0;
		}
	}
	else if (passType == "Semester") {
		if (userType == "Student") {
			total = 90.0;
		}
		else if (userType == "Employee") {
			total = 70.0;
		}
		else if (userType == "Service worker") {
			total = 40.0;
		}
	}
	else if (passType == "One day") {
		total = 30.0;
	}
	else if (passType == "Park and Ride") {
		total = 120.0;
	}

	//add a service charge
	double serviceCharge = 5.00;
	total += serviceCharge;

	//return total with added service charge
	return total;
}

void Invoice::outputServiceInfo() {
	Service service;
	cout << "\nName: ";
	cout << "\nAddress: ";
	cout << "\nEmail: ";
	cout << "\nDepartment: ";
	cout << "\nYears of service: ";
}


void Invoice::outputMopedInfo() {
	Moped moped;
	cout << "\nMake: ";
	cout << "\nModel: ";
	cout << "\nYear: ";
	cout << "\nHorsepower: ";
	cout << "\nLicense plate: ";
	cout << "\nCommute distance: ";
}

void Invoice::outputMotorcycleInfo() {
	Motorcycle motorcycle;
	cout << "\nMake: ";
	cout << "\nModel: ";
	cout << "\nYear: ";
	cout << "\nLicense plate: ";
	cout << "\nNumber of wheels: ";
	cout << "\nSide car: ";
}

void Invoice::outputVisitorInfo() {
	Visitor visitor;
	cout << "\nVISITOR\n";
}


void Invoice::outputInvoice(string u, string v, Employee employee, Car car, Student student) {				//figure out how to pass the rest of the objects
	Invoice invoice;
	userType = u;
	vehicleType = v;
	if (passType == "Annual") {
		if (userType == "Visitor") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "Vehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputVisitorInfo();
			//	cout << "Vehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "Vehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "Vehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Student") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << student.getName();
			//	cout << "\nAddress: " << student.getAddress();
			//	cout << "\nEmail: " << student.getEmail();
			//	cout << "\nStudent ID: " << student.getStudentID();
			//	cout << "\nClass Standing: " << student.getClassStanding();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Employee") {
			if (vehicleType == "Car") {
				cout << "\nYOURE IN THE RIGHT ONE\n";
				cout << "Pass purchased: " << passType << " " << userType; 
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << employee.getName();
			//	cout << "\nAddress: " << employee.getAddress();
			//	cout << "\nEmail: " << employee.getEmail();
			//	cout << "\nJob title: " << employee.getEmployeeJob();
			//	cout << "\nEmployee ID: " << employee.getEmployeeID();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Service worker") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputServiceInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
	}
	if (passType == "Semester") {
		if (userType == "Visitor") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputVisitorInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Student") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << student.getName();
			//	cout << "\nAddress: " << student.getAddress();
			//	cout << "\nEmail: " << student.getEmail();
			//	cout << "\nStudent ID: " << student.getStudentID();
			//	cout << "\nClass Standing: " << student.getClassStanding();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Employee") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << employee.getName();
			//	cout << "\nAddress: " << employee.getAddress();
			//	cout << "\nEmail: " << employee.getEmail();
			//	cout << "\nJob title: " << employee.getEmployeeJob();
			//	cout << "\nEmployee ID: " << employee.getEmployeeID();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Service worker") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputServiceInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
	}
	if (passType == "One day") {
		if (userType == "Visitor") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputVisitorInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Student") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << student.getName();
			//	cout << "\nAddress: " << student.getAddress();
			//	cout << "\nEmail: " << student.getEmail();
			//	cout << "\nStudent ID: " << student.getStudentID();
			//	cout << "\nClass Standing: " << student.getClassStanding();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Employee") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << employee.getName();
			//	cout << "\nAddress: " << employee.getAddress();
			//	cout << "\nEmail: " << employee.getEmail();
			//	cout << "\nJob title: " << employee.getEmployeeJob();
			//	cout << "\nEmployee ID: " << employee.getEmployeeID();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Service worker") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputServiceInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
	}
	if (passType == "Park and Ride") {
		if (userType == "Visitor") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputVisitorInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputVisitorInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Student") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << student.getName();
			//	cout << "\nAddress: " << student.getAddress();
			//	cout << "\nEmail: " << student.getEmail();
			//	cout << "\nStudent ID: " << student.getStudentID();
			//	cout << "\nClass Standing: " << student.getClassStanding();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << student.getName();
				cout << "\nAddress: " << student.getAddress();
				cout << "\nEmail: " << student.getEmail();
				cout << "\nStudent ID: " << student.getStudentID();
				cout << "\nClass Standing: " << student.getClassStanding();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Employee") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	cout << "\nName: " << employee.getName();
			//	cout << "\nAddress: " << employee.getAddress();
			//	cout << "\nEmail: " << employee.getEmail();
			//	cout << "\nJob title: " << employee.getEmployeeJob();
			//	cout << "\nEmployee ID: " << employee.getEmployeeID();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				cout << "\nName: " << employee.getName();
				cout << "\nAddress: " << employee.getAddress();
				cout << "\nEmail: " << employee.getEmail();
				cout << "\nJob title: " << employee.getEmployeeJob();
				cout << "\nEmployee ID: " << employee.getEmployeeID();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
		if (userType == "Service worker") {
			if (vehicleType == "Car") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				cout << "\nVehicle make: " << car.getMake();
				cout << "\nVehicle model: " << car.getModel();
				cout << "\nYear: " << car.getYear();
				cout << "\nGas Type: " << car.getGasType();
				cout << "\nLicense plate number: " << car.getLPN();
				cout << "\nMPG: " << car.getMPG();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			//if (vehicleType == "LEV") {
			//	cout << "Pass purchased: " << passType << " " << userType;
			//	invoice.outputServiceInfo();
			//	cout << "\nVehicle type: " << vehicleType;
			//	cout << "\nMake: " << lev.getMake();
			//	cout << "\nModel: " << lev.getModel();
			//	cout << "\nYear: " << lev.getYear();
			//	cout << "\nLicense plate number: " << lev.getLicensePlate();
			//	cout << "\nCharge time: " << lev.getChargeTime();
			//	cout << "\nTank size: " << lev.getGallons();
			//	cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			//}
			if (vehicleType == "Moped") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMopedInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
			if (vehicleType == "Motorcycle") {
				cout << "Pass purchased: " << passType << " " << userType;
				invoice.outputServiceInfo();
				cout << "\nVehicle type: " << vehicleType;
				invoice.outputMotorcycleInfo();
				cout << "\nTotal: " << invoice.calcTotal(userType, vehicleType, passType);
			}
		}
	}
}

	



