#include <stdio.h>

void affiche_Nombre (int no);

int main(){
 int a = 12;
 affiche_Nombre (a);
printf("Le nombre a est : %d\n",a);

return 0;
} 
void affiche_Nombre (int no) {
 no = no +1;
 printf ("Le nombre no est : %d\n",no);
}
