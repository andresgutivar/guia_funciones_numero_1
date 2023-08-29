#include <stdio.h>
#include <stdlib.h>
void valores_repetidos (int num)
{
	{
	int decena=num/10*10;

	for (int i=0;i<2;i++)
	{
		if (i==1)
		{
			printf (" y");
		}
		
		switch (decena)
		{
		case 1: printf (" uno");
		break;
		case 2:	printf (" dos");
		break;
		case 3: printf (" tres");
		break;
		case 4:	printf (" cuatro");
		break;
		case 5:	printf (" cinco");
		break;
		case 6: printf (" seis");
		break;
		case 7:	printf (" siete");
		break;
		case 8:	printf (" ocho");
		break;
		case 9:	printf (" nueve");
		break;
		case 10:printf (" diez");
		break;
		case 11:printf (" once");
		break;
		case 12:printf (" doce");
		break;
		case 13:printf (" trece");
		break;
		case 14:printf (" catorce");
		break;
		case 15:printf (" quince");
		break;
		case 16:printf (" dieciseis");
		break;
		case 17:printf (" diecisiete");
		break;
		case 18:printf (" dieciocho");
		break;
		case 19:printf (" diecinueve");
		break;
		case 20: printf (" veinte");
		break;
		case 21: printf (" veintiuno");
		break;
		case 22: printf (" veintidos");
		break;
		case 23: printf (" veintitres");
		break;
		case 24: printf (" veinticuatro");
		break;
		case 25: printf (" veinticinco");
		break;
		case 26: printf (" veintiseis");
		break;
		case 27: printf (" veintsiete");
		break;
		case 28: printf (" veintiocho");
		break;
		case 29: printf (" veintinueve");
		break;
		case 30:printf (" trenta");
		break;
		case 40:printf (" cuarenta");
		break;
		case 50:printf (" cincuenta");
		break;
		case 60:printf (" sesenta");
		break;
		case 70:printf (" setenta");
		break;
		case 80:printf (" ochenta");
		break;
		case 90:printf (" noventa");
		break;
		
		}
		decena=num-decena;
	}
	
}
}

void valores_unicos (int num)
{

	switch (num)
	{
	case 1: printf (" uno");
		break;
	case 2:	printf (" dos");
		break;
	case 3: printf (" tres");
		break;
	case 4:	printf (" cuatro");
		break;
	case 5:	printf (" cinco");
		break;
	case 6: printf (" seis");
		break;
	case 7:	printf (" siete");
		break;
	case 8:	printf (" ocho");
		break;
	case 9:	printf (" nueve");
		break;
	case 10:printf (" diez");
		break;
	case 11:printf (" once");
		break;
	case 12:printf (" doce");
		break;
	case 13:printf (" trece");
		break;
	case 14:printf (" catorce");
		break;
	case 15:printf (" quince");
		break;
	case 16:printf (" dieciseis");
	break;
	case 17:printf (" diecisiete");
	break;
	case 18:printf (" dieciocho");
	break;
	case 19:printf (" diecinueve");
	break;
	case 20: printf (" veinte");
	break;
	case 21: printf (" veintiuno");
	break;
	case 22: printf (" veintidos");
	break;
	case 23: printf (" veintitres");
	break;
	case 24: printf (" veinticuatro");
	break;
	case 25: printf (" veinticinco");
	break;
	case 26: printf (" veintiseis");
	break;
	case 27: printf (" veintsiete");
	break;
	case 28: printf (" veintiocho");
	break;
	case 29: printf (" veintinueve");
	break;
	case 30:printf (" trenta");
	break;
	case 40:printf (" cuarenta");
	break;
	case 50:printf (" cuatro");
	break;
	case 60:printf (" sesenta");
	break;
	case 70:printf (" setenta");
	break;
	case 80:printf (" ochenta");
	break;
	case 90:printf (" noventa");
	break;
	
	default: valores_repetidos (num);
	break;
	}

	}
	
	


int main() {
	int num;
	
	
	while (num>99)
	{
	printf("ingrese un numero menor a 99 y mayor a 0: ");
	scanf("%d", & num);
	}
	
	if (num>0 && num<=99)
	{
		valores_unicos(num);
	}
	

	return 0;
}




