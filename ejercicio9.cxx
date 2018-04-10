#include <stdio.h>
int main () {
	float sueldo, comisiones, sueldo_total;
	//Se imprime ingrese sueldo para obtener uno de los datos necesario
	printf ("ingrese sueldo mensual: ");
	scanf ("%f", &sueldo) ;
	printf ("total de porcentajes en comisiones:") ;
	scanf ("%f", &comisiones) ;
	//Al obtener los datos necesarios se realiza la ecuacion y se imprime
	sueldo_total = ((sueldo*comisiones) /100)+sueldo ;
	printf ("el sueldo total es : %f", sueldo_total) ;
	return 0 ;}
