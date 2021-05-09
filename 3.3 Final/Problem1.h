#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <exception>
#include <iostream>

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

Rectangle::Rectangle(){
    height = 0;
    width = 0;
    x_coordinate = 0;
    y_coordinate = 0;
}

unsigned int Rectangle::getHeight(){
    return height;
}

unsigned int Rectangle::getWidth(){
    return width;
}

int Rectangle::getX(){
    return x_coordinate;
}

int Rectangle::getY(){
    return y_coordinate;
}

void Rectangle::setHeight(unsigned int h){
    this->height = h;
}

void Rectangle::setWidth(unsigned int w){
    this->width = w;
}

void Rectangle::setX(int x){
    this->x_coordinate = x;
}

void Rectangle::setY(int y){
    this->y_coordinate = y;
}

Rectangle::Rectangle(unsigned int h, unsigned int w, int x, int y){
    height = h;
    width = w;
    x_coordinate = x;
    y_coordinate = y;
}

int Rectangle::getArea(){
    return width * height;
}

int Rectangle::getPerimeter(){
    return width + height;
}

bool Rectangle::checkOverlap(Rectangle& r2){
    if(r2.getX() >= x_coordinate && r2.getX() <= x_coordinate + width && r2.getY() >= y_coordinate && r2.getY() <= y_coordinate + height){
        cout << "Rectangles r1 and r2 overlap" << endl;
        return true;
    }else{
        cout << "No overlap between r1 and r2" << endl;
        return false;
    }
}

#endif
