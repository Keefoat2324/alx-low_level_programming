#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign a random number to the variable n each time
* it is executed and print
* last digit a new line, to the standard error.
* Return: Always 0 (Success)
*/

int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
}

putchar(10);/* this is an ascii code for new line*/

return (0);
}
