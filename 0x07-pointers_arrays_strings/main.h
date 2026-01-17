#ifndef MAIN_H
#define MAIN_H

/* Task 0 - memory set */
char *_memset(char *s, char b, unsigned int n);

/* Task 1 - memory copy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Task 2 - locate character in string */
char *_strchr(char *s, char c);

/* Task 3 - length of prefix substring matching accept */
unsigned int _strspn(char *s, char *accept);

/* Task 4 - first occurrence in s of any bytes in accept */
char *_strpbrk(char *s, char *accept);

/* Task 5 - locate substring */
char *_strstr(char *haystack, char *needle);

/* Task 6 - print chessboard */
void print_chessboard(char (*a)[8]);

/* Task 7 - print sums of diagonals */
void print_diagsums(int *a, int size);

/* Task 8 - set value of pointer to a char */
void set_string(char **s, char *to);

/* Provided putchar function */
int _putchar(char c);

#endif /* MAIN_H */
