#include "main.h"

/**
*print- char to int
*@len:input
*Return: intger
*/

int print(char len, ...)
{
	va_list list;
	char *ptr;
	int i;

	va_start(list, len);

		for (i = 0 ; i < len ; i++)
		{
			ptr = va_arg(list, char *);
		_putchar("[%d, %i]", ptr, ptr);
		}
	va_end(list);
}
