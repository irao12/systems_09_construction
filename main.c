#include <stdio.h>
#include "pokemon.h"
#include <stdlib.h>

int main(){

   struct pokemon* partner;
   struct pokemon* partner_2;
   struct pokemon* partner_3;
   struct pokemon* partner_4;

   partner = new_pokemon("Charmander", 5, 30, "004");
   partner_2 = new_pokemon("Bulbasaur",5, 30, "001");
   partner_3 = new_pokemon("Squirtle",5, 30, "007");
   partner_4 = new_pokemon("Rattata", 5, 25, "019");

   printf("My Team:\n");
   print_pokemon(partner_2);
   print_pokemon(partner);
   print_pokemon(partner_3);
   print_pokemon(partner_4);

   printf("\nCharmander evolved!\n");
   change_pokemon(partner, "Charmeleon", 16, 80, "006");
   print_pokemon(partner);
   printf("\n");

   release_pokemon(partner_4);

   free(partner);
   free(partner_2);
   free(partner_3);

  return 0;
}
