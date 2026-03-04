# 0x04 - More Functions, Nested Loops

## Description

This project focuses on practicing functions and nested loops in C.  
It builds on previous concepts such as conditionals, loops, and using `_putchar`.

The goal is to strengthen understanding of:
- Character evaluation
- Loop control
- Nested loops
- Printing patterns
- Basic arithmetic functions

All programs are written in C and compiled using:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

---

## Files and Functions

| File | Description |
|------|-------------|
| `0-isupper.c` | Checks if a character is uppercase |
| `1-isdigit.c` | Checks if a character is a digit (0–9) |
| `2-mul.c` | Multiplies two integers |
| `3-print_numbers.c` | Prints numbers 0–9 |
| `4-print_most_numbers.c` | Prints numbers 0–9 except 2 and 4 |
| `5-more_numbers.c` | Prints numbers 0–14 ten times |
| `6-print_line.c` | Draws a straight line using `_` |
| `7-print_diagonal.c` | Draws a diagonal line using `\` |
| `8-print_square.c` | Prints a square using `#` |
| `9-fizz_buzz.c` | Prints numbers 1–100 with FizzBuzz rules |
| `10-print_triangle.c` | Prints a triangle using `#` |

---

## Function Prototypes

```c
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
```

---

## FizzBuzz Rules

- Multiples of 3 → `Fizz`
- Multiples of 5 → `Buzz`
- Multiples of both 3 and 5 → `FizzBuzz`
- All other numbers → print the number

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files end with a new line
- Code follows Betty style
- No global variables
- Maximum of 5 functions per file
- Only `_putchar` allowed for output (except FizzBuzz)

---

## Author
RefilweHope
Low-level programming practice project.
