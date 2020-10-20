#include <stdio.h>

int calcule_double (int a);

int main(){
 int i=21;
 i=calcule_double(i);
 printf ("i vaut à présent :%d",i);
return 0;
} 
int calcule_double (int a) {
a=a+a;
return a;
}
