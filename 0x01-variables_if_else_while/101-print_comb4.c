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
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7 && j == 8 && k == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	printf("\n");
	return (0);
}
