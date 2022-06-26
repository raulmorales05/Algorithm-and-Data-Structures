/*Hacer un menú que considere las siguientes opciones:
	Caso 1: Cubo de un numero (realizar con funcion sin tipo y mostrar el resultado en main)
	Caso 2: Porcentaje de Numeros impares
	Case 3: Promedio de N numeros
	Case 4: Inverso de numero indeterminado de 2 digitos
	Case 3: salir.
*/

#include<stdio.h>
#include<stdlib.h>
#include "K6LIBRERIA.h"

void porcentajes();
void menu();
void inversos();


float porcentaje,prome;
	


main()
{
	int opcion,numero,cubo,N;
	float prome;
	
	do
	{
		system("cls");	// CLS significa CLear Screen (limpiar pantalla)
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				printf("\nIngrese el numero para sacar su cubo: ");
				scanf("%d",&numero);
				cubos(numero,cubo);
				printf("\nEl cubo de %d es: %d",numero,cubo);
				break;
			case 2: 
				porcentajes();
				break;
			case 3:
				printf("\nIngrese la cantidad de numeros para sacar su promedio: ");
				scanf("%d",&N);
				prome=promedios(N);
				printf("\nEl promedio de los %d numeros es: %.2f",N,prome);
				break;
			case 4:
				inversos();
				break;	
			case 5: //if(opcion==5)
				printf("\nGracias por usar nuestros servicios..");
				break;
			default: //if(opcion<=0 or opcion>5)
				printf("\nNo corresponde a ninguna opcion del MENU");
				break;
		}
		pausa();
	}while(opcion!=5);

}


void menu()
{
		printf("\n\tMENU");
		printf("\n\n1- Cubo de un numero");
		printf("\n\n2- Porcentaje de numeros impares.");
		printf("\n\n3- Promedio de n numeros.");
		printf("\n\n4- Inverso de un numero de 2 digitos.");
		printf("\n\n5- Salir");
		printf("\n\nIngrese la opcion: ");
}

void porcentajes()
{
	int numero,ni=0,n=0;
	float porcentaje;
	
	printf("\nIngrese el numero (0 para terminar): ");
	scanf("%d",&numero);
	while(numero!=0)
	{
		if(numero % 2!=0)	// % significa MOD
		{
			ni++;
		}
		n++;
		printf("\nIngrese el numero 0 para terminar): ");
		scanf("%d",&numero);
	}
	porcentaje=(ni*100)/n;
	printf("El porcentaje de numero impares es: %.2f",porcentaje);
}

void inversos()
{
	int numero,d1,d2,inverso,c;
	printf("\nIngrese un numero de 2 digitos para obtener su inverso: ");
	scanf("%d",&numero);
	while(numero!=0)
	{

		if (numero>9 and numero <100)
		{
			d1=numero%10;	// % significa MOD
			d2=numero/10;	// / significa DIV
			inverso=d1*10+d2;
			printf("\nEl inverso de %d es: %d\n",numero,inverso);
		}
		else
		{
			printf("\nNO ES un numero de 2 digito\n");
			system("pause");
			//c=c-1;
		}
		c++;
		printf("\nIngrese un numero de 2 digitos para obtener su inverso: ");
		scanf("%d",&numero);
	}
}
