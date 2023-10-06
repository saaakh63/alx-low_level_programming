#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - entry point
*
* @c: false or true validation
* @h: hhhhh
*Return: 0 (success)
*/
void free_grid(int **c, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(c[i]);
	free(c);
}
