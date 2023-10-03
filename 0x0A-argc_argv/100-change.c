#include <stdio.h>
#include <stdlib.h>
/**
* main-prints - entry point
*to make change 
* @argc: false or true validation
* @argv: ggg
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, l = 0, m = atoi(argv[1]);
	int arr[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= arr[i])
			{
				l += m / arr[i];
				m = m % arr[i];
				if (m % arr[i] == 0)
					break;
			}
		}
		printf("%d\n", l);
	}
	else 
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
