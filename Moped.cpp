#include <string>
#include <iomanip>
#include "moped.h"
using namespace std;

void Moped::setMake(string mk) {
    make = mk;
}
void Moped::setModel(string mdl) {
    model = mdl;
}
void Moped::setYear(int y) {
    year = y;
}
void Moped::setLicensePlate(string lp) {
    licensePlate = lp;
}
void Moped::setMopedPower(int mp) {
    mopedPower = mp;
}
void Moped::setCommutedistance(int cd) {
    commuteDistance = cd;
}