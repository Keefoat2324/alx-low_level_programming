#include "main.h"

/**
* main - to print lowercase alphabet
* and followed by new line
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
