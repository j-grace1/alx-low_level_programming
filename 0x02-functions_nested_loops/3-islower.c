#include "main.h"

/**
 * _islower - prints 1 if c is lowercase else 0
 *
 * Return: returns 0
 *
 */
int _islower(int c)
{
    
int i = 'a';

    while (i <= 'z')
    {
        if (i == c)
        {
            return(0);
        }
    }
return(0); 
}