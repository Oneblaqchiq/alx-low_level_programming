#include "main.h"

/**
* leet - function that encode a string
* @str:string that will be encoded
* Return:returns encoded string
*/

char *leet(char *str)
{
	char num[] = "01347";
	char upLTR[] = "OLEAT";
	char lowLTR[] = "oleat";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lowLTR[j] != '\0'; j++)
		{
			if (str[i] == upLTR[j] || str[i] == lowLTR[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
