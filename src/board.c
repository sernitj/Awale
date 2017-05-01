/*
 * main.c
 *
 *  Created on: 15 mars 2017
 *      Author: Olivier
 *	Completed on : 
 *		by : Valentin
 */

#include <stdlib.h>
#include <stdio.h>

#include "game.h"
#include "movements.h"
#include "board.h"

void boardInit(short board[][NB_HOLES]) {
    short i, j;

    for(i = 0; i < NB_ROW; i++)
    	for(j = 0; j < NB_HOLES; j++)
    		board[i][j] = NB_SEED_INIT;
}

void CreateClickableBoard(Clickable* clickableList, SDL_Renderer** renderer) {
	short i;
	void (*buttonFunction[NB_ROW * NB_HOLES])(SDL_Renderer** renderer) = {button11, button12, button13, button14, button15, button16, button21, button22, button23, button24, button25, button26};

	for(i = 0; i < NB_ROW * NB_HOLES; i++)
		CreateNewButton(HINIT + HSPACE * (i - (i / NB_HOLES) * NB_HOLES), VINIT + (i / NB_HOLES) * VSPACE, "sprites/hole3.png", "", clickableList, renderer, buttonFunction[i], 1, i + 1, BUTTON_TYPE_WITH_SURFACE, "0");

	CreateNewButton(SCREEN_WIDTH - 5, 5, "sprites/options.png", "sprites/optionsOver.png", clickableList, renderer, OpenOptionsMenu, 4, 13, BUTTON_TYPE_WITH_SURFACE_OVER, "");
}

void button11(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 0, 0);
}

void button12(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 0, 1);
}

void button13(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 0, 2);
}

void button14(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 0, 3);
}

void button15(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 0, 4);
}

void button16(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 0, 5);
}

void button21(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 1, 0);
}

void button22(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 1, 1);
}

void button23(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 1, 2);
}

void button24(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 1, 3);
}

void button25(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 1, 4);
}

void button26(SDL_Renderer** renderer) {
	distributeSeeds(game.board_config, 1, 5);
}
