#include <stdio.h>


/**
 *   main - print alphabet reversed using putchar
 *
 *   Return: Always 0 (Success)
*/


int main(void)
{
	char letter = 122;

	while (letter > 96)
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return(0);
}
