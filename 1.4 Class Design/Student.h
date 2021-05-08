#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student{
private:
    //GPA
    float gpa;   
    //First Name       
    string first;       
    string last;        //Last Name
    unsigned int id;    //Student ID

public:
    Student();                  //No Argument Constructor
    Student(string f, string l, int i, float g);    //Constructor
    void setGpa(float g);       //Set GPA
    float getGpa();             //Get GPA
    void display();             //Display Student Info
    void setFirst(string f);    //Set First Name
    void setLast(string l);     //Set Last Name
    void setId(unsigned int n); //Set Student ID
    string getFirst();          //Get First Name
    string getLast();           //Get Last Name
    unsigned int getId();       //Get Student ID
};

Student::Student() {
	first = "Jane";
	last = "Doe";
	id = 0;
	gpa = 0.0;
}

Student::Student(string f, string l, int i, float g) {
	first = f;
	last = l;
	id = i;
	gpa = g;
}

void Student::setGpa(float g) {
	gpa = g;
}

float Student::getGpa() {
	return gpa;
}

void Student::display() {
	cout << first << " " << last << " " << id << " " << gpa << endl;
}

void Student::setFirst(string f){
    first = f;
}

void Student::setLast(string l){
    last = l;
}

void Student::setId(unsigned int n){
    id = n;
}

string Student::getFirst(){
    return first;
}

string Student::getLast(){
    return last;
}
unsigned int Student::getId(){
    return id;
}

#endif