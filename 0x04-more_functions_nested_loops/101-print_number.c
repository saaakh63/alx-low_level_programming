#include "main.h"
/**
* print_number - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void print_number(int c)
{
	unsigned int x = c;

	if (c < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar((x % 10) + 48);
}
