#include "main.h"

/**
* print_last_digit - to compute an absolute value of an integer
* @x: the argument value it received
* Return: the last digit
*/

int print_last_digit(int x)
{
	int n;

	if (x < 0)
		x = -x;
	n = x % 10;
	_putchar(n + '0');
	_putchar('\n');
	return (n);
}

