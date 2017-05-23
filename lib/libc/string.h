/**
 * STRING.H
 * 
 * Este archivo contiene las declaraciones de algunas de las funciones
 * que corresponden al estandar de C y que por lo tanto se encuentran
 * en <string.h>, por que al ser un sistema operativo distinto, se tienen
 * que hacer todas y cada una de las funciones para que sirvan sin la libreria.
 * 
 */

#ifndef STRING_H
#define STRING_H

#include "stddef.h"

char *strcat(char *destino, char *origen);
char *strncat(char *dest, const char *src, size_t n);

char *strcpy(char *destino, const char *origen);
char *strncpy(char *dest, const char *src, size_t n);

int strcmp(const char *cadena1, const char *cadena2);
int strncmp(const char *str1, const char *str2, size_t n);

size_t strlen(const char *cadena);

#endif /* STRING_H */
