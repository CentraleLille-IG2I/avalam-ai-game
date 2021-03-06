#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

#include "../GraphicComponent/GraphicComponent.class.h"
#include "../../SDL2/SDL.h"
#include "../Emplacement/Emplacement.class.h"
#include "../Window/Window.class.h"
#include "Display.class.h"

// include global constants
#include "../../config/constants.h"

Display::Display(int set_x, int set_y, int set_width, int set_height, Window* window) {
	components = (GraphicComponent**) malloc(sizeof(GraphicComponent*));
	size = 0;
	x = set_x;
	y = set_y;
	width = set_width;
	height = set_height;
	renderer = SDL_CreateRenderer(window->window, -1, SDL_RENDERER_ACCELERATED);
	if(renderer == NULL)
		printf("Erreur : Renderer non créé\n");
};

Display::Display(Window* window) {
	renderer = SDL_CreateRenderer(window->window, -1, SDL_RENDERER_ACCELERATED);
	if(renderer == NULL)
		printf("Erreur : Renderer non créé\n");
};

Display::~Display() {};

/*int Display::printGridToConsole(Emplacement grille[TAILLE][TAILLE]) {
	printf("=========================\n");
	printf("======== PLATEAU ========\n");
	printf("=========================\n");
	int x,y;
	int score[2] = {0, 0};
	printf("=    ==0== ==1== ==2== ==3== ==4== ==5== ==6== ==7== ==8==  =\n");
	for (y = 0;y < TAILLE; ++y)
	{
		printf("= %d: ", y);
		for (x = 0; x < TAILLE; ++x)
		{
			if (grille[x][y].valeur != 2) {
				(grille[x][y].valeur)?printf("\033[31m"):printf("\033[32m");
				printf("(%d:%d) ", grille[x][y].valeur, grille[x][y].hauteur);
				printf("\033[39m");
				score[grille[x][y].valeur]+=grille[x][y].hauteur;
			}
			else
				printf("      ");
		}
		printf(" =\n");
	}
	printf("==== 0 : %d | 1 : %d ====\n", score[0], score[1]);
	return 0;
}*/

/*Display* destroyRenderer(SDL_Renderer *renderer){
	SDL_DestroyRenderer(renderer);
	return NULL;
}*/

Display* Display::initWindow() { //TODO merge to initRenderer();
	bool error = false;
	//initRenderer(); 
		/*
			 SDL initialisation de la fenêtre

			 Mettre error = true s'il y a eu une erreur
			 				(qui empeche de continuer)

		*/

	if(error)
		return NULL;
	return this;
};

int Display::update() {
	//Move to Window class
	SDL_Event event;
	if(event.type == SDL_MOUSEBUTTONUP){
		GraphicComponent* target = getTargeted(event.button.x, event.button.y);
		if(target == NULL)
			return -1;
		else 
			target->onClick();
	}

	if(updateWindow() == NULL)
		return -1;

	return 0;
}

Display* Display::updateWindow() {
	bool error = false;
		// SDL clear la fenetre

	for (int i = 0; i < size; ++i)
	{
			// Ajouter le components[i] à la fenetre
			// error = true si erreur
	}

	if(error)
		return NULL;
	return this;
};


GraphicComponent* Display::addComponent(GraphicComponent* componentToAdd) {
	components = (GraphicComponent**) realloc(components, sizeof(GraphicComponent*) * size + 1);
	components[size] = componentToAdd;
	//printf("Component [%d;%d] has been added to display [%d;%d] (%d:%d) [size : %d]\n", components[size]->x, components[size]->y, x, y, width, height, size);
	return components[size++]; //size is incremented after he gets injected as index of array (post inc)
};

GraphicComponent* Display::getTargeted(int mouse_x, int mouse_y) {
	/*if(mouse_x < x || mouse_x > x+width || mouse_y < y || mouse_y > y+height)
		return NULL;
	else
		for (int i = 0; i < size; ++i) {
			if(mouse_x < components[i]->x || mouse_x > components[i]->x+components[i]->width || mouse_y < components[i]->y || mouse_y > components[i]->y+components[i]->height)
				continue;
			else
				return components[i];
		}*/
	return NULL;
}

#endif