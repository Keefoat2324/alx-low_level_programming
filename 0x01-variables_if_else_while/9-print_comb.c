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
int n;
for (n = 48; n <= 57 ; n++)
{
	putchar(n);
	if (n != 57)
	{
		putchar(44);
		putchar(32);
	}
}

putchar(10);

return (0);
}
