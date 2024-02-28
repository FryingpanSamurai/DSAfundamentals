***This study uses reference: ISBN: 9780273793243***
*- Introduction to Programming & C++ by Y. Daniel Liang*

# General Notes

## Assembly Language
Assembly language is low-level programming language which needs to be
translated to machine code using an assembler. It is close to machine code
and is machine dependent.

## High-Level Languages
Source code is the result of code written in a high-level language.
CPU cannot run source code. It must be translated before it can be run.
This translation to machine code is done using an interpreter or compiler.

## Interpreter vs Compiler
Interpreters translates and executes a program one statement at a time.
Compilers translate the entire source program into a machine-language file for execution.

## C++ History
C++ is an extension of C, developed by Bjarne Stroustrup.
Java is modeled after C++ and C# is also a subset of C++.

## C++ Reserved Words/Keywords
- using
- namespace
- int
- return

## C++ Special Characters
- #: used in preprocessor directives
- <>: encloses a library name when used with #include
- (): used with functions
- {}: denotes block to enclose statements or for arrays
- //: single line comment
- /**/: block level comment
- <<: stream insertion operator outputs to console (cout, cerr)
- " ": wraps a string
- ;: statement terminator marks end of statement or block

## C++ Numeric Types
- short: -2^15 -> 2^15-1 | 16-bit signed
- unsigned short: 0 -> 2^16-1 | 16-bit unsigned
- int signed: -2^31 -> 2^31-1 | 32-bit
- unsigned: 0 -> 2^32-1 | 32-bit unsigned
- long: -2^31 -> 2^31-1 | 32-bit signed
- unsigned long: 0 -> 2^32-1 | 32-bit unsigned
- float: -3.4028235e^38 -> -1.4e^-45, 1.4e^-45 -> 3.4028235e^38
- double: -1.7976931348623157e^308 -> -4.9e^-324, 4.9e^-324 -> 1.7976931348623157e^308
- long double: -1.18e^4932 -> -3.37e^-4932, 3.37e^-4932 -> 1.18e^4932
#### int
- short, int, long: both signed and unsigned
#### floating point
- float, double, long double
- double is double precision compared to float
- long double is even more precise
#### CONSTANTS
- INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX
- found in <limits> header file

## C++ Compiler Tasks
- performs three tasks in sequence: preprocessor, compiler, linker
### Preprocessor
- program that processes a source file, processes directives
- directives start with the # sign
- produces an intermediate file
### Compiler
- translates the intermediate file into machine code
- machine code file known as object file
### Linker
- Links machine code file with the supporting library files to form an executable
- machine code file saved as .obj, executable as .exe
- UNIX machine code file saved as .o, executable do not have file extensions

## Errors
### Syntax
Errors caught by the compiler.
### Runtime
Error that will terminate the program if encountered an impossible task.
IE User input for an erroneous variable type.
IE File not found at a path.
### Logic
Error that is not easily caught, but rather an erroneous output