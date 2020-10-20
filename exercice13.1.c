#include <stdio.h>
#define TAUX_DE_CONVERSION 6.55957

int main(){
 float montant_en_francs=0;

 while (montant_en_francs<=10) {
  printf ("%4.2f francs = %.3f euros\n",montant_en_francs,montant_en_francs/TAUX_DE_CONVERSION);
  montant_en_francs=montant_en_francs+0.5;
 }
return 0;
} 
