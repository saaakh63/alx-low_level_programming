#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - entry point
*
* @max: false or true validation
* @min: fff
*Return: 0 (success)
*/
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
