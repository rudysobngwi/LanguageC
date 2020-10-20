#include <stdio.h>

int maximum (int valeur1, int valeur2) {
 int max;
 if (valeur1<valeur2) {
   printf("passe par if: ");
   max=valeur2; 
 }
 else if ( valeur1>valeur2 ) { 
   printf("passe par else if: ");
   max=valeur1;
 }
else { 
	max = valeur1; 
	printf("passe par else: ");
}

 return max;
}

int minimum (int valeur1, int valeur2) {
 int min;
 if (valeur1<valeur2) {
   printf("passe par if: ");
  min=valeur1; 
 }
 else if ( valeur1>valeur2 ) { 
   printf("passe par else if: ");
   min=valeur2;
 }
else { 
        min = valeur1; 

	printf("passe par else: ");
}

 return min;
}

int main(){
 printf ("max des 2 valeurs : %d\n",maximum(100,200));
 printf ("max des 2 valeurs : %d\n",maximum(200,100));
 printf ("max des 2 valeurs : %d\n",maximum(100,100));
 printf("\n Minimum \n");
 printf ("min des 2 valeurs : %d\n",minimum(100,200));
 printf ("min des 2 valeurs : %d\n",minimum(200,100));
 printf ("min des 2 valeurs : %d\n",minimum(100,100));
return 0;
} 
