#include "botiga.h"

/***
 * Inicialitza les dades de la botiga
 * Aquesta funció permet passar un arxiu de configuració per a inicialitzar
 * la botiga, indicant les rutes als arxius amb la informació del stock, els
 * productes, els clients i els proveidors.
 * En cas d'existir un argument, aquest es l'arxiu de configuració.
 * Inicialitza també les estructures de sortida.
 **/
void inicialitzaBotiga(int argc, char* argv[], int stock[N+N], producte productes[N], client clients[C], proveidor proveidors[P], missatgeProveidors sortidaProveidors, missatgeClients sortidaClients) {

	int exemple = 1; // Trieu 1, per carregar l'exemple 1 // Trieu 2, per carregar l'exemple 2

	if (argc > 1)  { // Si hi ha un arxiu de configuració, llegeix les configuracions i carrega les dades

	} else { // El programa s'executa sense paràmetres // Mode de proves
		if (exemple == 1 || exemple == 2) {
			inicialitzaStockExemple(exemple, stock);
			inicialitzaProductesExemple(exemple, productes);
			inicialitzaClientsExemple(exemple, clients);
			inicialitzaProveidorsExemple(exemple, proveidors);
			// TODO Inicialitzar estructures de sortida
		} 
	}
}

/***
 * Processa les comandes que realitzen els clients
 * Aquesta funció es l'encarregada de llegir les comandes i processar-les
 * Permet que les comandes es llegeixen des de l'entrada estàndard o des de 
 * l'arxiu de configuració
 * En cas d'existir un argument, aquest es l'arxiu de configuració.
 * Si existeix l'arxiu de configuració llegeix les comandes de la ruta indicada
 * a l'arxiu de configuració, sino, les llegeix de l'entrada estàndard.
 * Si existeix l'arxiu de configuració imprimeix la sortida a l'arxiu de 
 * sortida indicat, sino, la imprimeix per la sortida estàndard.
 **/
void processaComandes(int argc, char* argv[], int stock[N+N], producte productes[N], client clients[C], proveidor proveidors[P], missatgeProveidors sortidaProveidors, missatgeClients sortidaClients) {

}

// gcc -o botiga botiga.c clients.c productes.c proveidors.c stock.c config.c
int main(int argc, char* argv[]) {

	config paths;
	int stock[N+N];
	producte productes[N];
	client clients[C];
	proveidor proveidors[P];

	missatgeProveidors sortidaProveidors;
	missatgeClients sortidaClients;

	// Aquest codi llegeix les rutes dels fitxers de la botiga a partir del fitxer de configuració
	
	/*
	if (argc > 1)  { // Si hi ha un paràmetre és l'arxiu de configuració
	    paths = llegirArxiuConfiguracio(argv[1]);

	    printf("%s\n",paths.stock);
	    printf("%s\n",paths.productes);
	    printf("%s\n",paths.clients);
	    printf("%s\n",paths.proveidors);
	    printf("%s\n",paths.comandes);
	    printf("%s\n",paths.sortida); 
	} 
	*/

	// Inicialitza stock, productes, clients, proveidors i els missatges de sortida
	inicialitzaBotiga(argc, argv, stock, productes, clients, proveidors, sortidaProveidors, sortidaClients);

	// Un cop inicialitzat podem llegir el fitxer que retorna la web i processar les comandes.
	processaComandes(argc, argv, stock, productes, clients, proveidors, sortidaProveidors, sortidaClients);

	int existeixProveidorSortida(int idProveidor, missatgeProveidors sortidaProveidors) {
											     int i;
											     for(i=0;i<sortidaProveidors;i++){
														 if(idProveidor==sortidaProveidors[i]){
																	      return 1;
																                       }
														     return 0;
												                              }
											    }

	int existeixClientSortida(int idClient, missatgeClients sortidaClients) {
										 int i;
										 for(i=0;i<sortidaClients;i++){
													       if(idClient==sortidaClients[i]){
																	      return 1;
																              }
												     return 0;
												              }
									        }
    
}
