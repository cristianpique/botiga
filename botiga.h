#ifndef BOTIGA_H_
#define BOTIGA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"
#include "globals.h"
#include "stock.h"
#include "productes.h"
#include "proveidors.h"
#include "clients.h"
#include "botiga.h"

/***
 * Inicialitza la botiga, processa les comandes i retorna el resultat 
 * esperat. ;)
 **/
int main(int argc, char* argv[]);

/***
 * Inicialitza les dades de la botiga
 * Aquesta funció permet passar un arxiu de configuració per a inicialitzar
 * la botiga, indicant les rutes als arxius amb la informació del stock, els
 * productes, els clients i els proveidors.
 * En cas d'existir un argument, aquest es l'arxiu de configuració.
 * Inicialitza també les estructures de sortida.
 **/
void inicialitzaBotiga(int argc, char* argv[], int stock[N+N], producte productes[N], client clients[C], proveidor proveidors[P], missatgeProveidors sortidaProveidors, missatgeClients sortidaClients);

/***
 * Inicialitza l'estructura de sortida de proveïdors, nProveidors = 0
 * i les estructures complexes a -1
 **/
void inicialitzaSortidaProveidors(missatgeProveidors sortidaProveidors);

/***
 * Inicialitza l'estructura de sortida de clients, nClients = 0
 * i les estructures complexes a -1
 **/
void inicialitzaSortidaClients(missatgeClients sortidaClients);

/***
 * Processa les comandes que realitzen els clients
 * Aquesta funció es l'encarregada de llegir les comandes i processar-les
 * Permet que les comandes es llegeixen des de l'entrada estàndard o des de 
 * l'arxiu de configuració
 * En cas d'existir un argument, aquest es l'arxiu de configuració.
 * Si existeix l'arxiu de configuració llegeix les comandes de la ruta indicada
 * a l'arxiu de configuració, sino, les llegeix de l'entrada estàndard.
 * Si existeix l'arxiu de configuració imprimeix la sortida a l'arxiu de 
 * configuració, sino, la imprimeix per la sortida estàndard.
 **/
void processaComandes(int argc, char* argv[], int stock[N+N], producte productes[N], client clients[C], proveidor proveidors[P], missatgeProveidors sortidaProveidors, missatgeClients sortidaClients);

/***
 * Processa la comanda d'un producte identificat per idProducte amb una 
 * quantitat quantitat i feta per un client amb idClient
 * Aquest funció s'encarrega de decrementar quantitat al stock i modificar 
 * les estructures de sortida sortidaProveidors i sortidaClients en cas necessari.
 **/
void processaComandaProducte(int idClient, int idProducte, int quantitat, int stock[N+N], producte productes[N], client clients[C], proveidor proveidors[P], missatgeProveidors sortidaProveidors, missatgeClients sortidaClients);

/***
 * Afegeix el proveidor identificat amb idProveidor al missatge de sortida 
 * sortidaProveidors Si aquest proveidor encara no té cap producte demanat 
 * incrementa nProveidors dins de sortidaProveidors
 * Afegeix la quantitat quantitat del producte identificat per idProducte al
 * proveidor identificat per idProveidor dins de 
 * sortidaProveidors.comandesProveidors
 ***/
void afegeixComandaProveidor(int idProveidor, int idProducte, int quantitat, missatgeProveidors sortidaProveidors);

/***
 * Afegeix el client identificat per idClient a la sortidaClients.
 * Si aquest client encara no estava a la sortida s'incrementa nClients dins 
 * sortidaClients
 * Si el producte identificat per idProducte encara no estava a la llista 
 * de productesSenseStock que ha demanat aquest client, llavors l'afegeix a la
 * llista i incrementa nProductes dins del avis al client.
 **/
void afegeixAvisClient(int idClient, int idProducte, missatgeClients sortidaClients);

/***
 * Retorna 1 si el idProveidor existeix a la sortidaProveidors
 * Retorna 0 altrament
 **/
int existeixProveidorSortida(int idProveidor, missatgeProveidors sortidaProveidors);

/***
 * Retorna 1 si el idClient existeix a la sortidaClients
 * Retorna 0 altrament
 **/
int existeixClientSortida(int idClient, missatgeClients sortidaClients);

/***
 * Ordena el missatge de sortidaProveidors per idProveidor en ordre ascendent
 **/
void ordenaSortidaProveidors(missatgeProveidors sortidaProveidors);

/***
 * Ordena el missatge de sortidaProveidors per idClient en ordre ascendent
 **/
void ordenaSortidaClients(missatgeClients sortidaClients);

/***
 * Escriu la sortidaProveidors i la sortidaClients amb el format de l'enunciat
 * Si existeix un arxiu de configuració retorna la sortida en un arxiu sino per
 * la sortida estàndard 
 **/
void escriureSortida(int argc, char* argv[], missatgeProveidors sortidaProveidors, missatgeClients sortidaClients);

/***
 * Escriu la sortidaProveidors i la sortidaClients en un arxiu identificat per 
 * filename amb el format de l'enunciat
 **/
void escriureSortidaArxiu(char* filename, missatgeProveidors sortidaProveidors, missatgeClients sortidaClients);

#endif
