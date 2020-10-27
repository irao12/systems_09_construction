#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"

struct pokemon *new_pokemon(char * n, int l, int h, char* d){

  struct pokemon *np;

  np = malloc(sizeof(struct pokemon));
  strncpy(np->name, n, sizeof(np->name)-1);
  np -> level = l;
  np -> hp = h;
  strncpy(np->dex_num, d, sizeof(np->dex_num)-1);

  return np;
}

void change_pokemon (struct pokemon* pokepal, char* new_name, int new_level, int new_hp, char* new_dex_num){
    strncpy(pokepal->name, new_name, sizeof(pokepal->name)-1);
    pokepal -> level = new_level;
    pokepal -> hp = new_hp;
    strncpy(pokepal->dex_num, new_dex_num, sizeof(pokepal->dex_num)-1);
}

void release_pokemon(struct pokemon* pokepal){
    printf("Released %s! Goodbye!", pokepal->name);
    free(pokepal);
}

void print_pokemon(struct pokemon *pokepal){
  printf("Pokedex Number: %s\nLevel %d %s\nHP: %d\n",
      pokepal -> dex_num,pokepal->level,pokepal->name,pokepal->hp);
}
