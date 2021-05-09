#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account {
private:
	unsigned int id;
	string owner;
	int balance;
public: 
	// Q2a
	Account();

	// Q2b
	Account(int id, string owner, int balance);

	// Q2c
	unsigned int getId();
	void setId(unsigned int id);
	string getOwner();
	void setOwner(string owner);
	int getBalance();
	void setBalance(int balance);

	// Q2d
	bool enoughBalance(unsigned int x);

	// Q2e
	void withdraw(int x);
};


#endif
