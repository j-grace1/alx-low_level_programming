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
    char buffer[100];
    int written;

    buffer = malloc(sizeof(char)*letters);
    if(filename == NULL| letters = 0){
        return(0);
    }
    if(buffer == NULL){
        return(0);
    }
    fd = open(filename, O_RDONLY);
    if(fd == -1){
        free(buf)
        return(0);
    }
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, letters);
    if (read(fd, buffer, letters) == -1)
    {
        return(0);
        close(fd);
    }
    written = write(STDOUT_FILENO, buffer, letters);
    if (written != letters)
    {
        return(0);
    }
    return(letters);
    close(fd); 
}
