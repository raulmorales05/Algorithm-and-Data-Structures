#include<stdio.h>

int ch;
float vh,s,scd,p;

/* especificadores de formato
int %d
float %f
char %c

scanf(&)
\n realiza salto de linea*/
main()
{
	printf("INGRESE LA CANTIDAD DE HORAS");
	scanf("%d",&ch);
	
	
	printf("INGRESE EL VALOR DE LAS HORAS");
	scanf("%f",&vh);
if(ch==0)
{ 
	printf("\nNO TRABAJO") ;
}
else
{
	s=vh*ch;
	scd=s*0.86;
	
	if(ch>60)
	{	p=s*0.05;
		scd=scd+p;
	}
	printf("\nSUELDO: %.2f",scd);
	}
}
