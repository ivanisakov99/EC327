### <ins>Problem 1:</ins>
Consider a class *Account* representing a bank account (as declared in 
_Problem.h_).The class declares the following private members:
* _unsinged int id_, which contains the account id

* _string owner_, which contains the first and last name of the account owner

* _int balance_, which contains the dollar amount available in the account

1. Implement a default constructor that sets id and amount to 0, and owner to “X”

2. Implement a constructor _Account(int id, string owner, int balance)_ that sets the object members to the ones provided as parameter in the constructor

3. Implement getters and setters for all members as declared in _Problem1.h_

4. Implement a method _bool enoughBalance(unsigned int x)_ which returns true if there is enough balance in the account (that is, if balance is greater or equal than x) and false otherwise

5. Implement a method _void withdraw(int x)_ that decreases the account balance by the amount specified in x. If the account does not have enough balance, the method should throw a *bad_exception* exception

### <ins>Problem 2:</ins>
You are given an abstract class _Vehicle_, declared in _Problem2.h_ and implemented in _Problem2.cpp_. Vehicle declares the following members:
* _unsigned short year_, containing the year in which the vehicle was build

* _unsigned int mileage_, containing the miles that the vehicle traveled

It also implements getters and setters for year and mileage, and a pure virtual function _void move()_ that specifies how the vehicle moves.

Declare a class _Car_ that publicly inherits from _Vehicle_ (in _Problem2.h_). A _Car_ object should have the following additional members:
* a _string make_, containing the make of the car

* a _string colour_, containing the colour of the car

Implement the following methods for the class Car, declaring them in 
_Problem2.h_ and implementing them in _Problem2.cpp_:
1. appropriate setters and getters for color (_void setColour(string x)_, _string getColour()_) and make (_void setMake(string x)_, _string getMake()_)

2. a constructor _Car(short year, string make, string colour, unsigned int mileage)_ that sets the members of Car to the parameters passed to the function

3. a copy constructor that allows you to copy an object of _Car_ into another object, but that sets the _mileage_ of the new car to 0

4. an implementation of the _void move()_ method that prints out the _make_ of the car and the fact that cars drive. For example, if the make of an instance of _Car_ is Toyota, calling _move()_ should print on the screen:

    A Toyota drives

5. overload the output stream operator << so that when it is called on an instance of _Car_ it prints out the _year_, the _colour_, the _make_, and the _mileage_, so that _cout << c << endl;_ would print:

    1987 red Toyota 156793

### <ins>Problem 3:</ins>
Write a program that allows the user to compile a simple grocery list. A skeleton for the program is provided in _Problem3.cpp_. The user is asked to provide a new grocery item (as a string) until they enter _N_ when asked if they want to insert a new item. Implement the following functionalities:
1. Create a List of strings to store the items provided by the user

2. Every time a new item is provided, first check that an identical item does not already exist in the list. If it already exists, print out the following message:

    An item with that name is already included in the list!

If the item does not exist, add it to the list.

3. After the user is done inserting items, sort them in alphabetical order.

4. After the user selects that they don’t want to add any more items, write the list of items to a file named grocery_list.txt, one item per line.
