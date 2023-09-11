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
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i == 8 && j == 9)
			{
				printf("%i%i", i, j);
			}
			else
			{
				printf("%i%i ,", i, j);
			}
		}
	}
	printf("\n");
	return (0);
}
