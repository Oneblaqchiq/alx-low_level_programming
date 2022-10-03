#include "main.h"

/**
 * _puts - checks code for new line and string printed into stdout.
 * @str: String to be printed out.
 * Return: Always 0.
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
