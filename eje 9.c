#include <stdio.h>
#include <stdlib.h>

int notas()
{
	int num;
	float acunota=0,nota=0;
	printf("ingrese la cantidad de notas que va a ingresar: ");
	scanf("%d",& num);
	
	for (int i=0;i<num;i++)
	{
		printf("ingrese sus notas: ");
		scanf("%f", & nota);
		
		if (i==0)
		{
			acunota=nota;
		}
		else
		{
			acunota=acunota+nota;
		}
	}
	
	
	
	float prom=acunota/num;
	//printf("promedio total: %f", prom);
	if(prom>=9 && prom<=10)
	{
		int a=4;
		return a;
	}
	else
	{
		if(prom>=7 && prom<=8)
		{
			int a=3;
			return a;
		}
		else
		{
			if(prom>=6 && prom<=7)
			{
				int a=2;
				return a;
			}
			else
			{
				if(prom>=5 && prom<=6)
				{
					int a=1;
					return a;
				}
				else
				{
					if(prom<5)
					{
						int a=0;
						return a;
					}	
				}
			}
		}
	}

}

int main() {
	
	
	printf("tu numero es: %d",notas());

	return 0;
}

