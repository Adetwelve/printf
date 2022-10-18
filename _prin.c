#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/*
 *
 *
 */
int prin(const char *format, ...)
{
	int count, i;
	va_list data;

	va_start(data, format);
	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{		
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
		switch (format[i + 1])
		{
			case 'c' :
				/* print the character from the va_arguments */
				count += _putchar(va_arg(data, int));
				break;
			case 's' :
				/* print string from va_arguments */
				count += print_string(va_arg(data, char *));
				break;
			case '%' :
				/* print % from  va_argument */
				count += _putchar('%');
				break;
			defult:
				break;
		}

			i += 2;
		}
	}

	return (count);	

}
