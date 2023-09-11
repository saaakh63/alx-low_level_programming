#include<unistd.h>
/**
* main - entry point
*
* Description: false or true validation
*
*Return: 0 (success)
*/
int main(void)
{
	char ss[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1,ss,59);
	return (1);
}
