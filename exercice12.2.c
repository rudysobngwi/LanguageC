#include <stdio.h>

void calcule_double (int * pointeur_int) {
 * pointeur_int = (* pointeur_int) + (* pointeur_int);
}
void calcule_double1 (int  i) {
  i = i +  i;
}

main () {
 int i=2;
 calcule_double(&i);
 printf("i vaut à présent :%d\n",i);
 calcule_double1(i);
 printf("i vaut à présent :%d\n",i);
 calcule_double1(4);
return 0;
} 
