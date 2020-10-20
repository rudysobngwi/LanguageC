#include <stdio.h>

int carre (int val) ;

int main(){
 int val_retour = 0;
// int entier=100; 
 val_retour = carre (100);
 printf("Le carré de 2 est : %d\n",val_retour);

return 0;
} 
int carre (int val) {
 int valeur = 0;

 valeur = val * val;
 return valeur;
} 
