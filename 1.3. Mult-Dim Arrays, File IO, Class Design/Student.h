#ifndef Student_H
#define student_H

#include <string>
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
#endif

