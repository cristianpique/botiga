#ifndef PROVEIDORS_H_
#define PROVEIDORS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"

/***
 * Inicialitza els proveidors de la botiga
 * Utilitceu aquesta funció per carregar els exemples
 **/
void inicialitzaProveidorsExemple(int exemple, proveidor proveidors[P]);

/***
 * Inicialitza els proveidors de la botiga a partir d'un fitxer.
 * Llegeix un fitxer que està identificat per filename i carrega les dades a la variable proveïdors
 * El fitxer conté un total de P línies on cada línia conté un enter i una direcció d'email vàlida
 * separats per el carácter ;
 * 
 * Exemple d'una línia del fitxer de proveidors:
 * 1;botiga@c.com
 **/
void inicialitzaProveidorsArxiu(char* filename, proveidor proveidors[P]);

/***
 * Retorna el email del proveidor identificat per idProveidor dintre de la variable proveidors
 * Si aquest idProveidor no existeix retorna "\0"
 **/
char* emailProveidor(int idProveidor, proveidor proveidors[P]);


#endif
