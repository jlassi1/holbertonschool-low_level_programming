#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: pointer to the filename
 *@letters: number of letters read from the file
 *
 *Return: number of letters it could read and print or 0 if FAIL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fr, fw;
int fo;
char *buf;

		if (filename == NULL)
			return (0);
	buf = malloc(sizeof(char) * (letters));
		if (!buf)
			return (0);

	fo = open(filename, O_RDWR);
		if (fo == -1)
			return (0);

	fr = read(fo, buf, letters);
		if (fr == -1)
			return (0);

	fw = write(STDOUT_FILENO, buf, fr);
		if (fw == -1)
			return (0);

	free(buf);
	close(fo);

return (fw);
}
