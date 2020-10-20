#include <stdio.h>



int main(){
	char caratereAafficher='@';
	for ( int ligne=1; ligne <=5 ; ligne++ ){ 
		for( int colonne =1; colonne <= ligne; colonne++){
			printf("%c",caratereAafficher);
		}
		printf("\n");
	}

	printf("Boucle for simple\n");
	for (char lettre='a'; lettre <='z' ; lettre++){
		printf("%c ", lettre);
	}
	int limit = 200;
	printf("\nLes nombres pairs de 0 à %d\n",limit);
	for(int nombrePair=0; nombrePair <= limit ; nombrePair = nombrePair +2 ) {
		printf("%d ", nombrePair);
	}

return 0;
} 
