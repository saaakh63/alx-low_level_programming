#include "main.h"
/**
* puts2 - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void puts2(char *c)
{
	int i = 0, j;

	while (c[i])
		i++;
	for (j = 0; j < i - 2; i += 2)
		_putchar(c[j]);
	_putchar('\n');
}
