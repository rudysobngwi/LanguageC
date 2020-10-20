#include <stdio.h>

int main(void) {
 char line[8];
 printf ("Saisissez une chaîne de caractère :\n");
 gets (line);
 printf ("\nLa chaîne saisie est : \n%s\n",line);
return 0;
} 
