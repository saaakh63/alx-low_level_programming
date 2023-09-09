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
	srand(time(0));
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			printf("%i%i ;", i, j);
		}
	}
	printf("\n");
	return (0);
}
