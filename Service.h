#pragma once
#include <string>
#include <iomanip>
#include <iostream>
#ifndef SERVICE_H_
#define SERVICE_H_
using namespace std;

class Service {
private:
    string name;
    string address;
    string email;
    string department;
    int yearsService;
public:
    string getName() { return name; };
    string getAddress() { return address; };
    string getEmail() { return email; };
    string getDepartment() { return department; };
    int getYearsService() { return yearsService; };
    void setName(string n);
    void setAddress(string a);
    void setEmail(string e);
    void setDepartment(string dpt);
    void setYearsService(int ys);
};
#endif
