#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print(char len, ...);
int str(char *s);
int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size);
#endif
