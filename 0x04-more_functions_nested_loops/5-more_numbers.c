#include "main.h"
/**
* more_numbers - entry point
*
* @: false or true validation
*
*Return: 0 (success)
*/
void more_numbers(void)
{
	int i, j, zz;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			zz = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				zz = j % 10;
			}
			_putchar(zz + 48);
		}
		_putchar('\n');
	}
}
