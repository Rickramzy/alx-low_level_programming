#include <unistd.h>
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On succes 1
 *
 * On error. -1 is returned and erno is set approximately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
