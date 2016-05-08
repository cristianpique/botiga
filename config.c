#include "config.h"

/***
 * Format del fitxer de configuració (sense espais)
 * 
 * stock=/path/to/file
 * productes=/path/to/file
 * clients=/path/to/file
 * proveidors=/path/to/file
 * comandes=/path/to/file
 * sortida=/path/to/file
 * 
 * Llegeix l'arxiu de configuració i retorna una estructura config amb els arxius de dades
 * 
 * typedef struct 
 * {
 *  char stock[MAX_BUFFER];
 *  char productes[MAX_BUFFER];
 *  char clients[MAX_BUFFER];
 *  char proveidors[MAX_BUFFER];
 *  char comandes[MAX_BUFFER];
 *  char sortida[MAX_BUFFER];
 * }config;
 *
 **/
config llegirArxiuConfiguracio(char* filename) {
//https://www.pacificsimplicity.ca/blog/simple-read-configuration-file-struct-example

        config paths;
        FILE *file = fopen (filename, "r");

        if (file != NULL)
        { 
                char line[MAX_BUFFER];

                while(fgets(line, sizeof(line), file) != NULL)
                {
                        char *cfline;
                        char slug[MAX_BUFFER];
                        cfline = strstr((char *)line,DELIMITER);
                        cfline = cfline + strlen(DELIMITER);
                        
                        // Clear slug
                        memset(slug,'\0',MAX_BUFFER);
                        // Copy slug until the first ocurrence of delimiter
                        memcpy(slug,line,strcspn(line,DELIMITER));
                        // printf("%s\n",slug);

                        if (strcmp(slug, "stock") == 0){
                                memcpy(paths.stock,cfline,strlen(cfline)-1);
                                // printf("%s",paths.stock);
                        } 
                        if (strcmp(slug, "productes") == 0){
                                memcpy(paths.productes,cfline,strlen(cfline)-1);
                                // printf("%s",paths.productes);
                        } 
                        if (strcmp(slug, "clients") == 0){
                                memcpy(paths.clients,cfline,strlen(cfline)-1);
                                // printf("%s",paths.clients);
                        } 
                        if (strcmp(slug, "proveidors") == 0){
                                memcpy(paths.proveidors,cfline,strlen(cfline)-1);
                                // printf("%s",paths.proveidors);
                        }
                        if (strcmp(slug, "comandes") == 0){
                                memcpy(paths.comandes,cfline,strlen(cfline)-1);
                                // printf("%s",paths.comandes);
                        }
                        if (strcmp(slug, "sortida") == 0){
                                memcpy(paths.sortida,cfline,strlen(cfline)-1);
                                // printf("%s",paths.sortida);
                        }

                } // End while
                fclose(file);
        } // End if file
        
        return paths;
}