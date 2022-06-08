#include "main.h"

/**
 * _islower - prints 1 if c is lowercase else 0
 *
 * Return: returns 0
 *
 */
int _islower(int c)
{
    
char i;
    for (i = 0; i < 26; i++)
    {
        if (i == c)
        {
            _putchar('1');
        }
        else
        {
            _putchar('0');
        }
    }
return(0); 
}