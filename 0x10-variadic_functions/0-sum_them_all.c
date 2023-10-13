#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @c: fffffffff
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int c, ...)
{
	va_list valist;
	unsigned int i;
	int s = 0;

	if (c == 0)
		return (0);

	va_start(valist, c);

	for (i = 0; i < c; i++)
		s += va_arg(valist, int);

	va_end(valist);

	return (s);
}
