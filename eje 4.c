#include <stdio.h>
#include <stdlib.h>
float sumar (float num1, float num2);
int main() {
	float num1,num2;
	printf("ingrese el primer parametro: ");
	scanf("%f",& num1);
	
	printf("ingrese el segundo parametro: ");
	scanf("%f",& num2);
	
	printf("la madia de los numeros es: %.2f",sumar(num1,num2));
	return 0;
}

float sumar (float num1, float num2)
{
	int acu=0,i;
	float tot=0;
	if (num1==num1+1)
	{
		tot=num1+num2;
		acu=2;
	}
	else
	{
	for (i=num1;i<=num2;i++)
	{
		if (i==num1)
		{
			tot=num1;
			acu=acu+1;
		}
		else
		{
		tot=tot+i;
		acu=acu+1;
		}
	}
	}
	
	tot=tot/acu;
	
	return tot;
}
