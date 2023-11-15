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

	int x;

	int y;

	while (*format != '\0')
	{
	if (*format == '%')
		{
	format++; /*move to the next character after '%'*/
	switch (*format)
		{
	case 'd':
		y = va_arg(args, int);

		x += y;

		break;
		}
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}

			va_end(args);

		return (x);
}
