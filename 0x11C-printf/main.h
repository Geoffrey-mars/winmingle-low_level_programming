#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Core _printf */
int _printf(const char *format, ...);

/* Helpers */
int print_char(char c);
int print_string(char *s);
int print_number(long n);
int print_base(unsigned long n, int base, int uppercase);
int print_reverse(char *s);
int print_rot13(char *s);
int print_binary(unsigned int n); /* Task 9 */

/* Utility */
int string_length(char *s);

#endif /* MAIN_H */

