#include <unistd.h>

/**
 * _putchar - writes the character of c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and err-number is set approriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
