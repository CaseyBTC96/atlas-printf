### _printf

Hello, welcome to our first group project, we're replicating the printf() fucntion from the C Standard Library.

### version 1.0

## Introduction to the project

Project _printf() - Produce output to stdout according to a format described below similar to the printf() function.

## Evironment
- Language: C
- Editor: VIM 8.1.2269
- Compiler: gcc 9.3.0
- Wall -Werror -Wextra -pedantic -std=gnu89
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Project specifitacation

- No allowed to use global variable
- No more than 5 functions per file
- All files end with a new line

<h3>Specifiers </h3>
Specifier characters at the end define the type and the interpretation of its corresponding argument:

| Specifier  | Output          |
|------------|-----------------|
| `c`        | character       |
| `s`        | string          |
| `d` or `i` | Signed integer  |
| `%`        | %               |


## Install
To install execute in terminal
git clone https://github.com/CaseyBTC96/atlas-printf

## Compilation

``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c``

## EXAMPLES ##
- _printf functions examples:

- _printf("Character:[%c]\n", 'H');
  + Output: char: [H]
- _printf("String:[%s]\n", "I am a string !");
  + Output: string: [I am a string !]
- _printf("decimal: [%d]\n", 10000);
  + Output: decimal: [10000]
- _printf("Percent: [%%]\n");
  + Output: Percent: [%%]

# Flowchart
![_printf  flowchart](https://github.com/CaseyBTC96/atlas-printf/assets/144287360/59781c6d-3176-4387-9d2e-ed8fac9a315b)
