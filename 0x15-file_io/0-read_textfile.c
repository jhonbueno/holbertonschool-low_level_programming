#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - Read a text file
 *
 * @filename: filename
 * @letters: number of letters to print
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int nr_bytes, text;

	buf = malloc(sizeof(buf) * letters);
	if (!buf)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	else
	{
		nr_bytes = read(fd, buf, letters);
		if (nr_bytes == 0)
		{
			free(buf);
			return (0);
		}
		buf[nr_bytes] = '\0';
		close(fd);
		text = write(STDOUT_FILENO, buf, nr_bytes);
		if (text == -1)
		{
			free(buf);
			return (0);
		}
	}
	free(buf);
	return (text);
}
