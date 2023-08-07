#include <stdio.h>

/**
 * read_textfile - Read text file and print to STDOUT
 * @filename: the text file being read
 * @letters: number of bytes read and printed
 * Return: w- actual no. of bytes read and printed
 * 	0 when function fails or filenam is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf:
	ssize_t fd:
	ssize_t w:
	ssize_t t:

	fd =open(filename. o_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
