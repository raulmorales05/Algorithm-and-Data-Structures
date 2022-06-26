#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctime>

main()
{
	system("cls");
	int monedas=0,cantminima=0,cantmaxima=0,computadora=0,usuario,valormoneda,generadorprimerajugada;
	printf("\n\n\tWARCOIN");
	printf("\n\n\t========");
	printf("\n\n\t(El maximo de monedas es 50)");
		
		printf("\nIngresa la cantidad mínima de monedas que se pueden retirar: "); scanf("%d",&cantminima);
		printf("\nIngresa la cantidad maxima de monedas que se pueden retirar: "); scanf("%d",&cantmaxima);	
		
		if((cantminima>=50)||(cantmaxima>=50)){ //EN CASO DE QUE INGRESE CANTIDADES MINIMAS O MAXIMAS MAYORES A 50
			printf("\n\nERROR==Ingreso una cantidad mayor a 50, ingrese nuevamente los valores==ERROR");
			printf("\nIngresa la cantidad mínima de monedas que se pueden retirar: "); scanf("%d",&cantminima);
			printf("\nIngresa la cantidad maxima de monedas que se pueden retirar: "); scanf("%d",&cantmaxima);		
		}
		
	while((cantmaxima<cantminima)||(cantminima>cantmaxima)){ //EN CASO DE QUE INGRESE LA CANTIDAD MINIMA MAYOR A LA MAXIMA
		if(cantmaxima<cantminima){
			printf("\n\nERROR==Su cantidad maxima es menor a la minima==ERROR");
		}
	 else
	 	{
	 		printf("\n\nERROR==Ingreso una cantidad minima mayor a la maxima==ERROR");
	    }
	 
		printf("\nIngresa la cantidad mínima de monedas que se pueden retirar: "); scanf("%d",&cantminima);
		printf("\nIngresa la cantidad maxima de monedas que se pueden retirar: "); scanf("%d",&cantmaxima);
			
	}
	
	valormoneda=generadorinicial(monedas,cantmaxima);
	printf("\nLa cantidad inicial de monedas en la pila es: %d",valormoneda);
	
	generadorprimerajugada=primerajugada(computadora,usuario,cantminima,cantmaxima,valormoneda);
	
	
	
	
}	
			
			
			
			
			
			
			
			
		
