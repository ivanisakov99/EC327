#include <exception>

#include "Problem1.h"

using namespace std;

// Q2a
Account::Account() {
	this->id = 0;
	this->balance = 0;
	this->owner = "X";
	return;
}


// Q2b
Account::Account(int id, string owner, int balance) {
	this->id = id;
	this->owner = owner;
	this->balance = balance;
	return;
}


// Q2c
unsigned int Account::getId() {
	if (this->id != 0){
		return this->id;	
	}
	return 0;
}

void Account::setId(unsigned int id) {
	this->id = id;
	return;
}

string Account::getOwner() {
	if (this->owner != ""){
		return this->owner;	
	}
	return "";
}

void Account::setOwner(string owner) {
	this->owner = owner;
	return;
}

int Account::getBalance() {
	if(this->balance!=0){	
		return this->balance;
	}
	return 0;
}

void Account::setBalance(int balance) {
	this->balance = balance;
	return;
}


// Q2d
bool Account::enoughBalance(unsigned int x) {
	if(this->balance >= x){return true;}
	else{return false;}
	return 0;
}


// Q2e
void Account::withdraw(int x) {
	if (this->enoughBalance(x)){
		this->balance = this->balance - x;	
	}
	else{throw bad_exception();}
	return;
}
