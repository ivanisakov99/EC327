### <ins>Problem 1: Circle Area and Circumference</ins>
<ins>Implement the following functions:</ins>

    void area_and_circ(float* area, float* circumference, float* array)

This function takes as input the array of radii and returns an array of areas and an array of circumferences of circles with the input radii. Think about why we need to pass pointers for both the area and the circumference variables.

    bool contains_a_negative_radii(float* array)

This function takes as input the array of radii and returns true if the input array contains one or more negative values and false otherwise.

The main function should read the 3 floating-point numbers (3 radii) from the user and store it in an array, and then call the contains_a_negative_radii function. If the function returns false, call area_and_circ function. Then print the calculated area and circumference for each circle. The program should only terminate if one or more of the input radii are negative (while loop!).

    Sample Output:
    Enter three radii:
    1 2 3
    Circle 1 Area = 3.14159 
    Circle 1 Circumference = 6.28319
    Circle 2 Area = 12.56637 
    Circle 2 Circumference = 12.56637
    Circle 3 Area = 28.27433 
    Circle 3 Circumference = 18.84956
    
    Enter three radii:
    1 -2 3
    Contains a negative radius. Bye Bye!

### <ins>Problem 2: Person Class</ins>

Your job is to edit the provided Person.cpp file to create the person constructor (follow the hints in the comments and Person.h file), as well as implement its 3 member functions:

    int calc_takehome_pay()

Calculates the post-tax income. takehome_pay = income - tax_rate * income

    void enemy_or_buddy(Person* P1)

Determines if P1 is an enemy or friend. If the Person makes the same or more than P1, P1 is a friend. Else if the Person makes less than P1, P1 is an enemy. Sets P1 to be the persons enemy or buddy based on this calculation.

    void print_status()

Prints out the Person’s enemy’s and buddy’s name if it has one, otherwise print “No buddy!” or “No enemy”

You should use the following constructor prototype:

    Person(int income, double tax_rate, string name);

Your main function in P2.cpp should create 2 People and run the enemy_or_buddy function. Then print out each Person’s after-tax income as well as call each Person’s print_status function.
