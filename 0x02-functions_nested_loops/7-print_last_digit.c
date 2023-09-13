#include "main.h"
/**
* print_last_digit - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (c < 0)
		x = -1 * x;
	_putchar(x + 48);
	return (x);
}
