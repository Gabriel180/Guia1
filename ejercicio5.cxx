#include <stdio.h>
int main () {
	float pies, libras, metros, kilos ;
	char nombre [9000] ;
	//Se piden tres datos, los cuales se usa una ecuación por pies y libras y se imprimen los resultados//
	printf ("ingrese el nombre del dinosaurio:") ;
	scanf ("%s", nombre);
	printf ("ingrese longitud del %s : ", nombre) ;
	scanf ("%f", &pies);
	printf ("ingrese el peso del  %s : ", nombre);
	scanf ("%f", &libras) ;
	kilos = libras*0.45;
	metros = pies*0.3048 ;
	printf ("%s \n", nombre) ;
	printf ("longitud: %f", metros) ;
	printf ("\n peso: %f", kilos) ;
	return 0; }
