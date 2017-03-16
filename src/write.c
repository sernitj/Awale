/*
 * write.h
 *  Sauvegarde des differents parametres dans un fichier externe et lecture
 *  Created on: 16 mars 2017
 *      Author: Olivier
 */

 #include "write.h"

  void initalize (char* directory[NAME_FILE_SIZE]) { // demander confirmation (do, while)
    FILE* file = NULL;
    file = fopen(directory, "w");

    if (file != NULL) {
        fseek(file, 0, SEEK_SET); // on place le curseur au debut
        fputs("", file); // on ecrit la chaine de caractere vide
        fclose(file);
    }
    else {
        printf("Impossible d'ecrire dans le fichier");
    }
 }

 void write_new_ligne (char* directory[NAME_FILE_SIZE], char* chaine[LINE_SIZE]) {

    FILE* file = NULL;
    file = fopen(directory, "a"); // append, pour lire ou ecrire a la fin d'un fichier

    if (file != NULL) {
        fputs(chaine, file);
        fclose(file);
    }
    else {
        printf("Impossible d'ecrire dans le fichier");
    }
 }

 void affiche(char* chaine) {
    int i;
    for (i=0; i<2; i++)
        printf("%c", chaine[i]);
 }

 void save (char* directory[NAME_FILE_SIZE], Game* game) {

    FILE* file = NULL;
    file = fopen(directory, "w"); // append, pour lire ou ecrire a la fin d'un fichier

    if (file != NULL) {

        fprintf(file, "%d\n", game -> gameNumber); // ecrit un int dans le fichier
        fprintf(file, "%s %s\n", game -> joueur1, game -> joueur2);
        fprintf(file, "%d %d\n", game -> gain1, game -> gain2);

        int i, j;
        for (i=0; i<NB_ROW; i++) {
            for (j=0; j<NB_HOLES; j++)
                fprintf(file, "%d", game -> board_config[i][j]);
        }

        fprintf(file, "\n%f\n", game -> timeSpended);
        fprintf(file, "%hd\n", game -> currentPlayer);
        fclose(file);
    }
    else {
        printf("Impossible d'ecrire dans le fichier");
    }
 }


