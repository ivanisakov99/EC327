#include "Student.h"
#include <iostream>

using namespace std;

int main(){
    string first = "Ivan", last = "Isakov";
    unsigned int id = 52060548;
    float gpa = 3.6, newgpa = 3.8;


    Student s(first, last, id, gpa);
    s.display();

    s.setGpa(newgpa);
    cout << "The  new GPA is: " << s.getGpa() << endl;


    return 0;
}