#include<stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include<SDL/SDL_audio.h>
#include "coin.h"

void init_coin(coin *c)
{



	c->image=IMG_Load("jeton.png");
   if  ( c->image ==  NULL )  { 
	         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
	         exit ( 1 ); 
	     } 
	c->pos.x=50;
	c->pos.y=10;
	c->pos.w= c->image->w;
	c->pos.h= c->image->h;


	

}
void affiche_coin(coin *c,SDL_Surface *screen)
{   
SDL_SetColorKey(c->image,SDL_SRCCOLORKEY,SDL_MapRGB(c->image->format,255,255,255));
SDL_BlitSurface(c->image, NULL,screen, &c->pos);

}

