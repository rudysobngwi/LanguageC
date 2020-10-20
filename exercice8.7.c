#include <stdio.h>

void avance_Position (int *pointeur_int); 

int main(){
 int x=100;

 printf("Position de départ : %d\n",x);

 avance_Position (&x);

 printf("Nouvelle position : %d\n",x); 

return 0;
} 


void avance_Position (int *pointeur_int) {
 *pointeur_int = *pointeur_int + 2;
} 
