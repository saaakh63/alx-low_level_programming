#include "main.h"
/**
* print_most_numbers - entry point
*
* @: false or true validation
*
*Return: 0 (success)
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(48 + i);
	}
	_putchar('\n');
}
