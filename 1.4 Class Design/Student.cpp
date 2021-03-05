#include <iostream>
#include "Student.h"

using namespace std;

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