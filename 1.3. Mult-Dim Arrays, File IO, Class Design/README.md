# Homework 4: Multi Dimensional Arrays, File I/O, Class Design

## Problem 1: Multi Dimensional Arrays

Given a $N{\times}N$ matrix of floats, write a function `getNorm` that returns its Frobenius norm, defined as:

$$
\large \left\lVert A \right\rVert_F \equiv \sqrt{\sum_{i=1}^{m} \sum_{j=1}^{n} {\lvert a_{ij} \rvert}^2}
$$

The prototype of `getNorm` should be:

```cpp
float getNorm(float **matrix, int N);
```

## Problem 2: File I/O

You are given a file `weather.txt` formatted as follows:

```none
2/28/2019 Boston 27 Snow
2/28/2019 Miami 72 Sun
3/1/2019 London 62 Rain
3/2/2019 Boston 34 Clouds
```

Where the first element is the data a certain temperature was recorded, the second element is the city in which the
temperature was recorded, the third one is the temperature, and the fourth one is the weather for that day
(Snow, Sun, Rain, Clouds).

Write a function `weatherProbability` with the following prototype:

```cpp
float weatherProbability(string city, string weather);
```

The function should take as input a city and a weather type (Snow, Sun, Rain, Clouds), read the file `weather.txt`,
and output the probability of a certain weather to occur in a certain city given the data from the file.

For example, when invoked with:

```cpp
weatherProbability("Boston", "Snow");
```

The function will return `0.5`. If the specified is not in the text file, have the function return `-1`. If the city
is in the file, but the weather is not, return `0`.

## Problem 3: Class Design

Design a class named `Student` that contains:

* A string data field named `first`, which holds the student's first name.
* A string data field named `last`, which holds the student's last name.
* An unsigned integer data field `id`, which holds the student's ID.
* A float `gpa`, which holds the student's GPA.

`first`, `last`, and `id` should be declared as public members, while `gpa` should be made **private**.

* A no argument constructor, which sets "Jane" as `first`, "Doe" as `last`, 0 as `id`, and 0.0 as `gpa`.
* A constructor that takes four arguments and assigns their values to `first`, `last`, `id`, and `gpa` respectively.
  The prototype of this constructor should be:

```cpp
Student(string f, string l, int i, float g);
```

* Get and set functions to handle the private data field `gpa`, as follows:

```cpp
void setGpa(float g); // Assigns the value g to gpa

float getGpa(); // Returns the gpa
```

* A function display with the following prototype:

```cpp
void display();
```

When executed, display should print the student's first name, last name, ID, and GPA on a single line separated by
a single space, as follows:

```none
John Doe 3921093129 3.5
```

Separate the class declaration and implementation into `Student.h` and `Student.cpp`. You can use
`#ifndef`/`#define`/`#endif` to prevent multiple class declarations.
