#include "main.h"
/**
* print_diagsums - entry point
*
* @c: false or true validation
* @n: dddd
*Return: 0 (success)
*/
void print_diagsums(int *a, int n)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[i][i];
		sum1 += a[n - i - 1];
	}
	printf("%d, ", sum);
 	printf("%d\n", sum1);
}
