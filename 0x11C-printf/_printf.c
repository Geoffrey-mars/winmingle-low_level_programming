#include "main.h"

/**
 * _printf - custom printf function supporting Tasks 0-14
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{

    va_list args;

  /* ===== Declaring all variables at the top of the code blocks (C90 safe) ===== */
    int i = 0, count = 0;
    char *str;
    char ch;
    long num;
    unsigned long un;
    unsigned int bin;
    
    if (!format)
        return -1;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] != '%')
        {
            count += print_char(format[i]);
            i++;
            continue;
        }

        i++; /* Skip % */

        if(!format[i])
        {
                break;
                
        }


        /* Handle specifiers */
        if (format[i] == 'c') /* Character */
        {
            ch = va_arg(args, int);
            count += print_char(ch);
        }
        else if (format[i] == 's') /* String */
        {
            str = va_arg(args, char *);
            if (!str)
                str = "(null)";
            count += print_string(str);
        }
        else if (format[i] == 'd' || format[i] == 'i') /* Signed integer */
        {
            num = va_arg(args, int);
            count += print_number(num);
        }
        else if (format[i] == 'u') /* Unsigned integer */
        {
            un = va_arg(args, unsigned int);
            count += print_base(un, 10, 1);
        }
        else if (format[i] == 'o') /* Octal */
        {
            un = va_arg(args, unsigned int);
            count += print_base(un, 8, 1);
        }
        else if (format[i] == 'x') /* Hex lowercase */
        {
            un = va_arg(args, unsigned int);
            count += print_base(un, 16, 0);
        }
        else if (format[i] == 'X') /* Hex uppercase */
        {
            un = va_arg(args, unsigned int);
            count += print_base(un, 16, 1);
        }
        else if (format[i] == 'p') /* Pointer/address */
        {
            un = (unsigned long) va_arg(args, void *);
            count += print_string("0x");
            count += print_base(un, 16, 0);
        }
        else if (format[i] == '%') /* Percent */
        {
            count += print_char('%');
        }
        else if (format[i] == 'r') /* Reverse string */
        {
            str = va_arg(args, char *);
            if (!str)
                str = "(null)";
            count += print_reverse(str);
        }
        else if (format[i] == 'R') /* ROT13 */
        {
            str = va_arg(args, char *);
            if (!str)
                str = "(null)";
            count += print_rot13(str);
        }
        else if (format[i] == 'b') /* Binary */
        {
            bin = va_arg(args, unsigned int);
            count += print_binary(bin);
        }
        else /* Unknown specifier */
        {
            count += print_char('%');
            count += print_char(format[i]);
        }

        i++;
    }

    va_end(args);
    return count;
}

