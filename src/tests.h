/*
 * main.c
 *
 *  Created on: 14 mars 2017
 *      Author: Olivier
 */

#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include "const.h"
#include <unistd.h>
#include "time.h"

// Affiche le plateau de jeu stocke sous forme matricielle
void testBoardInit(short matrice[NB_ROW][NB_HOLES]);

// Permet de tester la sauvegarde des parametres d'une partie dans le fichier "save.txt"
void testSave();

#endif // TESTS_H
