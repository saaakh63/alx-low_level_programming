#include "main.h"
/**
* factorial - entry point
*
* @c: false or true validation
*
*Return: 0 (success)
*/
int factorial(int c)
{
	if (c < 0)
		return (-1);
	else if (c == 0)
		return (1);
	return (c * factorial(c - 1));
}
