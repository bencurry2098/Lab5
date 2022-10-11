#include <iostream>
#include "Employee.h"
using namespace std;

//create employee object called employee
Employee employee;

//setter functions
void Employee::setName(string n) {
	name = n;
}
void Employee::setAddress(string a) {
	address = a;
}
void Employee::setEmail(string e) {
	email = e;
}
void Employee::setEmployeeID(int ei) {
	employeeID = ei;
}
void Employee::setEmployeeJob(string ej) {
	employeeJob = ej;
}