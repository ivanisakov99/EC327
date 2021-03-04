### <ins>Problem 1: Overloading Functions</ins>
You are given a Problem1.h file with overloaded function prototypes for *isOrdered*. Implement this overloaded function into a file named Problem1.cpp.
Problem1.cpp should only include your function implementation, the necessary #include directives if needed, and should not contain anything else such as the 
main function or global variable declarations. Test your code using a separate main.cpp file where you implement a sufficient number of test cases.

*isOrdered* comes in two versions, one that takes a string as input and another one that takes an unsigned integer. In the string version, the function 
returns true if all characters in the string are ordered according to the ASCII character table (from lower to higher values), and false otherwise. In the 
integer case, the function returns true if the digits in the number are in increasing order, and false otherwise.

For example: “abcd” would return true, while “zcad” would return false. 12345 returns true, while 4631 returns false.

### <ins>Problem 2: Loops, functions</ins>
Write a function to calculate the least common multiple (lcm) of two positive integers. The function will
need to have the following prototype:
        
    int lcm(int x, int y);
    
Given two positive integers, it must return their lcm. Implement your lcm function in a file named Problem2.cpp. Include the lcm function only in this file 
(plus any #includes that the function might need, the appropriate namespace declaration etc.). The lcm function should not check for invalid values 
(e.g., negative numbers as input).

### <ins>Problem 3: Recursion</ins>
Write a recursive function *isPrime* to calculate if an unsigned integer is prime. A prime number is defined as a number that is only divisible by one and by 
itself.
Implement your *isPrime* function in a file named Problem3.cpp. Include the isPrime function only in this file (plus any #includes that the function might need, 
the appropriate namespace declaration etc.). The *isPrime* function should not check for invalid values (e.g., negative numbers as input)
