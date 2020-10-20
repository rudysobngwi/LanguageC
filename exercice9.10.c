#include <stdio.h>
#include <string.h>

int main(){
 char chaine1[81];
 char chaine2[81];
 
 printf("Veuillez entrer votre chaine de caractere :"); 
 scanf("%s",chaine1);

 strcpy (chaine2,chaine1);

 printf("chaine2 vaut: %s\n",chaine2);
 
 strcpy (chaine1,"");
 strcat(chaine1,"Pierre");
 printf ("Veuillez entrer votre chaine de caractere");
 
 scanf("%s",chaine2);
 strcat(chaine1,chaine2);
 strcat(chaine1,"Paul Jacques...");
 printf("chaine1 vaut: %s \n",chaine1);
return 0;
} 
