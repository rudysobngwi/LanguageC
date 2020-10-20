#include <stdio.h>

void calcule_double (int x) {
x=x+x ;
}

int main(){
 int i=2;
 calcule_double(i);
 printf("i vaut à présent :%d",i);

return 0;
} 
