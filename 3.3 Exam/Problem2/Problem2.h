#ifndef Q3_H
#define Q3_H

#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

class Manager: public Employee{
  private:
    bool isSalaried;
    float salary;
  public:
    Manager();
    Manager(string theName, float pay, bool isSalaried);
    void setIsSalaried(bool s);
    bool getIsSalaried();
    void setSalary(float salary);
    float getSalary();
    float pay(float hoursWorked);
    friend ostream& operator<<(ostream &out, Manager& m);
};

#endif