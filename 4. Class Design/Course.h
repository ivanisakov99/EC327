#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"

using namespace std;

class Course{
    private:
        //Course Name
        string name;   
        //Course Capacity
        unsigned int capacity;      
        //Number of Students in the Course
        unsigned int numStudents;   
        //Pointer to array of Students
        Student* students;          

    public:
        //No Argument Constructor
        Course();                       
        //Destructor
        ~Course();                      
        //Constructor
        Course(string n, int c);        
        //Copy Constructor
        Course(const Course& c);        
        //Get Number of Students
        unsigned int getNumStudents();  
        //Get Capacity of the Course
        unsigned int getCapacity();
        //Get Available Seats
        unsigned int getAvailableSeats();   
        //Add a Student to the Course
        void addStudent(string f, string l, int id, float g);   
        //Drop a Student from the Course
        void dropStudent(string name);  
        //Get Students in the Course
        void getStudents(); 
};

#endif