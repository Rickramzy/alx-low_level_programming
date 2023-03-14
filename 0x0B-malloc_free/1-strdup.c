#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars.
*/
char *_strdup(char *str)
{
	char *strout;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	strout = malloc(sizeof(char) * (i + 1));
	if (strout ==  NULL)
		return (NULL);

	for (j = 0; str[j];)
		j++;

	strout[j] = str[j];
	return (strout);
}
