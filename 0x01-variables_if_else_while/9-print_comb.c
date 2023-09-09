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
	int i = 0;

	srand(time(0));
	while (i < 9)
	{
		printf("%i", i);
		putchar(',');
		putchar(' ');
		i++;
	}
	printf("%i", i);
	printf("\n");
	return (0);
}
