#include <stdio.h>
//Pide matricula y notas, luego divide las notas//
int main () {
	int matricula;
	float no1,no2,no3, promedio;
	printf ("programa para el promedio de un alumno \n");
	printf("ingrese matricula del alumno: ");
	scanf ("%d", &matricula) ;
	printf("ingrese la primera nota:");
	scanf ("%f", &no1) ;
	printf("ingrese la segunda nota:");
	scanf ("%f", &no2) ;
	printf("ingrese la tercera nota:");
	scanf ("%f", &no3) ;
	promedio= (no1+no2+no3) /3 ;
	printf ("%f ", promedio) ;
	printf ("%d", matricula);
	return 0 ;}
