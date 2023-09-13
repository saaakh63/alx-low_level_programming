#include "main.h"
/**
* print_sign - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (1);
	}
}
