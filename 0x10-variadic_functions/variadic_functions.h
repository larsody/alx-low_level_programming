#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);



/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;

#endif
