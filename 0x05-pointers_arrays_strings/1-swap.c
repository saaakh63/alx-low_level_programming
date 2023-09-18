#include "main.h"
/**
* swap_int - entry point
*
* @a: false or true validation
* @b: fffff
*Return: 0 (success)
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = &p;
	*b = &p;
}
