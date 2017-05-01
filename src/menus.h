/*
 * menus.h
 *
 *  Created on: 16 avr. 2017
 *      Author: Jerem
 */

#ifndef SRC_MENUS_H_
#define SRC_MENUS_H_

#include <SDL2/SDL.h>
#include "const.h"
#include "button.h"

Clickable* clickableList;
short menuNumber;
short buttonNumber;

/**
 * Cree tous les boutons du menu en fonction de leur image, de la position du premier bouton, de leur espacement entre eux et de leur fonction
 */
void CreateButtons(const char* [buttonNumber], const char* [buttonNumber], void (*[buttonNumber])(SDL_Renderer**), Clickable*, SDL_Renderer**, short, int, int, int, int, ButtonType, char*);

/**
 * Affiche une liste de boutons en fonction des espaces entre eux
 */
void DisplayButtons(SDL_Renderer**, Clickable*, short);

/**
 * Boucle d'interractions avec la fenetre du jeu
 */
void eventLoop(Clickable*);

/**
 * Affichage et interractions avec le menu pause
 */
void OpenOptionsMenu(SDL_Renderer**);

/**
 * Affichage et interractions avec le menu de sauvegarde
 */
void OpenSaveMenu(SDL_Renderer**);

/**
 * Affichage et interractions avec le menu de chargement de partie
 */
void OpenLoadMenu(SDL_Renderer**);

/**
 * Affichage et interractions avec le menu des scores
 */
void OpenScoreMenu(SDL_Renderer**);

/**
 * Change la liste des boutons qui sont clickable dans le menu courant
 */
void AllocationClickableList();

#endif /* SRC_MENUS_H_ */
