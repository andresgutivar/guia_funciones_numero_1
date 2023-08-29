#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrar (int num);
int main() {
	
	int num;
	printf("Ingrese un número entero: ");
	scanf("%d", &num);
	
	mostrar(num);
	return 0;
}

void mostrar (int num)
{
	char sim;
	if (num>=0 && num<=255) {
		sim=(char)num;
		printf("El símbolo del numero %d es: %c\n", num, sim);
	}
	else
		printf("tu valor ingresado no es un numero entero");
}
