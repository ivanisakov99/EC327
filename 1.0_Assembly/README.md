# Homework 1: Assembly

## How to initialize your code

For each question, store a value in each memory cell that will be used as input. For example, to store `6`
in cell `25` as requested by `Q1` you could use the following assembly code:

```asm
mov R1, 25    ; R1 contains 25
mov R2, 3     ; R2 contains 3
mov [R1], R2  ; Store the content of R2 at the address stored in R1 - after this instruction, memory cell 25 contains 3
```

## Question 1

Write code that multiplies the content of memory cell `25` by `6` and stores it to memory cell 10. That is,
if memory cell `25` initially contains `3`, after your code executes cell `10` should contain `18`.

## Question 2

Write code that computes `(a * b) + c`, where `a`, `b`, `c` are the values in memory locations `1`, `2`, and `3`,
respectively. The result should be stored in memory location `4`.

## Question 3

Put `0` in memory cell `1` and `1` in memory cell `2`, then write code such that starting from memory cell `3`
until memory cell `8` each cell contains the sum of the two previous memory cells (i.e., the Fibonacci number),
similar to what is shown in the following table:

| Mem. Cell | Value |
|:---------:|:-----:|
|     1     |   0   |
|     2     |   1   |
|     3     |   1   |
|     4     |   2   |
|     5     |   3   |
|    ...    |       |
|     8     |   ?   |

> [!NOTE]
> Note that your code should compute the sum at each step (i.e., you should not hard-code number 2, 3, etc.).

## Question 4

Write code that calculates the integer division between the value of memory cell `3` and the value of
memory cell `4`, and stores it in memory cell `12`.

For example, if memory cell `3` initially contains `23` and memory cell `4` contains `4`, after running
your code memory cell `12` should contain `5`.

If the divisor is set to `0`, the program should halt before copying the result in memory cell `12`.
