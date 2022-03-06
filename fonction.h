#ifndef perso_H_INCLUDED
#define perso_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "utilitaire.h"

typedef struct {

	SDL_Rect position;//yekhy madame moushe nest7ako l position mta3 l personne khw ?
	SDL_Rect frame;
	SDL_Surface *image;
	//int curframe;
	Text vie;
	int direction; 
	Text score; 
        //int running;
        //int previousmvt;
	double acceleration;
	double decelere;
	double vitesse;
	//double v_x;
	//double v_grav ;
	//double v_saut ;
	//double v_y ;
	
}Personne;


void initPerso(Personne *p);
void afficherPerso (Personne p,SDL_Surface *screen);
void deplacerPerso(Personne *p ,SDL_Surface *screen,int dt);
void animerPerso(Personne *p ,SDL_Surface *screen);
void saut(Personne *p);
void freesurface(SDL_Surface *image,SDL_Surface *screen);



#endif
