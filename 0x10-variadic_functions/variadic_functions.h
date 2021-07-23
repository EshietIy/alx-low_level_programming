#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include <stdio.h>
#include <stdarg.h>
/**
 * struct prints - Defines a printer to data types
 * @notation: type of data type
 * @print_dType: pointer to function that prints data types
 * according to their notation
 */

typedef struct prints
{
char *notation; /** format specifiers **/
void (*print_dType)(va_list argptr);
} prints_t;

void print_char(va_list argptr);
void print_int(va_list argptr);
void print_float(va_list argptr);
void print_string(va_list argptr);
#endif
