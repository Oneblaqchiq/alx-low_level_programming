#include "main.h"

/**
* print_rev - code to print a string in reverse
* @s: String to be reverse printed
* Return: Always 0.
*/

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
