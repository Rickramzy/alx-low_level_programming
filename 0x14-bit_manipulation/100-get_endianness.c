#include "main.h"

/**
 * get_endianness - checks if a machine is either little or big endiannes
 * Desc: Write a function that checks the endianness.
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
