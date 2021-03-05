#include <iostream>
#include <string>
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

