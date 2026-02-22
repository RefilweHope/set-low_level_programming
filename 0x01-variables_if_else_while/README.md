# Low-Level Programming in C

## 📖 Overview
This repository contains introductory projects in **C programming**, focusing on:
- The compilation process (preprocessor, compiler, assembler, linker).
- Basic input/output with `puts`, `printf`, and `putchar`.
- Control structures (`if`, `else`, `while`, `for`).
- Random number handling and conditional logic.
- Practicing Betty style guidelines for clean, readable code.

---

## 📂 Project Structure

### 0x00-hello_world
C basics and compilation workflow:
- `0-preprocessor` → runs a C file through the preprocessor.
- `1-compiler` → compiles without linking.
- `2-assembler` → generates assembly code.
- `3-name` → compiles and creates an executable named `cisfun`.
- `4-puts.c` → prints a string using `puts`.
- `5-printf.c` → prints a string using `printf`.
- `6-size.c` → prints sizes of data types.

### 0x01-variables_if_else_while
Control structures and output formatting:
- `0-positive_or_negative.c` → prints whether a random number is positive, zero, or negative.
- `1-last_digit.c` → prints the last digit of a random number with conditions.
- `2-print_alphabet.c` → prints lowercase alphabet.
- `3-print_alphabets.c` → prints lowercase then uppercase alphabet.
- `4-print_alphabt.c` → prints lowercase alphabet excluding `q` and `e`.
- `5-print_numbers.c` → prints digits 0–9.
- `6-print_numberz.c` → prints digits 0–9 using only `putchar`.
- `7-print_tebahpla.c` → prints lowercase alphabet in reverse.
- `8-print_base16.c` → prints hexadecimal digits (0–9, a–f).
- `9-print_comb.c` → prints all possible single-digit combinations separated by commas.

---

## ⚙️ Compilation
All programs should be compiled with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output
