#ifndef POKEMON_H
#define POKEMON_H

struct pokemon {
  char name [128];
  int level;
  int hp;
  char dex_num [10];
};

struct pokemon * new_pokemon(char* n, int l, int h, char* d);

void change_pokemon (struct pokemon* pokepal, char* new_name, int new_level, int new_hp, char* new_dex_num);

void release_pokemon (struct pokemon* pokepal);

void print_pokemon(struct pokemon *pokepal);


#endif
