#include "main.h"
/**
* print_diagonal - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void print_diagonal(int c)
{
	int i, j;

	if (c <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= c; i++)
		{
			for (j = 1; j <= i; j++)
			if (j > 1)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
