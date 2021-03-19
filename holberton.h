#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int main(void);
int func_s(va_list li);
int func_c(va_list li);
int func_por(void);

#endif
