#include <stdio.h>
// Se solicita la cantidad de galones, luego se multiplica por el precio de galon y combustible y se imprime el resultado
int main (){
	float g,c;
	printf ("ingrese la cantidad de galones: ");
	scanf ("%f", &g);
	c =(g)*(3.785*820);
	printf ("precio: %f", c);
	return 0;}
