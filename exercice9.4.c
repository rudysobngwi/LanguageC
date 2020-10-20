#include <stdio.h>
int main(){
 int i=0;
 int pos_tab=0;
 char tab_alpha[27];
 for ( i='A'; i<='Z'; i++) {
  tab_alpha[pos_tab]=i;
  pos_tab++;
}
tab_alpha[26]=0;
printf ("%s\n",tab_alpha);
 for ( int indice =0; indice < 27 ; indice++) {
  printf("%c ", tab_alpha[indice]);
}
return 0;
} 
