#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *                      but does not print 2 and 4
 *
 * Description: only uses _putchar twice
 */
void print_most_numbers(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
    {
        if (c == '2' || c == '4')
            continue;
        _putchar(c);
    }
    _putchar('\n');
}
