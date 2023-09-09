#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: false or true validation
*
*Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	if (n % 10 > 5)
		printf("%i is %i and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("%i is %i and is 0\n", n, n % 10);
	else
		 printf("%i is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
