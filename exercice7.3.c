#include <stdio.h>

int main(){
 int i;
 int j;
 for (i=0; i<5; i++){
  printf ("Je suis dans la boucle i, i vaut %d\n",i);

  for (j=3; j>0; j--){
   printf ("Je suis dans la boucle j, j vaut %d\n",j);
  }
}
return 0;
} 
