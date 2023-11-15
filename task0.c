#include "main.h"

/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int i = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			i += _print_format(*(++format), aegs);
		}
		else
		{
			i += write(1, format, 1);
		}

		format++;
	}

		va_end(args);

	return (i);
}
