#include "main.h"

/**
 * clear_bit - sets the laue to a given index.
 * @n: parameter
 * @index: index
 * Desc: a function that sets the value of a bit to 0 at a given index.
 *
 * Return: 1 1f it works, -1 id error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
