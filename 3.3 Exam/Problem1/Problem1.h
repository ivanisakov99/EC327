#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Rectangle {
private:
	unsigned int height;
	unsigned int width;
	int x_coordinate;
	int y_coordinate;
public: 
	// Q2a
	Rectangle();

	unsigned int getHeight();
	unsigned int getWidth();
	int getX();
	int getY();

	void setHeight(unsigned int h);
	void setWidth(unsigned int w);
	void setX(int x);
	void setY(int y);

	Rectangle(unsigned int h, unsigned int w, int x, int y);

	// Q2b
	int getPerimeter();
	int getArea();
	
	// Q2c
	bool checkOverlap(Rectangle &r2);

};


#endif
