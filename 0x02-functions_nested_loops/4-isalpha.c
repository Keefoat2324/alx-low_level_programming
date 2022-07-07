#include "main.h"

/**
* _isalpha - checks for alphabetical letters
* @c: the argument value it received
* Return: 1 and 0 depending on the conditions
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
