#include "main.h"

/**
* print_sign - to print the sign of a number
* @n: the argument value it received
* Return: 1 and 0 depending on the conditions
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

