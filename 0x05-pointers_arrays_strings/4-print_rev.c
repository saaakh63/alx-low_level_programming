#include "main.h"
/**
* print_rev - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void print_rev(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	while (i--)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
