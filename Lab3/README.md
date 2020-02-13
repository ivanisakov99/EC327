# Lab 3: Ladder, Range, Divisible

## Problem 1: Ladder

Create a ladder out of `#` characters (hash)

Your code should ask user for input:

```none
How tall is your ladder?
```

* If input equals `0`, print:

    ```none
    The height can't be zero.
    ```

* If input is less than `0`, print:

    ```none
    Invalid input
    ```

    and exit the program.

* If input is greater than `0`, draw the ladder as shown below, then ask again:

    ```none
    How tall is your ladder?
    ```

### Sample Output 1

```none
How tall is your ladder? 0
The height can't be zero.
How tall is your ladder? 3
# #
###
# #
How tall is your ladder? 5
# #
###
# #
###
# #
How tall is your ladder? 4
# #
###
# #
###
How tall is your ladder? -1
Invalid input
```

### Optional Challenge 1

Ask the user how wide the ladder is, then make it that wide:

```none
How tall is your ladder? 3
How wide is your ladder? 5
#   #
#####
#   #
```

## Problem 2: Range

Ask the user to input 3 integers `start`, `stop`, and `step`.

* If `start` is less than `stop`, print all numbers in ascending order with `step` as the increment.
* Otherwise, if `start` is greater than `stop`, print all numbers in descending order with `step` as the increment.
* Otherwise, if `start` is equal to `stop`, print `Bye!` then exit the program.

### Sample Output 2

```none
Start = 1
Stop = 6
Step = 1
1, 2, 3, 4, 5, 6
Start = 1
Stop = 14
Step = 3
1, 4, 7, 10, 13
Start = 9
Stop = 0
Step = 3
9, 6, 3, 0
Start = 1
Stop = 1
Step = 1
Bye!
```

## Problem 3: Divisible

Ask the user to put in a positive integer. The program should print all factors of that number, then ask the user
again:

* If number is prime, print:

    ```none
    This number is prime!
    ```

* If number is negative, print:

    ```none
    I don't deal with negativity.
    ```

    and exit the program.

> [!NOTE]
> *Hint: Look up modulus operator*

### Sample Output 3

```none
What number to check? 1
Factors: 1
What number to check? 5
Factors: 1, 5
This number is prime!
What number would you like me to check? 100
Factors: 1, 2, 4, 5, 10, 20, 25, 50, 100
What number would you like me to check? -100
I don't deal with negativity.
```

### Optional Challenge 3

Can you write a program that asks the user for a positive integer `n`, then from `1` to `n` in steps of `1`:

* Prints `Foo` if a number is divisible by `3`.
* Prints `Bar` if divisible by `5`.
* Prints `FooBar` if divisible by both `5` and `3`.
* Prints that number if it is not divisible by either.

> [!IMPORTANT]
> *This is a very common interview question!*

```none
Enter a number: 16
1
2
Foo
4
Bar
Foo
7
8
Foo
10
11
Foo
13
14
FooBar
16
```
