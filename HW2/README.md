### <ins>Problem 1: Fibonacci Sequence</ins>
Write a C++ program (Q1.cpp) that takes a positive integer N as input from the command line and prints on the screen the first N numbers in the
Fibonacci sequence, one per line. The program should check whether the provided input is a number and terminate with an error if is not. See the 
following sample runs for examples of the output that you need to provide.

*ext in < > in the examples demonstrates the user inputs entered via the keyboard. The actual user inputs should not contain < or > signs.*

    Sample run 1:
    Enter the length of the sequence: <6> 
    0
    1
    1
    2 
    3 
    5
    
    Sample run 2:
    Enter the length of the sequence: <0>
    
    Sample run 3:
    Enter the length of the sequence: <x> 
    Error! You did not provide a number.
    

### <ins>Problem 2: Simple Calculator</ins>
Write a C++ program (Q2.cpp) that takes simple, one operand arithmetic operations from the command line and calculates the result. The program should 
accept signed integers as operands, and support the *, /, +, - operators. When provided to the command line, operands and operators should be separated 
by a space, in the following way:

    3 + 5
    
For the division operator, you should treat it as a floating point division (with decimals). You should consider the error conditions listed in the sample 
runs below, and terminate the program if such a condition occurs.

**Text in < > in the examples demonstrates the user inputs entered via the keyboard. The actual user inputs should not contain < or > signs.**

    Sample run 1:
    Enter an expression to evaluate: <3 + 5> 
    Result: 8

    Sample run 2:
    Enter an expression to evaluate: <3 / 0> 
    Error! You can’t divide a number by 0!

    Sample run 3:
    Enter an expression to evaluate: <3 % 0> 
    Error! ‘%’ is not a supported operator.
    
    Sample run 4:
    Enter an expression to evaluate: <3 + b>
    Error! You did not provide two numerals as operands.
    

### <ins>Problem 3: Guessing Game</ins>
Write a C++ program that generates a random positive integer, and asks the user to guess it by providing it on the command line. The program should not 
terminate until the users guesses the correct number. See the following test cases for examples of how the program should behave.

    Sample run 1:
    Please guess the number: <4>
    Sorry, your guess is incorrect
    
    Please guess the number: <y> 
    Error! You didn’t insert a number!
    
    Please guess the number: <4569> 
    Congratulations, your guess is correct!

