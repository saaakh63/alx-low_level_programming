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
	int i, j;

	while (c[i])
		i++;
	for (j = 0; j < i - 2; i += 2)
		_putchar(c[i]);
	_putchar('\n');
}
