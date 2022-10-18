#include "main.h"

/**
 *print_string - function to print string
 *
 * Return: always 0.
 */
int print_string(char *string)
{
	int i, count = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		count +=  _putchar(string[i]);
	}
	return (count);
}

