#include "main.h"

void print_buffer(char buf[], int *index);

/**
 * _printf - Custom printf function
 * @fmt: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *fmt, ...)
{
    int i, printed = 0, printed_chars = 0;
    int flags, width, precision, size, buf_index = 0;
    va_list args;
    char buffer[BUFF_SIZE];

    if (fmt == NULL)
        return (-1);

    va_start(args, fmt);

    for (i = 0; fmt && fmt[i] != '\0'; i++)
    {
        if (fmt[i] != '%')
        {
            buffer[buf_index++] = fmt[i];
            if (buf_index == BUFF_SIZE)
                print_buffer(buffer, &buf_index);
            printed_chars++;
        }
        else
	{
	print_buffer(buffer, &buf_index);
	flags = get_flags(fmt, &i);
	width = get_width(fmt, &i, args);
	precision = get_precision(fmt, &i, args);
		size = get_size(fmt, &i);
		++i;
	printed = handle_print(fmt, &i, args, buffer,
			flags, width, precision, size);
		if (printed == -1)
		return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buf_index);

	va_end(args);

    return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buf: Array of chars
 * @index: Index at which to add the next char, represents the length.
 */
void print_buffer(char buf[], int *index)
{
	if (*index > 0)
	write(1, &buf[0], *index);

	*index = 0;
}
