#ifndef CONFIG_H_
#define CONFIG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BUFFER 1024 
#define DELIMITER "="

typedef struct 
{
   char stock[MAX_BUFFER];
   char productes[MAX_BUFFER];
   char clients[MAX_BUFFER];
   char proveidors[MAX_BUFFER];
   char comandes[MAX_BUFFER];
   char sortida[MAX_BUFFER];
}config;

/***
 * Format del fitxer de configuració (sense espais)
 * 
 * stock=/path/to/file
 * productes=/path/to/file
 * clients=/path/to/file
 * proveidors=/path/to/file
 * comandes=/path/to/file
 * sortida=/path/to/file
 * 
 * Llegeix l'arxiu de configuració i retorna una estructura config amb els arxius de dades
 * 
 * typedef struct 
 * {
 *  char stock[MAX_BUFFER];
 *  char productes[MAX_BUFFER];
 *  char clients[MAX_BUFFER];
 *  char proveidors[MAX_BUFFER];
 *  char comandes[MAX_BUFFER];
 *  char sortida[MAX_BUFFER];
 * }config;
 *
 **/
config llegirArxiuConfiguracio(char* filename);

#endif
