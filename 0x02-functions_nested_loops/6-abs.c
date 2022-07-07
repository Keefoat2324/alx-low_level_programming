#include "main.h"

/**
* _abs - to compute an absolute value of an integer
* @x: the argument value it received
* Return: 1 and 0 depending on the conditions
*/

int _abs(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}
