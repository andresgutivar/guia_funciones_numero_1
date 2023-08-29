#include <stdio.h>
#include <stdlib.h>
int dividir (int dividendo, int divisor)
{
	int cociente=0;
	
	printf("ingrese el dividendo: ");
	scanf("%d",& dividendo);
	
	printf("ingrese el divisor: ");
	scanf("%d",& divisor);
	
	while (dividendo>=divisor)
	{
		dividendo=dividendo-divisor;
		cociente=cociente+1;
	}


	
	return cociente;
}
float multiplicar (float num1, float num2)
{
	float m,n,resultado=0;
	int i;
	printf("escribe el primer numero a multiplicar: ");
	scanf("%f",& num1);
	
	printf("escribe el segundo por el que se multiplique: ");
	scanf("%f",& num2);
	
	if(num1==num2)
	{
		m=num1;
		n=num2;
	}
	if(num1>num2)
	{
		m=num1;
		n=num2;
	}
	else
	{
		m=num2;
		n=num1;
	}
	
	for(i=1;i<=m;i++)
	{
		resultado=resultado+n;
	}
	
	
	return resultado;
}

int main() {
	float num1,num2,num,dividendo,divisor;
	printf("'1' para multiplicar  \n'2' para dividir \nseleccione una opcion: ");
	scanf("%f", & num);
	while (num!=1 && num!=2)
	{
		printf("opcion no valida, vuelva a ingresar una opcion: ");
		scanf("%f", & num);
	}
	
	if (num==1)
	{
		printf("\n\nsu multiplicacion es: %.2f ", multiplicar (num1,num2));
	}
	else
	{

		printf("\n\ntu cociente es: %d\n", dividir (dividendo,divisor));
	}
	
	
	return 0;
}

