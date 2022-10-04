#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int copy(char *file_from, char *file_to){
    int oh1, oh2, rh, wh, num;
    char *buf;
    try{
        oh1 = open(file_from, O_RDONLY)
        if(file_from == NULL || op == -1){
            dprintf(STDER_FILENO, 'Error: Cant read from file %s', file_from);
            exit(98);
        }

        rd = read(oh1, buf, num);

        oh2 = open(file_to, )

        
    }
    catch(ArgumentException ){
        exit(97);
        dprintf(STDERR_FILENO, 'Usage: cp %s %s', file_from, file_to);
    }
    
}

