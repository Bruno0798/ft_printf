<h1 align="center">
	ft_printf
</h1>

<p align="center">
	:information_source: Because ft_putnbr() and ft_putstr() aren’t enough
</p>
<p align="center"><a href="https://www.42porto.com" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=Porto&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://github.com/Bruno0798/Bruno0798/blob/main/42-project-badges/badges/ft_printfn.png?raw=true"> </p>
<p align="center"> <strong>100/100</strong> ✅ </p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/bruno0798/42_libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/bruno0798/42_libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/bruno0798/42_libft?color=brightgreen" />
</p>

---

## 🗣️ About

This project consists of a static library that contains ft_printf - a function that mimics the real printf.<br>
This functionality proves particularly advantageous when comparing it to its predecessor at 42, the system call write.<br>
One of the significant advantages of ft_printf is its adaptability and reusability. It can be seamlessly integrated into future projects, streamlining the process of formatting and outputting data.<br>

> ⚠️ **Warning**: Don't copy/paste code you don't understand: it's bad for you, and for the school.


## How does libft work?

<p align="center"> ✨ For this project we were introduced to the concept of variadic functions ✨ </p>

The functionality of ft_printf is based on the concept of variadic functions, which allows it to handle a variable number of arguments. This project involves creating a function that emulates the behavior of the widely-used printf function in the C language.
    
In essence, ft_printf takes a string as its primary argument, and this string can contain placeholders, such as %c for characters or %s for strings. The actual values to be substituted into these placeholders are passed as additional arguments to the function. The function's return value is the number of characters printed, or -1 in the case of an error.

To implement a function like this, it needs to be variadic, meaning it accepts a variable number of arguments. This is achieved through the use of the <stdarg.h> header and specific parameters like va_arg to access the arguments in order, va_start to begin using the argument list, and va_end to conclude it.

For each type of conversion specified in the project requirements, there's a corresponding function within ft_printf that converts the argument and returns the number of bytes written:
    
• <a href="src/ft_print_char.c">%c</a> print a single character.
    
• <a href="src/ft_print_string.c">%s </a>print a string of characters.
    
• <a href="src/ft_print_pointer.c">%p </a>The void * pointer argument is printed in hexadecimal.
    
• <a href="src/ft_print_decimal.c">%d </a>print a decimal (base 10) number.
    
• <a href="src/ft_print_decimal.c">%i </a>print an integer in base 10.
    
• <a href="src/ft_print_unsigned_decimal.c">%u </a>print an unsigned decimal (base 10) number.
    
• <a href="src/ft_print_hexadecimal.c">%x </a>print a number in hexadecimal (base 16).
    
• <a href="">%% </a>print a percent sign.

## NORMINETTE
At 42 School, aligning to the [42 Norms](en_norm.pdf), the school's coding standard, is a fundamental expectation for all projects.
