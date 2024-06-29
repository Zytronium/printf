#ifndef main_h
#define main_h

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct specs
{
	char *specifier;
	int (*f)(va_list args);
} specs_t;

int main(void);
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(int n);
int count_digits(int x);
int xPowY(int x, int y);
int _putc(char c);
int _puts(va_list args);
int _inval_specs(char prev_format, char format, int count);
int _val_type(char _type);
/*int _specs(char format, va_list args);*/
int _format(const char *format, va_list args);

#endif