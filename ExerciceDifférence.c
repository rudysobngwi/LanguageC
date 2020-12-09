#include </usr/include/stdio.h>

int difference( int premier, int deuxieme);
int main(){
int resultat = difference (20,10);
printf("Résultat de difference(20,10) = %d \n",resultat);
printf("Résultat de difference(200,100) = %d \n",difference(200,100) );
printf("Résultat de difference(2000,1000) = %d \n",difference(2000,1000) );

return 0;
} 
int difference (int premier, int deuxieme){
 printf("Je vais calculer la difference de %d et %d \n", premier, deuxieme);
 int resultat;
 resultat = premier - deuxieme;
return resultat;
}
