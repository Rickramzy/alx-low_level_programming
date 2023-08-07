#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Read text file and print to STDOUT
 * @filename: the text file being read
 * @letters: number of bytes read and printed
 * Return: If the function failes or filename is NULL - 0.
 * Otgherwise - the actual number of the bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes, r;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buff, letters);

	if (bytes == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	r = write(STDOUT_FILENO, buff, bytes);

	if (r == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	return (bytes);
}
