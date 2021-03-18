#include "holberton.h"

/**
 * func_c - Detecte if a data type is a char
 *
 * @li: List
 */

void func_c(va_list li)
{
	char *a;

	a = va_arg(li, char *);

	int i = 0;

	write(1, &a[i], 1);
}
