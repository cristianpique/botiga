#ifndef STOCK_H_
#define STOCK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"

/***
 * Inicialitza el stock inicial de la botiga
 * Utilitceu aquesta funció per carregar els exemples
 **/
void inicialitzaStockExemple(int exemple, int stock[N+N]);

/***
 * Inicialitza el stock inicial de la botiga a partir d'un fitxer.
 * Llegeix un fitxer que està identificat per filename i carrega les dades a la variable stock
 * El fitxer conté N línies, cadascuna formada per dos enters separats per un espai on el primer es 
 * el codi de producte i el segon és la quantitat d'aquest producte.
 **/
void inicialitzaStockArxiu(char* filename, int stock[N+N]);

/***
 * Retorna la quantitat del producte identificat per idProducte dintre del vector stock
 * Si no existeix el producte dintre d'stock retorna -1
 */
int quantitatProducteEnStock(int idProducte, int stock[N+N]);

/***
 * Donat un identificador de producte idProducte dintre del vector stock 
 * retorna 1 si el idProducte existeix dintre del stock encara que la quantitat del producte sigui 0
 * retorna 0 altrament
 **/
int existeixProducte(int idProducte, int stock[N+N]);

/***
 * Modifica la quantitat del producte identificat per idProducte dintre de la variable stock per novaQuantitat
 **/
 void modificaStock(int idProducte, int novaQuantitat, int stock[N+N]);



#endif
