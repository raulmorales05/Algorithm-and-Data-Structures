#include<stdio.h>
#include<conio.h>
#include<string.h>
struct fecha
{	int dia, mes, anio;
};
struct adelanto
{	fecha reg;
	float monto;	
};
struct expediente
{	char nombre[50];
	float metros;
	char numexp[50];
	int obra;
	adelanto ad[2];
};
void registrar(expediente a[5], int n, char numexp[50], fecha reg, float monto);

main()
{	int i, n, j, h;
	h=0;
	n=5;
	char numexp[50];
	fecha reg;
	float monto, s;
	s=0;
	expediente a[5];
	for(i=0;i<n;i++)
	{	printf("\ningrese el numero de expediente:");
		_flushall();
		gets(a[i].numexp);
		printf("\ningrese el nombre del propietario:");
		fflush(stdin);
		gets(a[i].nombre);
		printf("\ningrese la cantidad de metros cuadrados:");
		scanf("%f", &a[i].metros);
		printf("\ningrese el tipo de obra(0: vivienda básica, 1: vivienda de Lujo, 2: Edificio, 3: predio especial)");
		scanf("%d", &a[i].obra);
	}
	printf("\ningrese el numero de expediente:");
	_flushall();
	gets(numexp);
	printf("\ningrese el dia de adelanto:");
	scanf("%d", &reg.dia);
	printf("\ningrese el mes de adelanto:");
	scanf("%d", &reg.mes);
	printf("\ningrese el anio de adelanto:");
	scanf("%d", &reg.anio);
	printf("\ningrese la cantidad de dinero recibido:");
	scanf("%f", &monto);
	registrar(a, n, numexp, reg, monto);
	printf("\ningrese el numero de expediente que desea consultar:");
	_flushall();
	gets(numexp);
	for(i=0;i<n&&h==0;i++)
	{	if(strcmpi(a[i].numexp, numexp)==0)
		{	h=1;
			printf("\nEXPEDIENTE NRO: %s", a[i].numexp);
			printf("\nPROPIETARIO: %s", a[i].nombre);
			printf("\nTIPO DE OBRA: %d", a[i].obra);
			printf("\nFECHA    MONTO");
			for(j=0;j<2;j++)
			{	s=s+a[i].ad[j].monto;
				printf("\n%d/%d/%d    %.2f", a[i].ad[j].reg.dia, a[i].ad[j].reg.mes, a[i].ad[j].reg.anio, a[i].ad[j].monto);
			}
			printf("\nEL TOTAL ES: %.2f", s);
		}
	}
	getch();
}
void registrar(expediente a[5], int n, char numexp[50], fecha reg, float monto)
{	int i, h;
	h=0; 
	for(i=0;i<n&&h==0;i++)
	{	if(strcmpi(a[i].numexp, numexp)==0)
			{	h=1;
				a[i].ad[0].reg=reg;
				a[i].ad[0].monto=monto;	
			}
	} if(h==0)
		{	printf("\nERROR, EL EXPEDIENTE NO FUE ENCONTRADO");
		} else 
		 {
			printf("\nSE REGISTRO LA VENTA:");
				}
}
