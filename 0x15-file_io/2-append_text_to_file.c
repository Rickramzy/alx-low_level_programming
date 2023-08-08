#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - apends text to file
 * *@filename: the path to file
 * @text_content: content
 * Return: 1 0r -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	size = strlen(text_content);
	w = write(fd, text_content, size);

	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
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
