# Lab 6: Debugging

1. Open the `number_operations.cpp` file and read the descriptions of each function - they tell you what the
  functions are supposed to do.
2. Use GDB and commands we just went over to find and fix each of the bugs.
  [Cheatsheet](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf) is your friend. This assignment may require
  extensive search on the web, feel free to play with GDB in simple programs.
3. Add comments on each line where you found a bug and how you fixed it. What GDB commands did you use to find it?
4. Compile `malloc.cpp` with the following command:
    1. `g++ -std=c++11 malloc.cpp -o malloc`
5. In the `malloc.cpp`, look at the functions and try to find the problem.
    1. Add comments to the lines where you find problems in `malloc.cpp`.
    2. Is there any other tool that we can use for debugging? If there is, explain the tool briefly and write
      the command that you used.
