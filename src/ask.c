/*
 * ask.h
 * Gere tout ce qui est demande d'information a l'utilisateur
 * Created on: 19 mars 2017
 *     Author: Olivier
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include "ask.h"
 #include "const.h"
 #include "string.h"

int askCurrent() {

    int ans = 0;

    do {
        printf("Who is the current player ? (1/2)\n");
        scanf("%d", &ans);
    } while (ans != 1 && ans != 2);
    //printf("The current player is %d\n", ans);
    return ans;
 }

void askName(char joueur[NAME_PLAYER_SIZE]) { // prend game.joueur1 en parametre (string, donc pointeur)

    char input[NAME_PLAYER_SIZE];

    do {
        printf("Entree le nom du joueur:\n");
        scanf("%s", input);
    } while (strlen(input) > NAME_PLAYER_SIZE);
    //printf("Le nom choisit est: %s\n", input);

    joueur = input;
}
