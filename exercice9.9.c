#include <stdio.h>

#define LIGNES 5
#define COLONNES 10

int main()
{
    int tab[LIGNES][COLONNES];
    int i=0, j= 0; 
    //int j = 0;
    /*for ( int i =0; i<LIGNES ; ) {
	for ( int j = 0; j< COLONNES ; ) {
		tab[i][j]=0;
		j++;
	}
	i++;
    }*/

    while ( i < LIGNES ) {
	    //printf("i=%d\n",i); 
      j=0;	    
      while( j < COLONNES ){
	   // printf("j=%d\n",j); 
              tab[i][j]=0; 
	       j++;
      }
      i++;
    }
    for ( int l = 0 ; l < LIGNES ; l++ ){
	    printf("ligne %d: ", l);
	    for ( int c = 0 ; c < COLONNES; c++ ){
	       printf("%d ", tab[l][c]);
	    }
	    printf("\n");
    }
    printf("Avant i=%d\n", i);
    for ( i = 0; i < LIGNES; i++); 
    printf("Apres i=%d\n", i);

    {
       printf("Avant j=%d\n", j);
	//for (j = 0; j< COLONNES; j++);
	j =10;
       printf("Apres j=%d\n", j);
	scanf("%d", &tab[i-1][j-1]);
	printf("\n");
    }
    printf("i=%d , j=%d\n", i, j);
    //printf("tab[i][j]= %d\n", tab[i][j]);

    for ( int l = 0 ; l < LIGNES ; l++ ){
	    printf("ligne %d: ", l);
	    for ( int c = 0 ; c < COLONNES; c++ ){
	       printf("%d ", tab[l][c]);
	    }
	    printf("\n");

    }
    return 0;
}
