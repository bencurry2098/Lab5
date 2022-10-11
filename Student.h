#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string> //not sure if needed in h file

using namespace std;

//class collects information for customer type Student
class Student {
private:
    string name;
    string address;
    string email;
    string studentID;
    string classStanding;
public:
    string getName() { return name;  };
    string getAddress() { return address; };
    string getEmail() { return email; };
    string getStudentID() { return studentID; };
    string getClassStanding() { return classStanding; };
    void setName(string n);
    void setAddress(string a);
    void setEmail(string e);
    void setStudentID(string s);
    void setClassStanding(string c);
};
#endif
