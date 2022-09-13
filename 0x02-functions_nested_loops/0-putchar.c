#include "main.h"

/**
 *   main - entry block to print _putchar
 *   Return: 0
*/

int main(void)

{

	char putchar[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)

	{

		_putchar(putchar[c]);

	}

	_putchar('\n');

	return (0);
}
