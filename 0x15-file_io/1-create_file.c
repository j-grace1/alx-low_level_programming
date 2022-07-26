#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
    int fd;
    int written;

    if (filename == NULL)
    {
        return(-1);
    }
    
    fd = open(filename, O_RDWR|O_EXCL|O_TRUNC, 0600);
    if (fd == -1)
    {
        return(-1);
    }
    else
    {
        return(1);
    }
    written = write(fd, text_content, sizeof(text_content));
    close(fd);
}
