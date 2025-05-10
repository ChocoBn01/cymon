#include "Biblio_lin.h"
#include "combat.h"
#include "creapers.h"
#include "affichagevs.h"
int main(){
    srand(time(NULL));
    int num=1;
    int mode=0;
    int* adr=&num;
    Pokemon** p1;
    Pokemon** p2;
    SDL_Window* window2 = NULL;
    SDL_Renderer* renderer2 = NULL;
    SDL_Surface* surface2 = NULL;
    SDL_Surface* icon2 = NULL;
    SDL_Texture* texture2_2 = NULL;
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    if (IMG_Init(IMG_INIT_PNG) == 0) {
        printf("Erreur IMG_Init : %s\n", IMG_GetError());
        exit(EXIT_FAILURE);
    }
    aff_fenetre(1, window2, renderer2, surface2, icon2, texture2_2);
    sdl_scanf_int(1);
    close_sdl(surface2, window2, renderer2, texture2_2, icon2);
    aff_fenetre(2, window2, renderer2, surface2, icon2, texture2_2);
    mode=sdl_scanf_int(2);
    close_sdl(surface2, window2, renderer2, texture2_2, icon2);
    if(mode==2){
        SDL_Delay(100); // 100 ms de pause
        p1=create_team_joueur(adr, 2);
        SDL_Delay(100); // 100 ms de pause
        p2=create_team_joueur(adr, 3);
    }
    else if(mode!=2){
        SDL_Delay(100); // 100 ms de pause
        p1=create_team_joueur(adr, 1);
        printf("ok\n");
        p2=create_team_ordi(adr);
        printf("ok\n");
    }
    printf("\nOK");
    fight(p1, p2, mode);
    IMG_Quit();
    SDL_Quit();
}