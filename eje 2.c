#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void mostrar (int *contra);
int main() {
	int contra[6],i;
	

	printf("ingrese contraseña (maximo 6 digitos): ");
	for (i=0;i<6;i++)
	{
	contra[i]=getch();
	printf("*");
	}
	printf("\n");
	mostrar(contra);
	

	return 0;
}

void mostrar (int *contra)
{
	int i=0;
	char decision[3], si [5]="si";
	
	printf("desea ver la contrasenia? (si/no): ");
	
	scanf("%s", decision);
	
	int resultado = strcmp(si,decision);
	
	//printf("resul:%d",resultado);
	if (resultado==0)
	{
	for (i=0;i<6;i++)
	{
		
		printf("%c",contra[i]);
	}
	}
	
	
}
