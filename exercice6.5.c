#include <stdio.h>

int main()
{
    int nbre = 0;

    printf("Tape un chiffre impair pour arreter le programme \n");
    //while ((nbre != 1) && (nbre != 3) && (nbre != 5) && (nbre != 7)
//	   && (nbre != 9))
    while ( nbre % 2 == 0)
	scanf("%d", &nbre);

    return 0;
}
