#include "main.h"
/**
* is_prime_number - entry point
*
* @c: false or true validation
* @y: ddddd
*Return: 0 (success)
*/
int test(int c, int y);
int is_prime_number(int c)
{
	return (test(c, 2));
}
/**
* test - entry point
*
* @c: false or true validation
* @y: ddddd
*Return: 0 (success)
*/
int test(int c, int y)
{
	if (y >= c && c > 1)
		return (1);
	else if (c % y == 0 || c <= 1)
		return (0);
	else
		return (test(c, y + 1));
}
