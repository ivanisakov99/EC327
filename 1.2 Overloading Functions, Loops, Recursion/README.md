# Homework 3: Overloading Functions, Loops, Recursion

## Question 1: Overloading Functions

You are given a `Q1.h` file with overloaded function prototypes for `isOrdered`. Implement this overloaded
function into a file named `Q1.cpp`.

`Problem1.cpp` should only include your function implementation, the necessary `#include` directives if needed,
and should not contain anything else such as the `main` function or global variable declarations. Test your code
using a separate `main.cpp` file where you implement a sufficient number of test cases.

`isOrdered` comes in two versions, one that takes a _string_ as input and another one that takes an
_unsigned integer_. In the string version, the function returns `true` if all characters in the string are
ordered according to the ASCII character table (from lower to higher values), and `false` otherwise. In the
integer case, the function returns `true` if the digits in the number are in increasing order, and `false`
otherwise.

For example: `abcd` would return `true`, while `zcad` would return `false`. `12345` returns `true`, while `4631`
returns `false`.

## Question 2: Loops, functions

Write a function to calculate the Least Common Multiple (LCM) of two positive integers. The function will need to
have the following prototype:

```cpp
int lcm(int x, int y);
```

Given two positive integers, it must return their LCM. Implement your `lcm` function in a file named `Q2.cpp`.
Include the `lcm` function only in this file (plus any `#includes` that the function might need, the appropriate
namespace declaration etc.). The `lcm` function should not check for invalid values (e.g., negative numbers as input).

## Question 3: Recursion

Write a recursive function `isPrime` to calculate if an unsigned integer is prime. A prime number is defined as a
number that is only divisible by one and by itself.

Implement your `isPrime` function in a file named `Q3.cpp`. Include the `isPrime` function only in this file
(plus any `#includes` that the function might need, the appropriate namespace declaration etc.). The `isPrime`
function should not check for invalid values (e.g., negative numbers as input).
