#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_textfile - creates a file and adds text in it
 * with permissions 600
 *
 * @filename: name of the file
 * @text_content: characters to be written
 *
 * Return: actual number of letters read, 0 if end of file
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int written = 0, writecount = 0;
    char *ptr;

    if (filename == NULL)
    {
        return(-1);
    }
    
    fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
    if (fd == -1)
    {
        return(-1);
    }

    if (text_content != NULL)
    {
        for (writecount = 0, ptr = text_content; *ptr; *ptr++)
        {
            writecount++;
        }
        written = write(fd, text_content, writecount);
    }

    if (written != writecount || close(fd) == -1)
    {
        return(-1);
    }
    return(1);
}
