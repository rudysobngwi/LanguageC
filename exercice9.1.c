#include <stdio.h>
#include <string.h>

int main(){
 char chaineDeCaractere[] = "toto";
 printf("La longueur de %s est : %d",chaineDeCaractere,strlen(chaineDeCaractere) ) ;
 printf("\nch = %s \n", chaineDeCaractere);
 for ( int position =0; position < strlen(chaineDeCaractere); position++) {
	printf("%c ", chaineDeCaractere[position]);
 }

return 0;
} 
