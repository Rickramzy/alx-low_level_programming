#include "main.h"


/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of a file.
 * @text_content: The string to add to the file
 * Return: If the fuction fails or filename is NULL --1
 * if the file does not exist the user lacks write permissoins --1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(0);

	return (1);
}
