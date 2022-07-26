#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - appends to a file
 *
 * @filename: file on to be appended with data
 * @text_content: content to append
 *
 * Return: 1 if success and -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0, wordcount = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY |O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (wordcount = 0, ptr = text_content; *ptr; ptr++)
			wordcount++;
		length = write(fd, text_content, wordcount);
	}

	if (close(fd) == -1 || wordcount != length)
		return (-1);
	return (1);
}
