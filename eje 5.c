#include <stdio.h>
#include <stdlib.h>

void mostrar (float num1,float num2,float num3)
{
	float sum;
	printf("ingrese parametro 1: ");
	scanf("%f",&num1);
	
	printf("ingrese parametro 2: ");
	scanf("%f",&num2);
	
	printf("ingrese parametro 3: ");
	scanf("%f",&num3);
	
	sum=num1+num2+num3;
	
	sum=sum/3;
	
	printf("la media calculada es de: %.2f",sum);
}
int main() {
	float num1,num2,num3;
	mostrar (num1,num2,num3);
	return 0;
}

