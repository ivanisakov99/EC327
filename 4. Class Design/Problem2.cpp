#include <iostream>
#include "Student.h"
#include "Course.h"

using namespace std;

int main(){
    string s = "Ivan Isakov";
    Course c1 = Course("EC327", 3);

    cout << c1.getAvailableSeats() << endl;

    c1.addStudent("John", "Doe", 52060548, 3.6);
    c1.addStudent("Jane", "Doe", 52060548, 3.6);
    c1.addStudent("Bruce", "Wayne", 52060548, 3.6);

    cout << c1.getAvailableSeats() << endl;

   
    cout << "c2 students " << endl;

    Course c2 = Course(c1);

    c2.getStudents();
    cout << "dropping one" << endl;

    c2.dropStudent("Bruce Wayne");
    c2.dropStudent("Jane Doe");
    c2.dropStudent("John Doe");
    c2.getStudents();

    cout << "number of students: " << c2.getNumStudents() << endl;
    cout << "the capacity for this class: " << c2.getCapacity() << endl;
    cout << "the number of available seats: " << c2.getAvailableSeats() << endl;


    return 0;
}