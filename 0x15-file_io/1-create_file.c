#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * create_file - Create file
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int text;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	else
	{
		if (!text_content)
		{
			close(fd);
			return (1);
		}
		text = write(STDOUT_FILENO, text_content, strlen(text_content));
		close(fd);

		if (text == -1)
			return (-1);
	}
	return (1);
}
