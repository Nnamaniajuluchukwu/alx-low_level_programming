#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print the strings passed in as arguments.
 *
 * @separator: the delimeter.
 * @n: number of arguments of print.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s = "(nill)", str;
	unsigned int i;
	va_list args;

	va_start(args, n);

  for (i = 0; i < n; i++)                                                                                              
  {
    str = va_arg(args, char *);
    if (str)                                                                                                                    
      printf("%s", str);
    else
      printf("%s", s);

    if (separator && i != (n - 1))                                                            
      printf("%s", separator);                                                                                                                                                    
  }
  va_end(args);  
}
