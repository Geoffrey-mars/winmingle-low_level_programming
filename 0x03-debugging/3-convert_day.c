#include "main.h"

/**
 * convert_day - converts day of month to day of year
 * @month: month in number
 * @day: day of month
 *
 * Return: day of the year
 */
int convert_day(int month, int day)
{
    int i;
    int month_days[] = {
        31, /* January */
        28, /* February */
        31, /* March */
        30, /* April */
        31, /* May */
        30, /* June */
        31, /* July */
        31, /* August */
        30, /* September */
        31, /* October */
        30, /* November */
        31  /* December */
    };

    for (i = 0; i < month - 1; i++)
        day += month_days[i];

    return (day);
}

