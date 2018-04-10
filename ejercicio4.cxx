#include <stdio.h>
//Se pide la base y altura para despues utilizarlo usando la formula del perimetro y area
int main () {
	float b,a,p,ar;
	printf("ingrese numero de la base :");
	scanf ("%f", &b) ;
	printf("ingrese numero de la altura :");
	scanf ("%f", &a) ;
	p= 2*(b+a);
	ar=b*a;
	printf ("la superficie es: %f\n", ar);
	printf ("el perimetro es: %f \n", p);
	return 0 ;}
