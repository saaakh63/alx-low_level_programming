#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - entry point
*
* @w: false or true validation
* @h: dddd
*Return: 0 (success)
*/
int **alloc_grid(int w, int h)
{
	int **g;
	int i, j;

	if (w + h < 2 || w < 1 || h < 1)
		return (NULL);

	g = malloc(h * sizeof(*g));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		g[i] = malloc(w * sizeof(**g));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < w; j++)
			g[i][j] = 0;
	}

	return (g);
}

