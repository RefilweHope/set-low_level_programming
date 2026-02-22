#include <stdio.h>

/**
 * main - Print numbers 0-9 using putchar only, no char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');

	return (0);
}
