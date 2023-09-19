#include "main.h"
/**
* print_array - entry point
*
* @c: false or true validation
* @n: ggggg
*Return: 0 (success)
*/
void print_array(int *c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", c[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
