#include "main.h"
/**
 * print_rv - imprime or reverse
 *
 * @s: string
 *
 * Return: Always 0
 */
void print_rv(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0;  o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
