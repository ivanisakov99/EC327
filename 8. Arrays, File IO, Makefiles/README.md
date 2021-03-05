### <ins>Problem: Mode Computation</ins>
In this problem you need to implement several functions across several .h and .cpp files that reads in an array of integers from a file, finds the mode(s) of the array, and print out the results.

Already provided files to use / alter:
* ModeMain.cpp (already in the repo)
    * It defines the main() function and printModes(); make sure to look at this file to understand how your functions will be used!
* Makefile (sample already in the repo, but you WILL need to edit this to match the files used here!)
* Several sample input files: input_01.txt, input_02.txt, input_03.txt, input_04.txt (has test cases)

**How to Begin**

Four required files to fill out. Proceed in this order and test before you move on to the next functionality. Make sure to look carefully at the provided main function to understand how your variables are being used and any additional relationships between variables.
* readfile.h
    * Fill out function prototype for **readFiletoArray(<types and parameters>);** semicolon defines it 
* readfile.cpp
    * Implement the function **readFiletoArray(<types and parameters>)** no semicolon
* mode.h (function prototype: findModes())
    * Fill out function prototype for **findModes(<types and parameters>);** 
* mode.cpp (function implementation: findModes())
    * Implement the function **findModes(<types and parameters>)**

Description of functions:
* __void readFiletoArray(string filename, int* data);__
    * This function reads the data stored in file defined by string filename into an integer array, int data[]. You can assume that the main function initializes the data array with enough space to hold the given test data.
* **void findModes(int input[], int size, int& frequency, int result[], int& result_count);**
    * This function takes in the inputs, finds the mode(s) - there can be more than one mode - and stores the modes inside array result[], the number of modes as __result_count__, and the frequency of the modes in __frequency__

Your output with the provided test files should look like this:

    Input: 2, 3, 4, 4, 3, 1, 2, 1, 2, 3 
    Modes: 2, 3
    Frequency : 3

    Input: 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 
    Modes: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 
    Frequency : 1

    Input: 1, 3, 4, 9, 7, 8, 5, 0, 2, 3 
    Modes: 3
    Frequency : 2

    Input: 2, 3, 4, 4, 5, 1, 2, 1, 5, 3 
    Modes: 1, 2, 3, 4, 5 
    Frequency : 2

**Some assumptions you can make:**

Both data and result have enough space to store all the necessary data and mode results 

The input data from the .txt files are integers in the range from 0 to (# of data 
points) – 1
* (this assumption will make finding the mode significantly easier!!!)
* If you have 10 data points, the integers will be from 0-9. If you have 5 datapoints, 0-4.

**Some helping hints:**

* Pointers * declaration and dereferencing character;
* & gets the address of a character;
* pass by value vs pass by reference (which should you use to modify an input parameter?)

**Useful code:**

    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0}; double *p = balance;
    for(int i = 0; i < 5; i++)
    cout << *(p + i) << endl;
    
Output:

    1000 
    2
    3.4 
    17 
    50