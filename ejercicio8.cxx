#include <stdio.h>
//Se solicita un valor a x para resolver la ecuacion
int main (){
	float x,r;
	printf ("ingrese el valor de x: ");
	scanf ("%f", &x);
	r =(x*x*x)+2*(x*x) +3*x+5;
	printf ("resultado: %f", r);
	return 0;}
