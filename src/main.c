/*
 * main.c
 *
 *  Created on: 1 mars 2017
 *      Author: Jerem
 */

#include <stdio.h>
#include <stdlib.h>
#include "SDL2/SDL.h"
#include "const.h"
#include "main.h"
#include "write.h"
#include "read.h"
#include "tests.h"

// short au lieu de int car faibles unitees
short board[NB_ROW][NB_HOLES];

// initialisation de la matrice
void boardInit() {
    short player;

    //error: 'for' loop initial declarations are only allowed in C99 or C11 mode
    int i; int j;
    for(i = 0; i < NB_ROW; i++)
    	for(j = 0; j < NB_HOLES; j++)
    		board[i][j] = NB_SEED_INIT;

    // on ne gere pas les erreurs d'entrees car ce sera des boutons
    printf("Quel joueur commence en premier ? (0/1)\n");
    scanf("%hd", &player); // % hd used for a short int
}

int main(int argc, char** argv) {
    //boardInit();

    SDL_Surface *screen;
    if( SDL_Init(SDL_INIT_VIDEO) == -1) {
        printf("Can't init SDL:  %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    atexit(SDL_Quit);
    screen = SDL_SetVideoMode(640, 480, 16, SDL_SWSURFACE);

    if(screen == NULL) {
        printf( "Can't set video mode: %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Delay(3000);

    return EXIT_SUCCESS;

    // =========== TESTS ==========

    /*
    char chemin[NAME_FILE_SIZE] = "saved.txt";

    char c1[LINE_SIZE] = "bonjour1\n";
    char c2[LINE_SIZE] = "bonjour2\n";
    char c3[LINE_SIZE] = "bonjour3\n";
    /*write_new_ligne(chemin, c1);
    write_new_ligne(chemin, c2);
    write_new_ligne(chemin, c3);
    //initalise(chemin);
    //readlines(chemin);
    //read_specific(chemin, 3);
    //testBoardInit(board);
    */
}
