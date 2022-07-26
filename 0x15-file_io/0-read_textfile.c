#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char buffer[100];
    fd = open(filename, O_RDONLY);
    if(fd == -1){
        return(0);
    }
    if(filename == NULL){
        return(0);
    }
    if(fd != -1){
        lseek(fd, 0, SEEK_SET);
        read(fd, buffer, letters);
        _putchar(buffer);
        return(sizeof(buffer));
        close(fd);
    }  
}
