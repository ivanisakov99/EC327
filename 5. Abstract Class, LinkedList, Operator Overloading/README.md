### <ins>Problem 1: Abstract Class</ins>
Create an abstract class *AbstractList*, declaring the following protected members:
* An *unsigned integer numElements* that represents the number of nodes currently contained in the List

* A pointer to _Node< T > *head_, which should point to the first element in the list. For example, if a list of integers contains the following values: <0, 1, 2, 3, 4>, then *head* should point to the instance of Node containing 0.

The class should also declare the following public methods:
* A default constructor that sets *numElements* as 0 and *head* pointing to NULL

* A destructor that iterates through all the Nodes in the list and deletes them

* A pure virtual method *void append(T x)*

* A pure virtual method *T remove()*

* A method *bool isEmpty()* that returns true if the list is empty and false otherwise. 
You have to implement this method in the class List

### <ins>Problem 2: LinkedList Implementation</ins>
Declare a class *List* that inherits from *AbstractList* publicly.

The class should implement the pure virtual methods inherited from List as follows:
* *append* should create a new node containing the object of type T passed as a parameter,and add this node as the new head of the list. For example, if a List of integers contains the following values: <0, 1, 2, 3, 4> and we invoke *append(5)*, the resulting list should contain nodes with values <5, 0, 1, 2, 3, 4>.

* *remove* should remove the node pointed to by head, return its value, and update the head pointer to point to the previous element. For example, if a List of integers contains the following values: <0, 1, 2, 3, 4>, after invoking *remove()* the List will contain <1, 2, 3, 4> and head will point to the Node containing 1.

The class should also implement the following methods:
* A method *void append_tail(T x)* that instantiates a node containing x and adds it to the tail of the List. For example, if a List of integers contains the following values: <0, 1, 2, 3, 4>, after invoking *append_tail(5)* the List will contain <0, 1, 2, 3, 4, 5>.

* A method *void insert(T x, int pos)* that inserts a Node containing x at position pos in the List. For example, if a List of integers contains the following values: <0, 1, 2, 3, 4>, after invoking *insert(5, 2)* the List will contain <0, 1, 5, 2, 3, 4>. Note that the indexes in the List start with 0. If pos is invalid, the function should not add anything.

* A method *T remove_at(int pos)* that deletes the Node at position pos and returns its value. For example, if a List of integers contains the following values: <0, 1, 2, 3, 4>, after invoking *remove_at(2)* the List will contain <0, 1, 3, 4>. Note that the indexes in the List start with 0. If pos is invalid, the function should not do anything.

### <ins>Problem 3: Operator Overloading</ins>

Overload the following operators for the List class:
* The subscript [] operator – once overloaded, invoking *l[x]* (where *l* is an instance of List) should return the value of the node at index x. For example, if a List *l* of integers contains the following values: <0, 1, 2, 3, 4>, *l[3]* should return 3.

* The output stream << operator – once overloaded, invoking *cout << l* (where *l* is an instance of List) should print out all elements in *l* separated by a space. For example, if a List *l* of integers contains the following values: <0, 1, 2, 3, 4>,
invoking *cout << l* would print the following:

    0 1 2 3 4

If the list is empty, the function should return *“The list is empty”*. You can assume that any object contained in the List overloads the << operator, and do not have to check for errors or exceptions.



### <ins>Problem 4: Extra Credit</ins>
Declare a *void sort()* method in List that sorts the elements in the list in ascending order. For example, if a List *l* of integers contains the following values: <3, 2, 4, 0, 1>, after invoking *sort()* the List will contain <0, 1, 2, 3, 4>. You can assume that any object contained in the List overloads the comparison operators (<, >, <=, >=, ==, !=) and do not have to check for errors or exceptions. You can use a sorting algorithm of your choice.
