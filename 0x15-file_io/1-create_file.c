#include "main.h"

/**
 * create_file - creates a file and fills it
 * @filename: Name of the file created
 * @text_content: Text in filename
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i = 0, char_printed;

	if (filename == NULL)
		return (-1);

	fp = open(filename, (O_CREAT | O_TRUNC) | O_WRONLY, 0600);

	if (fp == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	char_printed = write(fp, text_content, i);
	close(fp);

	if (char_printed != -1)
		return (1);
	else
		return (-1);
}
