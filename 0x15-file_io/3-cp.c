#include "holberton.h"
/**
 *file_from - message d'error for file1
 *@f1: file frome what to copie
 */
void file_from(char *f1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
exit(98);
}
/**
 *file_to - messege d'error for file2
 *@f2: new file
 */
void file_to(char *f2)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f2);
exit(99);
}
/**
 *main- creat cp commande
 *@ac: number of argument
 *@av: argument
 *Return: 0
 */
int main(int ac, char *av[])
{
int y, x, fo, fd, rd = 1024, wr;
char buf[1024];

if (ac != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

fd = open(av[1], O_RDONLY);
if (fd == -1)
file_from(av[1]);
fo = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fo == -1)
file_to(av[2]);
while (rd == 1024)
{
rd = read(fd, buf, 1024);
if (rd == -1)
file_from(av[1]);
wr = write(fo, buf, rd);
if (wr == -1)
file_to(av[2]);
}
x = close(fd);
if (x == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);

y = close(fo);
if (y == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fo), exit(100);
return (0);
}
