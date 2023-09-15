#include "main.h"
/**
* print_line - entry point
*
* @n: false or true validation
*
*Return: 0 (success)
*/
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
