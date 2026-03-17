# Lab 4: Functions

The goal of Lab 4 is to solve problems by using a modular approach instead of writing the code in one file.
To be more clear, you should have header and implementation files for your solution.

## Problem 1: Quadratic Solver

Create 3 files:

* `Lab4p1.cpp`
  * Contains the `main` function.
* `xFactor.h`
  * Contains the function prototypes (declaration).
* `xFactor.cpp`
  * Contains the function body (implementation).

> [!WARNING]
> **You cannot use `<cmath>` library**

To approximate the square root of $n$, where $p$ is your guess,

$$
\large p = \frac{1}{2} (p + \frac{n}{p})
$$

then make sure that this $p$ is within your tolerance,

$$
\large tolerance \geq \frac{\lvert p - \frac{n}{p} \rvert}{\min(p, \frac{n}{p})}
$$

Use the above formula in addition to the quadratic formula to solve for the positive and negative `x` values,
then print them to console.

$$
\large x = \frac{-b + \sqrt{b^2 - 4ac}}{2ac}
$$

### Function Prototypes 1

```cpp
double sqrt(double n, double tol);
```

```cpp
double pos_x(int a, int b, int c, int tol);
```

```cpp
double neg_x(int a, int b, int c, int tol);
```

### Sample Output 1

```none
$ ./Lab4p1
Input quadratic coefficients (a, b, c): 1 8 12
Input tolerance: .0001
x = (-2, -6)
Again? (y/n) y
Input quadratic coefficients (a, b, c): 1 5 6
Input tolerance: .0001
x = (-2, -3)
Again? (y/n) y
Input quadratic coefficients (a, b, c): 4 10 6
Input tolerance: 0.0001
x = (-1, -1.5)
Again? (y/n) n
Program ends
```

### Optional Challenge 1

See if you can implement this for square root of a negative number.

## Problem 2: Counting Heads

Create 3 files:

* `Lab4p2.cpp`
  * Contains the `main` function.
* `countHeads.h`
  * Contains the function prototypes (declaration).
* `countHeads.cpp`
  * Contains the function body (implementation).

Given $n$ coin flips, the number of ways to get $k$ heads is:

$$
\large \binom{n}{k} = \frac{n!}{k!(n - k)!}
$$

where $n!$ is the factorial defined as $1 \times 2 \times 3 \times \ldots \times (n - 1) \times n$.

Write a function that takes in non-negative integers $n$ and $k$, where $n \geq k$. Use this function to
count the total number of ways to get at least $k$ heads out of $n$ coin flips.

> [!NOTE]
> **Make sure this works for large numbers**

### Function Prototypes 2

```cpp
int choose(int n, int k);
```

### Sample Output 2

```none
$ ./Lab4p2
How many coins would you like to flip? 5
How many heads do you want? 2
Flipping 5 coins, we can get 2 heads 10 ways.
Flip again? (y/n) y
How many coins would you like to flip? 4
How many heads do you want? 2
Flipping 4 coins, we can get 2 heads 6 ways.
Flip again? (y/n) y
How many coins would you like to flip? 1000
How many heads do you want? 999
Flipping 1000 coins, we can get 999 heads 1000 ways.
Flip again? (y/n) n
Program ends
```

## Problem 3: Split the Check

Create 3 files:

* `Lab4p3.cpp`
  * Contains the `main` function.
* `cashier.h`
  * Contains the function prototypes (declaration).
* `cashier.cpp`
  * Contains the function body (implementation).

You are writing a program for a waiter to collect the bill, then split the check among your friends

Function `tip` takes the total and tax percentage, then returns the total with the tax.

Function `tax` takes an item cost and asks what type of item it is.

If it is `l` (liquor), it should be taxed at 12%. If it is `f` (food), it should be taxed at 9%.

Finally, function `split` takes in the final bill (with tip and tax) and the number of people you are
splitting the check with, then return how much each person owes.

### Function Prototypes 3

```cpp
double tip(double total, double percent);
```

```cpp
double tax(double amount, char kind);
```

```cpp
double split(double total, int people);
```

### Sample Output 3

```none
$ ./Lab4p3
What is the amount? $13
Is it (f)ood or (l)iquor? l
Add more items? (y/n) y
What is the amount? $22
Is it (f)ood or (l)iquor? f
Add more items? (y/n) y
What is the amount? $8
Is it (f)ood or (l)iquor? l
Add more items? (y/n) y
What is the amount? $18
Is it (f)ood or (l)iquor? f
Add more items? (y/n) n
How many people are you splitting this with? 2
Your total will be $19.62 per person.
Program ends
```
