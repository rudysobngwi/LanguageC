#include <stdio.h>

#define FALSE 0
#define TRUE 1
typedef struct {
 char nom [20];
 char prenom [20];
 int age;
 int  majeur;
} personne;

int main() {
 personne p;
 printf("Veuillez entrer le nom de la personne:");
 scanf("%s",p.nom);

printf("Veuillez entrer le prénom de la personne:");
scanf("%s",p.prenom);

printf ("Veuillez entrer l'âge de la personne:");
scanf("%d",&p.age);
if ( p.age < 18 ){
	p.majeur = FALSE;
}
else {  p.majeur = TRUE ;}
printf("Voici les caracteristiques de cette personne:\n");
printf("nom=%s\n",p.nom);
printf("prenom=%s\n",p.prenom);
printf("age=%d\n",p.age);
printf("majeur=%d\n",p.majeur);
return 0;
} 
