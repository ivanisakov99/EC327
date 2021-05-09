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


Employee::Employee(){
  name = "";
  payRate = 0;
}

Employee::Employee(string theName, float thePayRate) {
  name = theName;
  payRate = thePayRate;
}

string Employee::getName() const {
  return name;
}

float Employee::getPayRate() const{
  return payRate;
}

float Employee::pay(float hoursWorked)const {
  return hoursWorked * payRate;
}

void Employee::printInfo() {
  cout << "Employee" << endl;
}
/*
Manager::Manager(string theName, float pay, bool isSalaried()):Employee(theName, pay){
  if()
}*/

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
