#include "main.h"
/**
* _puts_recursion - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void _puts_recursion(char *c)
{
	if (*c == '\0')
		_putchar('\n');
	else
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
}
