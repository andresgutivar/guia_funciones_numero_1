#include <stdio.h>
#include <stdlib.h>

float calcular (float num1);
int main() {
	float num1,num;
	
	printf("ingrese un numero: ");
	scanf("%f", & num1);
	
	if (num1<0)
	{
	num=num1*num1;
	num=num/-num1;
	}
	else
	{
		num=num1;
	}

	if (num1==0)
	{
		printf("tu numero es 0 por lo tanto no tiene signo");
	}
	else
	{
		printf("tu signo es %.0f y tu numero es %.2f",calcular (num1),num);
	}
	
	return 0;
}
float calcular (float num1)
{
	int p=0;


		if (num1>0)
		{
			p=1;
		}
		else
		{
			p=0;
		}
	
	
	return p;
}
