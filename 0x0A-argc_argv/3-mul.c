#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry Point
 * atoi converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
