#include <stdio.h>
#include <string.h>

int main() {
		FILE* file;
		char* filename = "tokens.txt";
		int BUFFER = 1024;
		int i=0;

		file=fopen(filename,"r");
		
		if (file != NULL){
					char line [BUFFER];

					while(fgets(line,sizeof(line), file) != NULL) {
												i++;
										                printf("Lectura Linea: %d\n",1);
												printf("Contenido: %s\n",line);
											}
					printf("Total lineas: %d\n",i);
					fclose(file);
				  }
}
