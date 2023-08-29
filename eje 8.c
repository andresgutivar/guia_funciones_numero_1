#include <stdio.h>
#include <stdlib.h>

float horas_a_dias (float h)
{
	//1=24
	//x=h
	h=h/24;
	return h;
}

float dias_a_horas (float h)
{
	//1=24
	//h=x	
	h=h*24;
	return h;
}
int main() {
	float num, h;
	printf("\n'1' para pasar horas a dias  \n'2' para pasar de dias a horas \nseleccione una opcion: ");
	scanf("%f", & num);
	while (num!=1 && num!=2)
	{
		printf("opcion no valida, vuelva a ingresar una opcion: ");
		scanf("%f", & num);
	}
	
	if (num==1)
	{
		printf ("ingrese las horas: ");
		scanf("%f", & h);
		printf("sus horas son equivalentes a %.2f dias",horas_a_dias (h));
	}
	else
	{
		printf ("ingrese los dias: ");
		scanf("%f", & h);
		printf("sus horas son equivalentes a %.2f dias",dias_a_horas (h));
	}

	
	return 0;
}

