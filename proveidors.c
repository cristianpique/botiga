#include "proveidors.h"

void inicialitzaProveidorsExemple(int exemple, proveidor proveidors[P]) {
	// <2, “2@proveidors.cat”> <8,”8@supplier.net”> <5,”hi@provider.com”>
	// Inicialitcem a -1 per indicar que no hi ha informació
	int i;
	for (i=0; i<P; i++) {
		proveidors[i].id = -1;
		proveidors[i].email = "";
	}

	if (exemple == 1) {
		proveidors[0].id = 2;
		proveidors[0].email = "2@proveidors.cat";

		proveidors[1].id = 8;
		proveidors[1].email = "8@supplier.net";

		proveidors[2].id = 5;
		proveidors[2].email = "hi@provider.com";
	}
	
	if (exemple == 2) {
		proveidors[0].id = 2;
		proveidors[0].email = "2@proveidors.cat";

		proveidors[1].id = 8;
		proveidors[1].email = "8@supplier.net";

		proveidors[2].id = 5;
		proveidors[2].email = "hi@provider.com";
	}
}

char* emailProveidor(int idProveidor, proveidor proveidors[P]) {
								for (i=0;i<P;i++) {
										   if (idProveidorproveidors[i].id==) {
                                                                                                                       return proveidors[i].email;
														      }
								      return "\0";
										  }
