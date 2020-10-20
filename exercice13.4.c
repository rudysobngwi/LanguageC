#include <stdio.h>
#define TAILLE_DU_TABLEAU 10

void saisie_des_elements_du_tableau(int t[], int n);
void tri_des_elements_du_tableau(int tab[], int taille);
void affiche_des_elements_du_tableau(int t[], int n);

int main()
{
    int tableau[TAILLE_DU_TABLEAU];
    for ( int indice = 0; indice < TAILLE_DU_TABLEAU ; indice ++ ) {

	    tableau[indice] =-1000;
    }
    saisie_des_elements_du_tableau(tableau, TAILLE_DU_TABLEAU);
    printf("Voici votre tableau NON trié :\n");
    affiche_des_elements_du_tableau(tableau, TAILLE_DU_TABLEAU);
    tri_des_elements_du_tableau(tableau, TAILLE_DU_TABLEAU);
    /* printf("Voici votre tableau trié :\n");
    affiche_des_elements_du_tableau(tab, TAILLE_DU_TABLEAU);*/
    return 0;
}

/* Procedure permettant la saisie d ubn tabeau de taille n*/
void saisie_des_elements_du_tableau(int tableau[], int taille_du_tableau)
{
    int i;
    for (i = 0; i < taille_du_tableau; i++) {
	printf("Element %d ", i + 1);
	scanf("%d", &tableau[i]);
    }

}

/* Procédure de tri */
void tri_des_elements_du_tableau(int tab[], int taille)
{
    int i=0, j=0;
    int temps;
    /* tri du tableau */
    for (; i < taille - 1; i++) {
	for (j = 0; j < taille - 1; j++) {
	    if (tab[j] > tab[j + 1]) {	/* échange de valeurs */
		temps = tab[j];
		tab[j] = tab[j + 1];
		tab[j + 1] = temps;
	    }
	}
    }
}

/* Procédure affichantun tableau de taille n */
void affiche_des_elements_du_tableau(int tableau[], int taille_du_tableau)
{
    int i=0;
    for ( ;i < taille_du_tableau; i++){ 
	printf("%d \t", tableau[i]);
   } 
    printf("\n");
}
