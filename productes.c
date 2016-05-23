#include "productes.h"

void inicialitzaProductesExemple(int exemple, producte productes[N]) {
	// <1, 2, “usb”> <3, 5, ”auricular”> <5, 8, ”CDs”> <6, 2, “Teclado” > <2, 2, “Ratón”>
	// Inicialitcem a -1 per indicar que no hi ha informació
	int i;
	for (i=0; i<N; i++) {
		productes[i].id = -1;
		productes[i].idProveidor = -1;
		productes[i].nom = "";
	}

	if (exemple == 1) {
		productes[0].id = 1;
		productes[0].idProveidor = 2;
		productes[0].nom = "usb";

		productes[1].id = 3;
		productes[1].idProveidor = 5;
		productes[1].nom = "auricular";
		
		productes[2].id = 5;
		productes[2].idProveidor = 8;
		productes[2].nom = "CDs";

		productes[3].id = 6;
		productes[3].idProveidor = 2;
		productes[3].nom = "Teclado";

		productes[4].id = 2;
		productes[4].idProveidor = 2;
		productes[4].nom = "Ratón";
	}

	if (exemple == 2) {
		productes[0].id = 1;
		productes[0].idProveidor = 2;
		productes[0].nom = "usb";

		productes[1].id = 3;
		productes[1].idProveidor = 5;
		productes[1].nom = "auricular";
		
		productes[2].id = 5;
		productes[2].idProveidor = 8;
		productes[2].nom = "CDs";

		productes[3].id = 6;
		productes[3].idProveidor = 2;
		productes[3].nom = "Teclado";

		productes[4].id = 2;
		productes[4].idProveidor = 2;
		productes[4].nom = "Ratón";
	}
}

char* nomProducte(int idProducte, producte productes[N]) {
							   int i;
							   for (i=0;i<N;i++) {
									       if (idProducte==productes[i].id) {
														   return productes[i].nom;
													          }
									     }
							   return "\0";
							 }

int codiProveidor(int idProducte, producte productes[N]) {
							    int i;
							    for (i=0;i<N;i++) {
									       if (idProducte==productes[i].idProveidor) {
														       return productes[i].idProveidor;
													              }
									      }
							   return -1;
							 }

int numeroProductesSubministraProveidor(int idProveidor, producte productes[N]) {
										  int i;
							                          for (i=0;i<N;i++) {
									                             if (idProveidor==productes[i].idProveidor) {
														               return productes[i];
													                      }
									                            }
										}

int proveidorsSenseProductes(proveidor proveidors[P], producte productes[N]) {
									      int i;
							                      for (i=0;i<P;i++) {
									                         int j;
												 for (j=0;j<N;j++) {
														    if(proveidors[j].id==){
															 }
													           }
									                        }
										       return 0;
									     }
