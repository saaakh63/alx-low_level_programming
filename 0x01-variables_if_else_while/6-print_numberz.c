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
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
