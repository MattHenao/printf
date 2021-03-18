#include "holberton.h"

/**
 * func_c - Detecte if a data type is a char
 *
 * @li: List
 */

void func_c(va_list li)
{
	char *a;
	int i = 0;

	a = va_arg(li, char *);

	write(1, &a[i], 1);
}
