#include "main.h"
/**
* rev_string - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
void rev_string(char *c)
{
	int i = 0, j;
	char t;

	while (c[i])
		i++;
	for (j = 0; j < i / 2; j++)
	{
		t = c[j];
		c[j] = c[i - 1 - j];
		c[i - 1 - j] = t;
	}
}
