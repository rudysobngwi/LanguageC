#include <stdio.h>

int main()
{

    int valeur1;
    int valeur2;

    printf("Entrez première valeur: ");
    scanf("%d", &valeur1);
    printf("Entrez deuxième valeur : ");
    scanf("%d", &valeur2);
    if ((valeur1 == 0) && (valeur2 == 0)) {
	printf("les 2 valeurs sont égales à 0");
    } else if ((valeur1 == 0) || (valeur2 == 0)) {
	printf("valeur 1 ou valeur2 vaut 0 ");
    } else if (valeur1 == valeur2) {
	printf("les 2 valeurs sont égales");
    } else if (valeur1 < valeur2) {
	printf("IF La plus grande valeur est : %d\n", valeur2);
    } else {
	printf("ELSE La   plus grande valeur est : %d\n", valeur1);
    }

    return 0;
}
