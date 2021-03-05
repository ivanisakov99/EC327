#include <iostream>
#include <cstring>
#include "Course.h"

using namespace std;

Course::Course(){           
    name = "EC000";
    capacity = 1000;
    numStudents = 0;
    students = new Student[capacity];
}

Course::~Course(){          
    delete [] students;
}

Course::Course(string n, int c){        
    name = n;
    capacity = c;
    numStudents = 0;
    students = new Student[capacity];
}

Course::Course(const Course& c){        
    name = c.name;
    capacity = c.capacity;
    numStudents = c.numStudents;
    
    Student *newstudents = new Student[numStudents];
    for (int i = 0; i < numStudents; i++){
        newstudents[i] = c.students[i];
    }
    students = newstudents;
}


unsigned int Course::getNumStudents(){      
    return numStudents;
}

unsigned int Course::getCapacity(){         
    return capacity;
}

unsigned int Course::getAvailableSeats(){
    return (capacity - numStudents);
}

void Course::addStudent(string f, string l, int id, float g){
    if (numStudents == capacity){
        cout << "The class is full!" << endl;
    }else{
        numStudents++;
        students[numStudents - 1].setFirst(f);
        students[numStudents - 1].setLast(l);
        students[numStudents - 1].setId(id);
        students[numStudents - 1].setGpa(g);
    }
}

void Course::dropStudent(string name){
    int n = name.length(), c = 0;
    char fullName[n + 1];
    strcpy(fullName, name.c_str());
   
    string first = strtok(fullName, " ");
    string last = strtok(NULL, "");
    
    for (int i = 0; i < numStudents; i++){
        if(students[i].getFirst() == first && students[i].getLast() == last){
            c++;
            Student *newstudents = new Student[numStudents - 1];
            int k = 0;

            for (int j = 0; j < numStudents; j++){
                if(j == i){
                    continue;
                }
                else{
                    newstudents[k] = students[j];
                    k++;
                }
            }

            delete [] students;
            numStudents--;
            students = newstudents;
        }
    }

    if(c == 0){
        cout << "Student not found!" << endl;
    }
}

void Course::getStudents(){
    if(numStudents == 0){
        cout << "The course is empty." << endl;
    }else{
        for (int i = 0; i < numStudents; i++){
            cout << students[i].getFirst() << " " << students[i].getLast() << endl;
        }
    }
}