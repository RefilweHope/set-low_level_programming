0x05. C - Pointers, Arrays and Strings
Description
This project covers the fundamentals of pointers, arrays, and strings in C. It explores how pointers work, how to manipulate memory directly, and how strings are represented and processed in C.

Learning Objectives
By the end of this project, you should be able to explain:

What pointers are and how to use them
What arrays are and how to use them
The differences between pointers and arrays
How to use strings and how to manipulate them
The scope of variables
Requirements
Allowed editors: vi, vim, emacs
All files will be compiled on Ubuntu 20.04 LTS using gcc with flags: -Wall -Werror -Wextra -pedantic -std=gnu89
All files must end with a new line
No global variables allowed
Maximum 5 functions per file
No use of printf, puts, etc. (except where explicitly allowed)
Only _putchar is allowed for output
All function prototypes must be in main.h
Code must follow Betty style guidelines
Files
File	Description
main.h	Header file containing all function prototypes
0-reset_to_98.c	Function that updates the value pointed to by a pointer to 98
1-swap.c	Function that swaps the values of two integers
2-strlen.c	Function that returns the length of a string
3-puts.c	Function that prints a string followed by a new line
4-print_rev.c	Function that prints a string in reverse followed by a new line
5-rev_string.c	Function that reverses a string in place
6-puts2.c	Function that prints every other character of a string
7-puts_half.c	Function that prints the second half of a string
8-print_array.c	Function that prints n elements of an integer array
9-strcpy.c	Function that copies a string from src to dest

Export

Copy table
Compilation
Each file can be compiled using the following format:

plaintext

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <main_file.c> <task_file.c> -o <output>
Example:

plaintext

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
Author
Refilwe Hope Lekganyane
