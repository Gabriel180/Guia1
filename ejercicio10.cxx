#include <stdio.h>
//Se solicita la cantidad de kilometros y los costos, luego se multiplican por si mismos
int main (){
	float c,k,co ;
	printf("ingrese la cantidad de costo por kilometro: ");
	scanf ("%f", &c) ;
	printf ("ingrese los kilometros a recorrer: ");
	scanf ("%f", &k);
	co= k*c ;
	printf ("cobre desde: %f", co);
	return 0 ;}
