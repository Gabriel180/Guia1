#include <stdio.h>
int main () {
	int segundos ;
	float dias ;
	//Se piden los datos y se multiplican por la cantidad de segundos al dia//
	printf ("ingrese cantidad de dias: ") ;
	scanf ("%f", &dias);
	segundos = (dias)*(60*60*24) ;
	printf ("cantidad de segundos : %d", segundos);
	return 0 ;}
