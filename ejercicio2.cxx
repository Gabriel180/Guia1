#include <stdio.h>
//se solicita un numero y se multiplica por si mismo para el resultado
int main () {
	float n,c,cu ;
	printf ("ingrese numero para potenciarlo: ") ;
	scanf("%f", &n);
	cu= (n*n);
	c= (n*cu);
	printf (" elevado a 2 e: %f \n", cu);
	printf (" elevado a 3 e: %f \n", c);
	return 0; }
