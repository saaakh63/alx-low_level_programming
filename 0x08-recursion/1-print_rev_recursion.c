#include "main.h"
/**
* _print_rev_recursion - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void _print_rev_recursion(char *c)
{
	if (*c > '\0')
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
