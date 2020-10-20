#include <stdio.h>

int main(){
 int droite = 20;
 int gauche = 20;
 int *ptr_droite;
 int *ptr_gauche;
 int somme1 = gauche + droite ;
 int somme2 ;

printf("Résultat de la Somme1 %d\n",somme1);
ptr_droite = &droite; 
ptr_gauche = &gauche;
printf("Valeur de ptr_droite : %d\n",*ptr_droite);
printf("Valeur de ptr_gauche : %d\n",*ptr_gauche);
printf("ADRESSE de ptr_droite : %p\n",ptr_droite);
printf("ADRESSE de ptr_droite : %p\n",&droite);
printf("ADRESSE de ptr_gauche : %p\n",ptr_gauche);
printf("ADRESSE de ptr_gauche : %p\n",&gauche);

somme2= *ptr_gauche + *ptr_gauche;
printf("Résultat de la somme2 %d\n",somme2);
return 0;
} 
