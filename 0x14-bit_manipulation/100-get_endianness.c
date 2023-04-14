#include "main.h"

/**
 * get_endianness - checks if multbyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);
	return (1);
}
