# 0x0A. C - argc, argv

## Description
This project explores the use of `argc` and `argv` in C programs — the mechanism
that allows programs to receive and handle command-line arguments passed at runtime.

## Learning Objectives
- What are two prototypes of `main` and when to use them
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables/parameters
- How to use command-line arguments in C programs

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- No global variables
- Maximum 5 functions per file
- No use of `printf`, `puts`, etc. — only `_putchar`
- All function prototypes are in `main.h`
- Code follows Betty style

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all prototypes |
| `0-whatsmyname.c` | Prints the name of the program |
| `1-args.c` | Prints the number of arguments passed to the program |
| `2-args.c` | Prints all arguments received by the program |
| `3-mul.c` | Multiplies two numbers passed as arguments |
| `4-add.c` | Adds positive numbers passed as arguments |

## Usage
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
./nargs hello world

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
./args You can do anything

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
./mul 12 3

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
./add 1 10 100 1000
```

## Author
- **RefilweHope** - [GitHub Profile](https://github.com/RefilweHope)
