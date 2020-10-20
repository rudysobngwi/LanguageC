#include <stdio.h>
#include <math.h>

int carre( int x ) {
 return x*x;
}

int main(){
 int a = 0;
 int b = 0;
 double longueurhypothenus = 0.0;  
scanf ("%d",&a);
scanf ("%d",&b);
int carreDea= carre(a);
int carreDeb= carre(b);
int valeur=carreDea + carreDeb;
//longueurhypothenus=sqrt ( a*a  + b*b);
//longueurhypothenus=sqrt ( carre(a) + carre(b));
longueurhypothenus=sqrt ( valeur);

printf ("La  longueurhypothenus = %f ",longueurhypothenus ); 
//printf("a = %d et Adresse de a = %d \n",a, &a); 

return 0;
} 
