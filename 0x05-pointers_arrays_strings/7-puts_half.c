#include "main.h"
/**
* puts_half - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void puts_half(char *c)
{
	int i = 0, j;

	while (c[i])
		i++;
	if (i % 2 != 0)
		i++;
	for (j = i / 2; j < i; j++)
		_putchar(c[j]);
	_putchar('\n');
}