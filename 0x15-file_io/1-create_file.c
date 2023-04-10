#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

/**
 * creat_file - Append to file
 * @filename: Path to file
 * @text_content: Content
 * Return: chars read
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int size;
	char *mem;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	size = strlen(text_content);
	mem = malloc(sizeof(char) * size);
	if (!mem)
	{
		close(fd);
		return (-1);
	}
	w = write(fd, text_content, size);
	if (w == -1)
	{
		close(fd);
		free(mem);
		return (-1);
	}
	close(fd);
	free(mem);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 1.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
