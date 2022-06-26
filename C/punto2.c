#include<stdio.h>
#include<stdlib.h>

void leer(int n1, int notas1[100]);
void maymen(int n1, int notas1[100], int &mayor1, int &menor1);
float promedio(int n1, int notas1[100]);
int cant_sup_prom(int n1, int notas1[100], float p1);
void cant_aprobados(int n1, int notas1[100],int &cant_aprob1, int &cant_desap1);

main()
{
	int n, notas[100], mayor, menor, csp, cant_aprob,cant_desap;
	float p;
	
	printf("\n Ingrese la cantidad total de notas: ");
	scanf("%d",&n);
	leer(n,notas);
	maymen(n,notas,mayor,menor);
	printf("\n La Mayor Nota es:%d",mayor);
	printf("\n La Menor Nota es:%d",menor);
	p=promedio(n,notas);
	printf("\n El promedio de las notas es:%.2f",p);
	csp=cant_sup_prom(n,notas,p);
	printf("\n La cantidad de notas superiores al promedio es: %d",csp);
	cant_aprobados(n,notas,cant_aprob,cant_desap);
	printf("\n La cantidad de alumnos aprobados es: %d",cant_aprob);
	printf("\n La cantidad de alumnos desaprobados es: %d",cant_desap);
	
	
}

void leer(int n1, int notas1[100])
{
	int i;
	for(i=0; i<n1;i++)
	{
		do
		{
			printf("\n Notas[%d]: ",i);
			scanf("%d",&notas1[i]);
		}while(notas1[i]<1 || notas1[i]>10);
	}
}

void maymen(int n1, int notas1[100], int &mayor1, int &menor1)
{
	int i;
	mayor1=menor1=notas1[0];
	for(i=0;i<n1;i++)
	{
		if(notas1[i]<menor1)
		{
			menor1=notas1[i];
		}
		if(notas1[i]>mayor1)
		{
			mayor1=notas1[i];
		}
	}
}

float promedio(int n1, int notas1[100])
{
	int i, s=0;
	float prom;
	for(i=0;i<n1;i++)
	{
		s=s+notas1[i];
	}
	prom=(float)s/n1;
	return prom;
}

int cant_sup_prom(int n1, int notas1[100], float p1)
{
	int i, cant=0;
	for(i=0;i<n1;i++)
	{
		if(notas1[i]>p1)
		{
			cant=cant+1;
		}
	}
	return cant;
}

void cant_aprobados(int n1, int notas1[100],int &cant_aprob1, int &cant_desap1)
{
	int i;
	cant_aprob1=0,cant_desap1=0;
	for(i=0;i<n1;i++)
	{
		if(notas1[i]>=6)
		{
			cant_aprob1=cant_aprob1+1;
		}
		else
		{
			cant_desap1=cant_desap1+1;
		}
	}
}
