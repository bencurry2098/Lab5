#pragma once
#include <string>
#include <iomanip>
#ifndef MOPED_H_
#define MOPED_H_
using namespace std;

class Moped {
private:
    string make;
    string model;
    int year;
    string licensePlate;
    int mopedPower;
    int commuteDistance; //nearest mile
public:
    string getMake() { return make; };
    string getModel() { return model; };
    int getYear() { return year; };
    string getLicensePlate() { return licensePlate; };
    int getMopedPower() { return mopedPower; };
    int getCommuteDistance() { return commuteDistance; };
    void setMake(string mk);
    void setModel(string mdl);
    void setYear(int y);
    void setLicensePlate(string lp);
    void setMopedPower(int mp);
    void setCommutedistance(int cd);
};
#endif
