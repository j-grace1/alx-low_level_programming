#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
    dest = "good";
    src = "foot";
  
    char *ptr;
    
    * ptr = *dest + *src;
    return(ptr);
}
