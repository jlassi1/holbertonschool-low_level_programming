#include "holberton.h"
/**
 *create_file- a function that creates a file
 *@filename:  is the name of the file to create
 *@text_content: the content
 *
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

ssize_t fw;
int fo, i = 0;

		if (filename == NULL)
			return (-1);

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fo == -1)
			return (-1);

		if (text_content == NULL)
			text_content = "";
		while (text_content[i] != '\0')
			i++;


	fw = write(fo, text_content, i);
		if (fw == -1)
			return (-1);


	close(fo);

return (1);
}

