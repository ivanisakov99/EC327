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

Manager::Manager(){
}

Manager::Manager(string theName, float pay, bool isSalaried){
    this->name = theName;
    this->isSalaried = isSalaried;
    if(isSalaried == true){
      salary = pay;
    }else{
      payRate = pay;
    }
}

void Manager::setIsSalaried(bool s){
    isSalaried = s;
}

bool Manager::getIsSalaried(){
    return isSalaried;
}

void Manager::setSalary(float salary){
    this->salary= salary;
}

float Manager::getSalary(){
    return salary;
}

float Manager::pay(float hoursWorked){
    if(isSalaried == true){
        return salary;
    }else{
        return hoursWorked * payRate;
    }
}

ostream& operator<<(ostream& out, Manager& m){
    if(m.isSalaried == true){
        out << m.name << " is salaried and has a salary of " << m.salary << " USD" << endl;
    }else{
        out << m.name << " is not salaried and has an hourly rate of " << m.payRate << " USD" << endl;
    }
    return out;
}

#endif