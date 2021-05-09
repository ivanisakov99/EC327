#ifndef Problem2_h
#define Problem2_h

#include <string>
#include <iostream>

using namespace std;

class Employee {
  protected:
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
  this->name = theName;
  this->payRate = thePayRate;
}

string Employee::getName() const {
  return this->name;
}

float Employee::getPayRate() const{
  return this->payRate;
}

float Employee::pay(float hoursWorked)const {
  return hoursWorked * this->payRate;
}

void Employee::printInfo() {
  cout << "Name: " << this->name << endl;
  cout << "Pay Rate: " << this->payRate << endl;
}

class Manager : public Employee{
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
        return hoursWorked * getPayRate();
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
