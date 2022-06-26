#include<stdio.h>
#include<conio.h>
#include<math.h>

int N,C,Z;
int entero,numero,cantd,ud;
int error;

main()
{
	printf("\nIngrese la cantidad de numeros que desea: "); scanf("%d",&N);
	for(C=0;C<N;C=C+1)
	{
		error=1;cantd=0;
		while(error==1)
		{
			printf("\nIngrese un numero entero de tres cifras: "); scanf("%d",&Z);
			entero=Z-trunc(Z);
			if(entero==0)
			{
				numero=Z;
				while(numero>0)
				{
					numero=trunc(numero/10);
					cantd=cantd+1;
				}
				if(cantd==3)
				{
					ud=Z%10;
					printf("\nLa cifra ingresada es de 3 digitos y su ultimo digito es %d",ud);
					error=0;
				}
				else
				{
					printf("\nLa cifra ingresada no tiene 3 digitos");
				}
			}
			else
			{
				printf("\nIngrese un valor entero");
			}
		}
		
		
	}
}
