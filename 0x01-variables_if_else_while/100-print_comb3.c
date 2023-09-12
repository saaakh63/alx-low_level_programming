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
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i == 8 && j == 9)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
	return (0);
}
