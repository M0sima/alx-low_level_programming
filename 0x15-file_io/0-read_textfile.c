#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  number of letters it should read and print.
 * @filename: text file being read
 * @letters: num of letters
 * Return: w- actual num
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

