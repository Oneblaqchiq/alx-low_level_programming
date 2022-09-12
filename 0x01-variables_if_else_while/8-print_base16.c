#include <stdio.h>



/**
 *   main - prints hexadecimal base 0123456789abcdef, using putchar
 *
 *   Return: Always 0 (Success)
*/

int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
	}

	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}

	putchar('\n');

return (0);
}
