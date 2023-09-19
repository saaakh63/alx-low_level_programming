#include "main.h"
/**
* _puts - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void _puts(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c + 0);
		c++;
	}
	_putchar('\n');
}
