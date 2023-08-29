#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ingreso ()
{
	char nombre[50];
	printf("ingrese nombre y apellido: ");
	gets(nombre);
	printf("tu nombre es: %s",nombre);
}
int main() {
	ingreso();
	return 0;
}

