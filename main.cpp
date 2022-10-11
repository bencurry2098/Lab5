#include <iostream>
#include <string>
#include <iomanip>
//Benjamin Curry
//This is a parking pass program that outputs the information entered and the total cost 
//Date: 10/10/2022
#include "Employee.h"
#include "Car.h"
#include "Student.h"
#include "Service.h"
#include "Lev.h"
#include "Moped.h"
#include "Invoice.h"
#include "Motorcycle.h"
#include "Visitor.h"
using namespace std;

int main(void) {
	//create invoice object
	Invoice invoice;
	Employee employee;
	Car car;
	Student student;
	//create pass type variables
	string passType;
	//prompt for and store pass type
	cout << "What type of parking pass would you like to purchase? Annual, Semester, One day, or Park and Ride: ";
	getline(cin >> ws, passType);
	invoice.setPassType(passType);

	//validate pass type
	while (passType != "Annual" && passType != "Semester" && passType != "One day" && passType != "Park and ride") {
		cout << "Invalid option chosen. Please choose again: ";
		getline(cin >> ws, passType);
	}

	//create user type variable
	string userType;
	//store user type
	cout << "Choose an option: Student, Employee, Visitor, or Service worker: ";
	getline(cin, userType);
	invoice.setUserType(userType);

	//validate usertype
	while (userType != "Student" && userType != "Employee" && userType != "Visitor" && userType != "Service worker") {
		cout << "Invalid option chosen. Please choose again: ";
		getline(cin >> ws, userType);
	}


	//create if statements for each user type
	if (userType == "Student") {
		//Intialize variables for data collection
		string studentName;
		string studentAddress;
		string studentEmail;
		string studentID;
		string studentClassStanding;
		//prompt for and store name, address, email, etc.
		cout << "Enter your name: ";
		getline(cin >> ws, studentName);
		student.setName(studentName);
		cout << "Enter your address: ";
		getline(cin >> ws, studentAddress);
		student.setAddress(studentAddress);
		cout << "Enter your email: ";
		getline(cin >> ws, studentEmail);
		student.setEmail(studentEmail);
		cout << "Enter your student ID: ";
		getline(cin >> ws, studentID);
		student.setStudentID(studentID);
		cout << "Enter your class standing: ";
		getline(cin >> ws, studentClassStanding);
		student.setClassStanding(studentClassStanding);
	}
	else if (userType == "Employee") {
		//initialize variables for data collection
		string employeeName;
		string employeeAddress;
		string employeeEmail;
		int employeeID;
		string employeeJob;
		//prompt for and store name, address, email, etc.
		cout << "Enter your name: ";
		getline(cin >> ws, employeeName);
		employee.setName(employeeName);
		cout << "Enter your address: ";
		getline(cin >> ws, employeeAddress);
		employee.setAddress(employeeAddress);
		cout << "Enter your email: ";
		getline(cin >> ws, employeeEmail);
		employee.setEmail(employeeEmail);
		cout << "Enter your job title: ";
		getline(cin >> ws, employeeJob);
		employee.setEmployeeJob(employeeJob);
		cout << "Enter your employee ID: ";
		cin >> employeeID;
		employee.setEmployeeID(employeeID);

	}
	else if (userType == "Visitor") {
		//initialize variables needed for data collection
		string visitorName;
		string visitorAddress;
		string visitorEmail;
		int visitorDuration;
		string visitorResponse;
		bool visitorParent;
		Visitor visitor;
		cout << "Enter your name: ";
		getline(cin >> ws, visitorName);
		visitor.setName(visitorName);
		cout << "Enter your address: ";
		getline(cin >> ws, visitorAddress);
		visitor.setAddress(visitorAddress);
		cout << "Enter your email: ";
		getline(cin >> ws, visitorEmail);
		visitor.setEmail(visitorEmail);
		cout << "Enter the duration of your stay: ";
		cin >> visitorDuration;
		visitor.setDuration(visitorDuration);
		cout << "Enter Yes if you are a parent or No if you are not a parent: ";
		cin >> visitorResponse;
		if (visitorResponse == "Yes") {
			visitorParent = true;
		}
		else {
			visitorParent = false;
		}
		visitor.setParent(visitorParent);
	}
	else if (userType == "Service worker") {
		//initialize variables needed for data collection
		string serviceName;
		string serviceAddress;
		string serviceEmail;
		string serviceDepartment;
		int yearsService;
		Service service;
		cout << "Enter your name: ";
		getline(cin >> ws, serviceName);
		service.setName(serviceName);
		cout << "Enter your address: ";
		getline(cin >> ws, serviceAddress);
		service.setAddress(serviceAddress);
		cout << "Enter your email: ";
		getline(cin >> ws, serviceEmail);
		service.setEmail(serviceEmail);
		cout << "Enter your department: ";
		getline(cin >> ws, serviceDepartment);
		service.setDepartment(serviceDepartment);
		cout << "Enter your years of service: ";
		cin >> yearsService;
		service.setYearsService(yearsService);
	}


	//create vehicle type variable
	string vehicleType;
	//store vehicle type
	cout << "\nChoose an option: LEV, Moped, Car, or Motorcycle: ";
	cin >> vehicleType;
	invoice.setVehicleType(vehicleType);
	//validate vehicle type
	while (vehicleType != "LEV" && vehicleType != "Moped" && vehicleType != "Car" && vehicleType != "Motorcycle") {
		cout << "Inavlid option chosen. Please choose again: ";
		cin >> vehicleType;
	}
	//create if statements for each vehicle type
	if (vehicleType == "LEV") {
		//intialize variables needed for data collection
		string levMake;
		string levModel;
		int levYear;
		string levLP;
		double levCharge;
		double levGallons;
		LEV lev;
		cout << "Enter the make: ";
		getline(cin >> ws, levMake);
		lev.setMake(levMake);
		cout << "Enter the model: ";
		getline(cin >> ws, levModel);
		lev.setModel(levModel);
		cout << "Enter the year: ";
		cin >> levYear;
		lev.setYear(levYear);
		cout << "Enter the license plate number: ";
		getline(cin >> ws, levLP);
		lev.setLicensePlate(levLP);
		cout << "Enter the charge time (decimal): ";
		cin >> levCharge;
		lev.setChargeTime(levCharge);
		cout << "Enter the gallons (decimal): ";
		cin >> levGallons;
		lev.setGallons(levGallons);
	}
	if (vehicleType == "Moped") {
		//initialize variables needed for data collection
		string mopedMake;
		string mopedModel;
		int mopedYear;
		string mopedLPN;
		int mopedPower;
		int mopedCommuteDist;
		Moped moped;
		cout << "Enter the make: ";
		getline(cin >> ws, mopedMake);
		moped.setMake(mopedMake);
		cout << "Enter the model: ";
		getline(cin >> ws, mopedModel);
		moped.setModel(mopedModel);
		cout << "Enter the year: ";
		cin >> mopedYear;
		moped.setYear(mopedYear);
		cout << "Enter the license plate number: ";
		getline(cin >> ws, mopedLPN);
		moped.setLicensePlate(mopedLPN);
		cout << "Enter the horsepower (nearest whole number): ";
		cin >> mopedPower;
		moped.setMopedPower(mopedPower);
		cout << "Enter the commute distance (nearest whole number): ";
		cin >> mopedCommuteDist;
		moped.setCommutedistance(mopedCommuteDist);
	}
	if (vehicleType == "Car") {
		//initialize variables needed for data collection 
		string carMake;
		string carModel;
		int carYear;
		string carLicensePlateNum;
		string carGasType;
		double carMPG;
		//prompt for and store vehicle data
		cout << "Enter the make of the car: ";
		getline(cin >> ws, carMake);
		car.setMake(carMake);
		cout << "Enter the model of the car: ";
		getline(cin >> ws, carModel);
		car.setModel(carModel);
		cout << "Enter the year of the car: ";
		cin >> carYear;
		car.setYear(carYear);
		cout << "Enter the car's gas type: ";
		getline(cin >> ws, carGasType);
		car.setGasType(carGasType);
		cout << "Enter the car's license plate number: ";
		getline(cin >> ws, carLicensePlateNum);
		car.setLPN(carLicensePlateNum);
		cout << "Enter the car's mpg: ";
		cin >> carMPG;
		car.setMPG(carMPG);
	}
	if (vehicleType == "Motorcycle") {
		//initialize all variables needed for data collection
		string motorMake;
		string motorModel;
		int motorYear;
		string motorLP;
		int motorWheels;
		string motorResponse;
		bool sideCar = false;
		Motorcycle motorcycle;
		cout << "Enter the make: ";
		getline(cin >> ws, motorMake);
		motorcycle.setMake(motorMake);
		cout << "Enter the model: ";
		getline(cin >> ws, motorModel);
		motorcycle.setModel(motorModel);
		cout << "Enter the year: ";
		cin >> motorYear;
		motorcycle.setYear(motorYear);
		cout << "Enter the license plate: ";
		getline(cin >> ws, motorLP);
		motorcycle.setLP(motorLP);
		cout << "Enter the amount of wheels: ";
		cin >> motorWheels;
		motorcycle.setWheels(motorWheels);
		cout << "Enter Yes if the motorcycle has a side car and No if it doesn't: ";
		cin >> motorResponse;
		if (motorResponse == "Yes") {
			sideCar = true;
		}
		else {
			sideCar = false;
		}
		motorcycle.setSideCar(sideCar);
	}
	//Output 
	invoice.calcTotal(userType, vehicleType, passType);
	invoice.outputInvoice(userType, vehicleType, employee, car, student);
};