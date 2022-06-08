#include "main.h"

/**
 * print_alphabet_x10 - alphabet in lowercase 10 times
 *
 * Return: returns 0
 *
 */
void print_alphabet_x10(void)
{
char i;
int a;

for ( a = 0; i < 11; i++)
{
    for (i = 'a'; i <= 'z'; i++)
    {
	    _putchar(i);
    }
}

_putchar('\n');
}
