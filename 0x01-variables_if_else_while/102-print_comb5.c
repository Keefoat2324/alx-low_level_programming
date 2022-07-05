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
int ch1, ch2;

for (ch1 = 0; ch1 <= 98; ch1++)
{
	for (ch2 = ch1 + 1; ch2 <= 99; ch2++)
	{
		putchar(ch1 / 10 + '0');
		putchar(ch1 % 10 + '0');
		putchar(32);
		putchar(ch2 / 10 + '0');
		putcha(ch2 % 10 +  '0');
		if (ch1 / 10 != 9 || ch1 % 10 != 8)
		{
			putchar(44);
			putchar(32);
		}
	}
}
putchar(10);/* this is an ascii code for new line*/

return (0);
}
