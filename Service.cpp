#include <string>
#include "service.h"
using namespace std;

void Service::setName(string n) {
    name = n;
}
void Service::setAddress(string a) {
    address = a;
}
void Service::setEmail(string e) {
    email = e;
}
void Service::setDepartment(string dpt) {
    department = dpt;
}
void Service::setYearsService(int ys) {
    yearsService = ys;
}