#include <stdio.h>
#include <string.h>

int main(){
 char chaine1 [20]="Bonjour";
 char chaine2 [20]="Edouard";

 strncat (chaine1,chaine2,2); 

 printf ("chaine 1: %s\n",chaine1);
 printf ("chaine 2: %s\n",chaine2);

return 0;
} 
