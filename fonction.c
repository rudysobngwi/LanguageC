#include </usr/include/stdio.h>
// entete, declaration, signature de la fonction somme
int somme( int premier, int deuxieme); 
int somme3( int premier, int deuxieme, int troisieme); 
void fin();

/* la fonction principale  et obligatoire*/
int main(){
int resultat = somme(20, 10);
printf("resultat somme(20, 10) = %d\n", resultat);
printf("resultat de somme(100, 200) = %d\n", somme(100, 200) );
printf("resultat de somme(1000, 2000) = %d\n", somme(1000, 2000) );
printf("resultat de somme(1, 2) = %d\n", somme(1, 2) );
printf("resultat de somme(30, 70) = %d\n", somme(30, 70) );
printf("resultat de somme(-1, 1) = %d\n", somme(-1, 1) );

printf("RESULTAT VAUT TOUJOURS: %d\n", resultat);
resultat = somme3(1000, 1000, 3000);
printf("RESULTAT VAUT MAINTENANT: %d\n", resultat);
fin();
return 0;
}

/* corps */
int somme( int premier, int deuxieme){
 printf("Je calcule la somme de %d et de %d \n", premier, deuxieme);
 int resultat=0;
 resultat = premier + deuxieme ;
 return resultat; 
}
// corps 
int somme3( int premier, int deuxieme, int troisieme){
 printf("Je calcule la somme de %d et de %d et de %d \n", premier, deuxieme, troisieme);
    //return  premier + deuxieme + troisieme ;
    //return  somme(premier,deuxieme) + troisieme; 
             return  somme(somme(premier,deuxieme),troisieme);
 } 
/* implementation */
void fin(){
printf("\nLe programme se termine\n");
}
