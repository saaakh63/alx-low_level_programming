#include "main.h"
#include <math.h>
/**
* _sqrt_recursion - entry point
*
* @n: false or true validation
*
*Return: 0 (success)
*/
int s(int n, int v);
int _sqrt_recursion(int n)
{
	return (s(n, 1));
}
/**
* s - entry point
*
* @n: false or true validation
* @v: ssssss
*Return: 0 (success)
*/
int s(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v *v < n)
		return (s(n, v + 1));
	else
		return (-1);
}
