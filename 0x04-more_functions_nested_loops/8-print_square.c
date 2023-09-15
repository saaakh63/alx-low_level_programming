#include "main.h"
/**
* print_square - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void print_square(int c)
{
	int i, j;

	if (c <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < c; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
