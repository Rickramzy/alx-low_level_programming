#include "main.h"
/**
 * swap_int - Function that swaps value of intergers
 * @a: intiger for swap
 * @b: intiger for swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}
