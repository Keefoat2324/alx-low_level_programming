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
int ch1;
int ch2;

for (ch1 = 0; ch1 < 100; ch1++)
{
	for (ch2 = 0; ch2 < 100; ch2++)
	{

		if (ch1 < ch2)
		{
			putchar(ch1 / 10 + '0');
			putchar(ch1 % 10 + '0);
			putchar(32);
			putchar(ch2 / 10 + '0');
			putcha(ch2 % 10 +  '0);
				if ((ch1 +100) + ch2 != 9899)
				{
					putchar(44);
					putchar(32);

				}
		}



	}
}

putchar(10);/* this is an ascii code for new line*/

return (0);
}
