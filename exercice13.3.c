#include <stdio.h>

int main(){
 int ligne, colonne;

 for (ligne=1;ligne<=10;ligne++) {
  for (colonne=1;colonne<=10;colonne++) {
   printf("%4d",ligne*colonne);
  }
  printf("\n");
 }
return 0;
} 
