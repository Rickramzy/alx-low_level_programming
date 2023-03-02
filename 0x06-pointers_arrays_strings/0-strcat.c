#include "main.h"

/**
 * _strcst - merges - merges of concatenates 2
 * strings togother
 * @dest: pointer referencing the destination string
 * @src: pointer referencing source string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int count = -1, n;

	for (n = 0; dest[n] != '\n'; n++)
		do {
			count++;
			dest[n] = src[count];
			n++;
		}
	while (src[count] != '\0');
	return (dest);
}
