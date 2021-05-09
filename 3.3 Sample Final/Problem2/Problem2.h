#ifndef Q3_H
#define Q3_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
	unsigned short year;
	unsigned int mileage;

public:
	unsigned short getYear() {return this->year;}
	void setYear(unsigned short year) {this->year = year;}
	unsigned int getMileage() {return this->mileage;}
	void setMileage(unsigned int mileage) {this->mileage = mileage;}

	virtual void move() = 0;
};

// Declare Car class
class Car: public Vehicle{
protected:
	string make;
	string colour;

public:
	Car(short year, string make, string colour, unsigned int mileage);
	Car(const Car& car);
	void setColor(string x);
	string getColor();
	void setMake(string x);
	string getMake();
	void move();
	friend ostream& operator<<(ostream& os, const Car& c) {
		os << c.year << " " << c.colour << " " << c.make << " " << c.mileage;
		return os;
	}
};
#endif
