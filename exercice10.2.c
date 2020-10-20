#include <stdio.h>
#include <stdlib.h>

int main(){
 FILE *p_fichier;
 char nom_fichier[20], nom_personne[20];
 int i, nbr_enregistrements;
 printf("Quel est le nom du fichier à créer ?");
 scanf ("%s",nom_fichier);

p_fichier = fopen(nom_fichier,"w");
if (p_fichier == NULL) {
printf("Erreur de création du fichier \n");
exit(-1);
}

printf("Nombrede personnes à stocker ? : ");
scanf("%d",&nbr_enregistrements);

for (i=0; i<nbr_enregistrements; i++) {
 printf("Entrez le nom de la personne : ");
 scanf("%s",nom_personne);
 fprintf(p_fichier, "%s\n",nom_personne);
}
fclose(p_fichier);

p_fichier = fopen(nom_fichier,"r");
if (p_fichier == NULL){
printf("\aErreur d'ouverturesur le fichier\n");
exit(-2);
}

while (!feof(p_fichier)) {
 fscanf(p_fichier,"%s",nom_personne);
 printf("Nom : %s\n",nom_personne);
}
fclose(p_fichier);
return 0;
} 
