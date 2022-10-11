#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//create employee class
class Employee {
private: 
	//initialize variables needed for data collection
	string name;
	string address;
	string email;
	int employeeID;
	string employeeJob;
public: 
	//make prototype for setter functions
	void setName(string n);
	void setAddress(string a);
	void setEmail(string e);
	void setEmployeeID(int ei);
	void setEmployeeJob(string ej);
	//make prototype for getter functions
	string getName() { return name; };
	string getAddress() { return address; };
	string getEmail() { return email; };
	int getEmployeeID() { return employeeID; };
	string getEmployeeJob() { return employeeJob; };
};
#endif





