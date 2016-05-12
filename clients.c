#include "clients.h"

void main(){
		inicialitzaClientsExemple(1);
		emailClient(1);
}

void inicialitzaClientsExemple(int exemple, client clients[C]) {
	// <2, “practica@botiga.com”> <1,”c@botiga.com”> <7,”programando@c.com”>
	// Inicialitcem a -1 per indicar que no hi ha informació
	int i;
	for (i=0; i<C; i++) {
		clients[i].id = -1;
		clients[i].email = "";
	}

	if (exemple == 1) {
		clients[0].id = 2;
		clients[0].email = "practica@botiga.com";

		clients[1].id = 1;
		clients[1].email = "c@botiga.com";

		clients[2].id = 7;
		clients[2].email = "programando@c.com";
	}

	if (exemple == 2) {
		clients[0].id = 2;
		clients[0].email = "practica@botiga.com";

		clients[1].id = 1;
		clients[1].email = "c@botiga.com";

		clients[2].id = 7;
		clients[2].email = "programando@c.com";	
	}

}

char* emailClient(int idClient, client clients[P]){
						    int i;

						    for (i=0; i<P; i++) {
	                                                                 if(idClient==clients[i].id){
											              return clients[i].email;
									       			    }
                                                                        }
							return "\0";
						  }
