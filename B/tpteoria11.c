#include<stdio.h>


//prototipo de la funcion
void calculo_sueldo (float vh1,int cht1, float &s1);

main()

{
	
	int cht;
	float vh, sueldo, totf=0 ;
	
	printf ("ingrese el valor de la hora:");
	scanf ("%f", &vh);
	
	while (vh!=0)
	{
		printf("\ningrese cantidad de horas trabajadas:");
		scanf ("%d", &cht);
		
		printf("\nsueldo: %.2f",sueldo);
		totf= totf + sueldo;
		
		printf ("\ningrese el valor de la hora:" );
		scanf ("%f", &vh);
	} 
	
	
	printf("total sueldo: &f" , totf);
	
	

}

void calculo_sueldo (float vh1, int cht1, float &s1)
{

float s,p;

if (cht1==0)
{
	s1=0;
}
else
{
	s= vh1*cht1;
	s1= s* 0.86;
	
	if (cht1>60)
	{
		p= s* 0.05;
		s1=s + p;
	}
}
}
