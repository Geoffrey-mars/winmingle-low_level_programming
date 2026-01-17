#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar (provided externally) */
int _putchar(char c);

/* Task 0: prints a string followed by a new line */
void _puts_recursion(char *s);

/* Task 1: prints a string in reverse */
void _print_rev_recursion(char *s);

/* Task 2: returns the length of a string */
int _strlen_recursion(char *s);

/* Task 3: returns factorial of a number */
int factorial(int n);

/* Task 4: returns x raised to the power y */
int _pow_recursion(int x, int y);

/* Task 5: returns the natural square root of a number */
int _sqrt_recursion(int n);

/* Task 6: returns 1 if n is prime, 0 otherwise */
int is_prime_number(int n);

/* Task 7: returns 1 if string is a palindrome, 0 otherwise */
int is_palindrome(char *s);

/* Task 8: compares two strings, returns 1 if identical (wildcard *), 0 otherwise */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */

