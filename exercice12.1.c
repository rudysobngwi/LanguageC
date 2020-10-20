#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONGUEUR_MAX_PHRASE 100
#define NOMBRE_MAX_PHRASES 20

int main(){
 char phrase [LONGUEUR_MAX_PHRASE];
 char *phrases [NOMBRE_MAX_PHRASES];

int i;

for (i=0; i<NOMBRE_MAX_PHRASES; i++){
 printf("Entrez une phrase SVP ...");
 gets(phrase);

phrases[i] = (char *) malloc(strlen(phrase)+1);

if (phrases[i]!=NULL){
 strcpy(phrases[i],phrase);
}
else {
 printf("Attention! Plus assez place en mémoire !!! \n");
 exit(-1);
 }
}

return 0;
} 
