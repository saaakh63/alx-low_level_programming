#include "main.h"
/**
* print_triangle - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void print_triangle(int c)
{
	int i, j;

	if (c <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= c; i++)
		{
			for (j = 1; j <= c; j++)
			{
				if ((i + j) <= c)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
