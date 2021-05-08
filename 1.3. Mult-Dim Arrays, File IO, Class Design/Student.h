#ifndef Student_H
#define Student_H

#include <string>
#include <iostream>

using namespace std;

class Student {
	private:
		//private member(s)
		float gpa;
	public:
		//public member(s)
		string first;
		string last;
		unsigned int id;

		//public member functions
		Student(); 
		Student(string f, string l, int i, float g); 
		void setGpa(float g); 
		float getGpa(); 
		void display();
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

#endif

