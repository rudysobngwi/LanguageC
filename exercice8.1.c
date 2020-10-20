#include <stdio.h>


int main(){
 char car='C';
 char *ptr_car; 

 printf ("Avant, le caractère est : %c\n",car);
 ptr_car = &car;
 *ptr_car = 'E';

printf("Après, le caractère est :%c\n\n",car);

printf("Cette modification est due à :\n");
printf("Adresse de car :%p\n",&car);
printf("Valeur de ptr_car: %p\n",ptr_car);

return 0;
} 
