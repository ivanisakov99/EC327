#ifndef STUDENT_H
#define STUDENT_H

#include <string>

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

#endif