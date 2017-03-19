/*
 *  game.h
 *  Initialise les parametres d'une nouvelle partie
 *  Created on: 18 mars 2017
 *      Author: Olivier
 */

#ifndef GAME_H
#define GAME_H

/**
 * Pour connaitre le numero de la partie a creer on regarde le nombre de partie creee
 * dans listGames.txt ie nb de lignes ecrites
 */
int whichNumber(char*);

/**
 * Initialisation du plateau de jeu avec selection du joueur et le nombre de graines par trou
 */
void boardInit(short[][NB_HOLES]);

/**
 * Initialise la struct game (a partir de rien ou d'une sauvegarde)
*/
void init_game(Game *game, struct tm *timer);


/**
* Pour lancer une initialisation de strcut game
*/
//void play():

#endif // GAME_H

