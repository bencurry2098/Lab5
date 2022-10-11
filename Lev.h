#pragma once
#ifndef LEV_H
#define LEV_H
#include <string>

using namespace std;

class LEV {
private:
    string make;
    string model;
    int year;
    string licensePlate;
    double charge;
    double gallons;
public:
    string getMake() { return make; };
    string getModel() { return model; };
    int getYear() { return year; };
    string getLicensePlate() { return licensePlate; };
    double getChargeTime() { return charge; };
    double getGallons() { return gallons; };
    void setMake(string a);
    void setModel(string o);
    void setYear(int y);
    void setLicensePlate(string l);
    void setChargeTime(double c);
    void setGallons(double g);
};
#endif
