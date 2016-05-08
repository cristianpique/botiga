#ifndef GLOBALS_H_
#define GLOBALS_H_

// Constants
// Número total de productes
#define N 64
// Número total de clients
#define C 32                                       
// Número total de proveïdors
#define P 32

/* ESTRUCTURES */
// PRODUCTE
typedef struct
{
	int id;
	int idProveidor;
	char* nom;
}producte;

// CLIENT 
typedef struct
{
	int id;
	char* email;
}client;

// PROVEÏDOR
typedef struct
{
	int id;
	char* email;
}proveidor;

// COMANDES PROVEÏDORS
typedef struct
{
	int idProveidor;
	int nProductes;
	int comandesProducteQuantitat[N+N];
}comandaProveidor;

// MISSATGE DE SORTIDA PER A PROVEIDORS
typedef struct 
{
	int nProveidors;
	comandaProveidor comandesProveidors[P];
}missatgeProveidors;

// AVISOS CLIENTS
typedef struct
{
	int idClient;
	int nProductes;
	int productesSenseStock[N];
}avisClient;

// MISSATGE DE SORTIDA PER A CLIENTS
typedef struct
{
	int nClients;
	avisClient avisosClients[C];
}missatgeClients;

#endif
