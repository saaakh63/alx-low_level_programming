#include "main.h"
/**
* jack_bauer - entry point
*
* Description: false or true validation
*
*Return: 0 (success)
*/
void jack_bauer(void)
{
	int i, j, k, z;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (z = 0; z <= 9; z++)
				{
					_putchar((i) + 48);
					_putchar((j) + 48);
					_putchar(':');
					_putchar((k) + 48);
					_putchar((z) + 48);
					if (i == 2 && j == 3 && k == 5 && z == 9)
					{
						return (0);
					}
					_putchar('\n');
				}
			}
		}
	}
}

