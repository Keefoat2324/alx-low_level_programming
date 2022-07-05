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
