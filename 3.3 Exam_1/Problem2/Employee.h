#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee {
  private:
    string name;
    float payRate;
  public:
    Employee();
    Employee(string theName, float thePayRate);
    string getName() const;
    float getPayRate() const;
    float pay(float hoursWorked)const;
    void printInfo();
};

class Manager: public Employee{
  public:
    //bool isSalried();
    int setisSalaried(bool);
    Manager();
    Manager(string theName, float pay, bool);
    float pay();
    friend ostream& operator<<(ostream &out, Manager& m);
};

#endif
