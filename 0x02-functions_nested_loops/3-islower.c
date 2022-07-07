#include "main.h"

/**
* _islower - to print lowercase alphabet
* @c: the argument value it receives
* Return: 1 and 0 depending
*/

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c*/
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
