#ifndef Person_h
#define Person_h 

#include <iostream>
#include <string>

using namespace std;

class Person{
	public:
		int income;
		double tax_rate;
		Person* enemy;
		Person* buddy;
		string name;

		//constructor
		Person(int income, double tax_rate, string name);

		//calculates the post tax income. Takehome_pay = income - tax_rate * income
		int calc_takehome_pay();

		//Determines if P1 is an enemy or friend. If the Person makes the same or more
		//than P1, P1 is a friend. Else if the Person makes less than P1, P1 is an enemy.
		//Sets P1 to be the persons enemy or buddy based on this calculation.
		void enemy_or_buddy(Person* P1);
		//Prints out the Person’s enemy’s and buddy’s name if it has one, otherwise
		//prints "No buddy!" or "No enemy"

		void print_status();
};


//Write the Person Constructor here. See Person.h for input arguments
//be sure to initialize buddy and enemy as NULL in the constructor

Person::Person(int income, double tax_rate, string name){
	this->income = income;
	this->tax_rate = tax_rate;
	this->name = name;
	this->buddy = NULL;
	this->enemy = NULL;
}

//write the calc_takehome_pay function here. 

int Person::calc_takehome_pay(){
	return this->income - this->tax_rate * this->income;
}

//write the enemy_or_buddy function here. See problem statement for proper arguments

void Person::enemy_or_buddy(Person* P1){
	if(this->income >= P1->income){
		this->buddy = P1;
	}
	else{
		this->enemy = P1;
	}
}

//write the print_status function here

void Person::print_status(){
	if(this->buddy != NULL){
		cout << this->buddy->name << " is a buddy." << endl;
	}
	else{
		cout << "No buddy!" << endl;
	}
	if(this->enemy != NULL){
		cout << this->enemy->name << " is an enemy." << endl;
	}
	else{
		cout << "No enemy!" << endl;
	}
}

#endif