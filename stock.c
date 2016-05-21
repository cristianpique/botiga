#include "stock.h"

void inicialitzaStockExemple(int exemple, int stock[N+N]) {
	// 1 7 3 3 5 4 2 0 6 8
	// Inicialitcem a -1 per indicar que no hi ha informació
	int i;
	for (i=0; i<N+N; i++) {
		stock[i] = -1;
	}

	if (exemple == 1) {
		stock[0]= 1;
		stock[1]= 7;
		stock[2]= 3;
		stock[3]= 3;
		stock[4]= 5;
		stock[5]= 4;
		stock[6]= 2;
		stock[7]= 0;
		stock[8]= 6;
		stock[9]= 8;
	}

	if (exemple == 2) {
		stock[0]= 1;
		stock[1]= 7;
		stock[2]= 3;
		stock[3]= 3;
		stock[4]= 5;
		stock[5]= 4;
		stock[6]= 2;
		stock[7]= 0;
		stock[8]= 6;
		stock[9]= 8;
	}
}

int quantitatProducteEnStock(int idProducte, int stock[N+N]){
								int i;
								for (i=0;i<N+N;i++) {
										     if(idProducte=){
												      return stock[i];
												    }
										    }
									  return -1;
							    }

int existeixProducte(int idProducte, int stock[N+N]) {
							int i;

						    	for (i=0;i<N+N;i++) {
	                                                                     if(idProducte==stock[i]){
												      return 1;
									       			     }
									    }
							           return 0;
						     }

void modificaStock(int idProducte, int novaQuantitat, int stock[N+N]) {
									int i;
							       
									 for (i=0;i<N+N;i++){
	                                                                                     if(idProducte==stock[i]){
												                      stock[i]=novaQuantitat;
									       			                     }
										            }
								      }

int quantitatProducteEnStock(int idProducte, int stock[N+N]) {
							      int i;
							       
							      for (i=0;i<N+N;i++){
	                                                                          if(idProducte==stock[i]){
												           return stock[i];
									       			          }
										 }
							               return -1;
							     }
