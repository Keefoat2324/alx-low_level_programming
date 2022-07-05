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
for (n = 0; n < 10; n++)
{
	printf("%d\n", n);
}

printf("\n");

return (0);
}
