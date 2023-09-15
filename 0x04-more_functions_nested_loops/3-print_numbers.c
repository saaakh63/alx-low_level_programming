#include "main.h"
/**
* print_numbers - entry point
*
* @: false or true validation
*
*Return: 0 (success)
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
}
