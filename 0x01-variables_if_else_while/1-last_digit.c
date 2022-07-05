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
int lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

printf("Last digit of %d is ", n);
if (n > 5)
{
	printf("%d and is greater than 5", lastd);
}
if (n == 0)
{
	printf("%d and is 0", lastd);
}
if (n < 6 && n != 0)
{
	printf("%d and is less than 6 and not 0", lastd);
}
printf("\n");

return (0);
}
