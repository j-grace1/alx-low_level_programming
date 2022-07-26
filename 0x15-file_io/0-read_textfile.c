#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buffer;
    int written, len;

    if(filename == NULL|| letters == 0){
        return(0);
    }
    buffer = malloc(sizeof(char)*letters);
    if(buffer == NULL){
        return(0);
    }
    fd = open(filename, O_RDONLY);
    if(fd == -1){
        free(buffer);
        return(0);
    }
    len = read(fd, buffer, letters);
    if (len == -1)
    {
        free(buffer)
        close(fd);
        return(0);
    }
    written = write(STDOUT_FILENO, buffer, len);
    if (written != len)
    {
        return(0);
    }
    return(len);
    close(fd); 
}
