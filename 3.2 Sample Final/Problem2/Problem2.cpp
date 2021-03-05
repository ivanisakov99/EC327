#include "Problem2.h"
#include <iostream>
using namespace std;

Car::Car(short year, string make, string color, unsigned int mileage){
	this->year = year;
	this->make = make;
	this->colour = color;
	this->mileage = mileage;
}

Car::Car(const Car& car){
	this->year = car.year;
	this->make = car.make;
	this->colour = car.colour;
	this->mileage = 0;
}

void Car::setColor(string x){
	this->colour = x;
}

string Car::getColor(){
	return this->colour;
}

void Car::setMake(string x){
	this->make = x;
}

string Car::getMake(){
	return this->make;
}

void Car::move(){
	cout<< "A " << this->make << " drives" << endl;
}

