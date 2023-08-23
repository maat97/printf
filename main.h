#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

/* Functions to print chars and strings */
int print_char(va_list types, char buffer[],
    int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
    int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
    int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
    int flags, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
    int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
    int flags, int width, int precision, int size);

/* Function to print string in reverse */
int print_reverse(va_list types, char buffer[],
    int flags, int width, int precision, int size);

/* Function to print a string in rot 13 */
int print_rot13string(va_list types, char buffer[],
    int flags, int width, int precision, int size);

/* Other utility functions and constants */
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

#endif /* MAIN_H */
