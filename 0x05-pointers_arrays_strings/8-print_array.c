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
		if (i != (n - 1))
		{
			printf("%d, ", c[i]);
		}
		else
			printf("%d", c[i]);
	}
	printf("\n");
}
