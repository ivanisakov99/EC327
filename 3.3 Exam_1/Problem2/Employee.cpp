#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

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