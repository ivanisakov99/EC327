#include "Person.h"
#include <iostream>
using namespace std;

int main(){
	//used for testing your code. Create 2 people, print their take home pays, 
	//determine if they are enemys or friends using the enemy_or_buddy function
	//then call their print_status() functions.

	Person P1 = Person(1000, 0.10, "Ivan");

	Person P2 = Person(100, 0.10, "Dasha");

	cout << P1.calc_takehome_pay() << endl;

	cout << P2.calc_takehome_pay() << endl;

	P1.enemy_or_buddy(&P2);

	P1.print_status();
	P2.print_status();

	return 0;
}