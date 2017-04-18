/*
 * movements.h
 *
 *  Created on: 8 mars 2017
 *      Author: Jerem
 */

#ifndef SRC_MOVEMENTS_H_
#define SRC_MOVEMENTS_H_
#include "const.h"

/**
 * Supprime les graines du trou selectionn� et retourne le m�me nombre de graines
 */
short removeSeeds(short[][NB_HOLES], const short, const short);

/**
 * Distribution des graines prises dans un trou dans les trous successifs
 * de facon inverse des aiguilles d'une montre
 */
void distributeSeeds(short[][NB_HOLES], const short, const short);

#endif
