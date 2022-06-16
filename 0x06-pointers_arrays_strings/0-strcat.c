#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char main(char *dest, char *src)
{
    dest = "good";
    src = "foot";
   unsigned int i;
    char *ptr;
    int len = strlen(dest);
    for( i = 0; i < (strlen(dest) + strlen(src)); i++)
    {
        if(dest[i] == '\0')
        {
            for(unsigned int j = 0; j < strlen(src); j++)
            {
                dest[len + j] = src[j];
            }
            break;
        }
    }
}
