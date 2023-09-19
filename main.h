#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <strings.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list val);
int _printf(const char *format, ...);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_ex_string(va_list val);
int printf_X(va_list val);
int printf_x(va_list val);
int printf_oct(va_list val);
int printf_unsign(va_list args);
int printf_bin(va_list val);
int printf_srv(va_list args);
int printf_rt13(va_list args);
int printf_int(va_list args);
int printf_dc(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_3(void);
int printf_cha(va_list val);
int printf_s(va_list val);
int _putchar(char c);

#endif
