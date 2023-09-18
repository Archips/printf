# Project Description

The "ft_printf" project is a custom implementation of `printf()` function in C to handle various conversion specifiers and variable arguments. The objective is to replicate the functionality of the standard `printf()`.
## Project Highlight

- Custom implementation of `printf()` in C.
- Support the following conversion:  
    `%c` prints a single character   
    `%s` prints a string  
    `%p` prints a void * pointer in hexadecimal format   
    `%d` prints a decimal (base 10) number  
    `%i` prints an integer in base 10  
    `%u` prints an unsigned decimal (base 10) number  
    `%x` prints a number in hexadecimal (base 16) lowercase format  
    `%X` prints a number in hexadecimal (base 16) uppercase format  
    `%%` prints a percent sign   
- Memory management with no memory leaks.
- Makefile for easy compilation and project management.

## Usage

1. Clone the repository.
2. Compile the library using the provided Makefile.
3. Include the `ft_printf.h` header in your C projects.
4. Use the `libftprintf.a` library in your projects.
5. Use this command to test it with a test main.c `gcc -Wall -Wextra -Werror main.c -L. -lftprintf` 

## Author

[Archibald Thirion](https://github.com/Archips)
