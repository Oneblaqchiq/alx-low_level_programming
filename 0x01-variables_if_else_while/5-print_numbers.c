#include <stdio.h>


/**
 *  main - print 0123456789
 *
 *  Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);

	putchar('\n');

	return (0);
}

