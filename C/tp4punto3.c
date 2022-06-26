

#include<stdio.h>
#include<conio.h>

int datos(float v1[100]);
int coincidencia(int orden,float v1[100],float numero1);

main()
{
	int orden,coinc,resultado;
	float numero,v[100];
	
	orden=datos(v);
	printf("\nEl orden del arreglo es: %d\n",orden);
	
	printf("\nIngrese un numero a buscar en el arreglo: ");
	scanf("%f",&numero);
	
	coincidencia(orden,v,numero);
	resultado=coincidencia(orden,v,numero);
	
	if(resultado!=0)
	{
		if(resultado==1)
		{
			printf("\nEL NUMERO SE REPITE %d VEZ EN LA LISTA.",resultado);
		}
		else if(resultado>1)
		{
			printf("\nEL NUMERO SE REPITE %d VECES EN LA LISTA.",resultado);	
		}
	}
	else
	{
		printf("El valor ingresado no se encuentra en la lista.");
	}
	
	getch();
}

int datos(float v1[100])
{
	int i=0,j=2;
	float x;
	
	printf("Ingrese un numero (1): ");
	scanf("%f",&x);
	
	while(x!=0)
	{
		v1[i]=x;
		i=i+1;
		printf("Ingrese un numero (%d): ",j);
		scanf("%f",&x);
        j++ ;  
	}
	return i;
}
int coincidencia(int orden,float v1[100],float numero1)
{
	int i=0,c=0;
	
	for(i=0;i<orden;i++)
	{
		if(v1[i]==numero1)
		{
			c=c+1;
		}	
	}
	return c;	
}
