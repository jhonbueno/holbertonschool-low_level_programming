#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * append_text_to_file - Append text file
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int text;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	else
	{
		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}
		text = write(fd, text_content, strlen(text_content));
		close(fd);

		if (text == -1)
			return (-1);
	}
	return (1);
}
