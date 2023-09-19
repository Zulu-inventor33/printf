#include "main.h"

/**
 * _printf - selects correct function to print.
 * @format: identifier to look for.
 * Return: 0
 */

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
{
int value = va_arg(args, int);
printf("%d", value);
}
else
{
putchar('%');
}
}
else
{
putchar(*format);
}
format++;
}
va_end(args);
}

return (0);
}
