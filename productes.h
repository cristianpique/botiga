#ifndef PRODUCTES_H_
#define PRODUCTES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"

/***
 * Inicialitza el stock inicial de la botiga.
 *
 * Utilitceu aquesta funció per carregar els exemples.
 **/
void inicialitzaProductesExemple(int exemple, producte productes[N]);

/***
 * Inicialitza els productes de la botiga a partir d'un fitxer.
 * Llegeix un fitxer que està identificat per filename i carrega les dades a la variable productes
 * El fitxer conté un total de N línies on cada línia conté dos enters i una direcció d'email vàlida
 * separats per el carácter ;
 * El primer enter identifica un producte, el segon identifica un proveidor que subministra el producte, 
 * i el text entre "" identifica el nom del producte que no conté el caràcter ; ni el caràcter "
 * 
 * Exemple d'una línia del fitxer de productes:
 * 1;1;"Nom del producte"
 **/
void inicialitzaProductesArxiu(char* filename, producte productes[N]);

/***
 * Retorna el nom del producte identificat per idProducte dintre de la variable productes
 **/
char* nomProducte(int idProducte, producte productes[N]);

/***
 * Retorna el codi del proveidor que subministra el producte identificat per idProducte dintre de la
 * variable productes.
 **/
int codiProveidor(int idProducte, producte productes[N]);

/***
 * AMPLIACIÓ
 *
 * Retorna la quantitat de productes que subministra el proveidor identificat per idProveidor
 * dintre de la variable productes.
 **/
int numeroProductesSubministraProveidor(int idProveidor, producte productes[N]);

/***
 * AMPLIACIÓ
 * 
 * Retorna un vector d'enters amb els identificadors ordenars de menor a major dels proveidors que no 
 * subministren cap producte.
 * Retorna un null pointer si tots els proveidors subministren algun producte.
 * 
 **/
 int* proveidorsSenseProductes(proveidor proveidors[P], producte productes[N]);

#endif
