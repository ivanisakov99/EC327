### <ins>Problem 1: Functions, Arrays, Loops</ins>
Write a function *printEven* that given an array of integers, prints on the screen the elements of that array that are even, as follows:

    void printEven(int numbers[ ], int numsize);
    // Given an integer array of size numsize, this function prints the
    // elements of the array that are even, one per line

For example, if the following array was provided to the function: 
    
    int array[5] = {0,3,6,75,8};

Then *printEven(array, 5)* would print this on the terminal:

    0 
    6 
    8

### <ins>Problem 2: Arrays and Strings</ins>
Write a *nthWord* function that, given a c-string as an argument, returns the n-th word in that string as a new string. The prototype of *nthWord* is as follows:

    char* nthWord(char word[], int n);
    \\returns a pointer to a string containing the n-th word in the string word.

For example, if called as *nthWord(“This is a hard midterm”,5)*, the function will return a pointer to a new c-string containing *“midterm”*.

Note that this function should create a new c-string, it is not enough to return a pointer to a location inside the *word* string passed as an argument.

### <ins>Problem 3: File I/O</ins>
You are given a file *grades.txt* with the following format:

    John Doe EC327 A 
    Bruce Wayne EC327 C- 
    Dorothy Gale EC330 A+ 
    Kevin Mitnick EC521 B- 
    John Doe EC330 C+

Each line of the file contains the first name and the last name of a student, the class they took, and the grade they received.

Write a function *transcript* that given a student’s name creates a file *transcript.txt* containing all the classes that the student took and their respective grades. The prototype of *transcript* is as follows:

    int transcript(string first, string last);
    \\Given the first and last name of a student, extracts all the classes that the student took and lists them in a new file transcript.txt

Note that each execution of the function should create a new *transcript.txt* file. In other word if there was a *transcript.txt* already, the file should be overwritten. The format of the transcript file should be as follows:

    EC327 A 
    EC330 C+

The function *transcript* should return 0 if the student was found and a transcript was generated, and -1 otherwise. The file *transcript.txt* should **not** be created if the student is not found.

### <ins>Problem 4: Mathematical Functions, Recursions</ins>
The binomial coefficient *bin(n,k)* of two positive integers n and k can be defined recursively as:

    bin(n,0) = 1
    bin(n,n) = 1
    bin(n,k) = bin(n-1,k-1) + bin(n-1,k)

Write a recursive function *bin* that returns the binomial coefficient of two positive integers. The prototype of *bin* is:

    int bin(int n, int k);
    \\Returns the binomial coefficient of n and k

You don’t have to consider the case in which the function is given negative numbers.

### <ins>Problem 5: Convert to Binary</ins>
Write a function *toBin* that takes a string as input and returns a string containing the binary representation of the string. For example, for the string “hello”, *toBin(“hello”)* should return a pointer to a string containing “0110100001100101011011000110110001101111”. The prototype of toBin is as follows:

    char *toBin(string s);

