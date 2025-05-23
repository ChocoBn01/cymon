#ifndef COMBAT_H
#define COMBAT_H
float type_effect(Type atk, Type def);
void effect_status(Pokemon* poke, int* nbtour, SDL_Renderer* rend, SDL_Window* wind);
void aff_effect_atk(Competence_spe atk);
void aff_atk(Competence_spe atk);
void speedbarplus(Pokemon* un, Pokemon* deux, Pokemon* trois, Pokemon* quatre, Pokemon* cinq, Pokemon* six);
int plus1000(Pokemon un, Pokemon deux, Pokemon trois, Pokemon quatre, Pokemon cinq, Pokemon six);
Comp choix_atk(Pokemon* bu, SDL_Renderer* rend, SDL_Window* wind);
int attaque_esquivee(Comp atk, Pokemon* attaque, Pokemon* defend);
float degats(Pokemon* attaquant, Pokemon* defenseur, Comp atq, SDL_Renderer* rend, SDL_Window* wind);
void effet_spe(Pokemon** attaquant, Pokemon* defenseur, Comp atk, SDL_Renderer* rend, SDL_Window* wind);
Comp maj_damage(Pokemon* offense, Pokemon** adversaires, Pokemon** cible, SDL_Renderer* rend, SDL_Window* wind);
Comp choix_bot_spe(Pokemon* offense, Pokemon** adversaires, Pokemon** cible, int nb);
void fin_e_a_b(Pokemon* offense, Pokemon* cible, Comp choix, SDL_Renderer* rend, SDL_Window* wind);
void effect_atk_bot(Pokemon* offense, Pokemon** team, Pokemon** adversaires, SDL_Renderer* rend, SDL_Window* wind);
Pokemon* choix_target(Pokemon** team, Pokemon** opp, SDL_Renderer* rend, SDL_Window* wind);
void fin_e_a(Pokemon* offense, Pokemon* cible, Comp atk, SDL_Renderer* rend, SDL_Window* wind);
void effect_atk(Pokemon* offense, Pokemon** team, Pokemon** adversaires, Comp atk, SDL_Renderer* rend, SDL_Window* wind);
Pokemon* maj(Pokemon* un, Pokemon* deux);
Pokemon* maj6(Pokemon* un, Pokemon* deux, Pokemon* trois, Pokemon* quatre, Pokemon* cinq, Pokemon* six);
void cooldown1poke(Pokemon* poke);
int fight(Pokemon** player, Pokemon** bot, int mode, SDL_Renderer* rend, SDL_Window* wind);
#endif 
