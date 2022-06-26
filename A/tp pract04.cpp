#include<stdio.h>
#include<conio.h>

int C=1;
float ibru,totv,totg,tott,tots;

main()
{
	while(C<=6)
	{
		
		printf("Ingrese el total de ventas del mes %d: ",C); scanf("%f",&totv);
		printf("Ingrese el total de gastos del mes %d:  ",C); scanf("%f",&totg);
		tots=tots+tott;
		ibru=0.25*totv;
		tott=totv-ibru-totg;
		C+=1;
	}
	if(tots>0)
	{
		printf("Tuvo Ganancia");
	}
	else
	{
		printf("No Tuvo Ganancia");
	}
}
