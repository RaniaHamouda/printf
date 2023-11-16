#include "main.h"

/**
 * _putchar - putchar
 * Return: number of characters printed
 * @c: input
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
