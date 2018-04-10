#include <stdio.h>
#include <math.h>
// Despues de solicitar los valores se multiplican por si mismo luego se utiliza la libreria math para resolver la raiz cuadrada de estos catetos sumados
int main () {
	float cats, hipo,ca1,ca2;
	printf ("ingreso cateto 1: ");
	scanf("%f", &ca1);
	printf ("ingreso cateto 2: ");
	scanf("%f", &ca2);
	cats=(ca1*ca1)+(ca2*ca2);
	hipo = sqrt(cats) ;
	printf ("la hipotenusa es: %f", hipo);
	return 0; }
