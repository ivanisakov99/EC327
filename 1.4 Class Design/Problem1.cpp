#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main(){
    string f = "Ivan";
    string l = "Isakov";
    unsigned int id = 52060548;
    float gpa = 3.6;
    Student s1 = Student(f, l, id, gpa);
    
    s1.setFirst("Dasha");
    cout << s1.getFirst() << endl;

    s1.setLast("Isakova");
    cout << s1.getLast() << endl;

    s1.setId(12345678);
    cout << s1.getId() << endl;
    return 0;
}