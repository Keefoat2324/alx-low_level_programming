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

	/**
	 * hexadecimal
	 * 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
	 */
char ch;
int n;

for (n = 48 ; n <= 57; n++)
{
	{
		putchar(n);
	}
}
for (ch = 'a' ; ch <= 'f'; ch++)
{
	{
		putchar(ch);
	}
}

putchar(10);/* this is an ascii code for new line*/

return (0);
}
