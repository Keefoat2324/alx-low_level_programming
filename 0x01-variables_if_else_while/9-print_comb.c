#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -> assign a random number to the variable n each each time
*it is executed and print the last digit of the number in the variable 
*Return: always 0
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
