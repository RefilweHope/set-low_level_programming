# set-low_level_programming

This repository contains low-level programming projects focused on C language fundamentals and compilation processes.

## Project Structure

### 0x00-hello_world
Introduction to C programming with focus on the compilation pipeline.

#### Tasks

**0-preprocessor** - Runs a C file through the preprocessor
- Input: C file specified in `$CFILE` environment variable
- Output: Preprocessed code saved to file `c`
- Command: `cpp` (C preprocessor)

**1-compiler** - Compiles C code without linking
- Input: C file specified in `$CFILE` environment variable
- Output: Object file with same name as C file but `.o` extension
- Command: `gcc -c`

**2-assembler** - Generates assembly code from C
- Input: C file specified in `$CFILE` environment variable
- Output: Assembly file with same name as C file but `.s` extension
- Command: `gcc -S`

**3-name** - Compiles and links to create executable
- Input: C file specified in `$CFILE` environment variable
- Output: Executable named `cisfun`
- Command: `gcc` with `-o` flag

**4-puts.c** - First C program using `puts` function
- Prints: "Programming is like building a multilingual puzzle"
- Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Returns: 0 on success

## Compilation Pipeline

The projects demonstrate the C compilation pipeline:
1. **Preprocessing** (`.c` → preprocessed file) - Handles includes, macros
2. **Compilation** (`.c` → `.o`) - Converts C to object code
3. **Assembly** (`.c` → `.s`) - Generates human-readable assembly
4. **Linking** (`.o` → executable) - Links object files into executable