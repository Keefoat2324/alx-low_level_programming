#include "main.h"

/**
* print_alphabet_x10 - to print 10x lowercase alphabet
*/

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 11)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	j++
	}
	_putchar('\n');
}
