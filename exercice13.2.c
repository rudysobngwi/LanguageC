#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 int nb_hasard=0;
 int i;

 int nb_pairs=0; 
 int nb_impairs=0;

 srand (time (NULL));

 i=0;
 do {
  nb_hasard = rand ();
  if (nb_hasard % 2==0)
   nb_pairs=nb_pairs+1;
  else 
   nb_impairs=nb_impairs+1;
  i++;
  }
  while (i<1000);
  
  printf("Proportion de nombres pairs=%f\n",(float) nb_pairs/i);
  printf("Proportion de nombres impairs=%f\n",(float) nb_impairs/i);

return 0;
} 
