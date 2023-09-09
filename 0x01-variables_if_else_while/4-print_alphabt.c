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
	char c = 'a';

	srand(time(0));
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
