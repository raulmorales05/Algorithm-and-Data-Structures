#include<stdio.h>
#include<stdlib.h>

struct fecha
{
	int dia, mes , anio;
};

struct venta
{
	float L,M,Ms,J,V;
};

struct registro
{
	char ApeNom[20];
	char dni[10];
	fecha ingreso;
	venta sem;
};

void carga(int n1, registro reg[20]);
void mascara(int n1, registro reg[20]);

float TL=0;
main()
{
	registro reg[20];
	
	int n;
	
	printf("Ingrese cantidad de empleados, minimo 5: ");
	scanf("%d",&n);
	

	for(int i=0; i<n; i++)
	{
		system("cls");
		
		_flushall();
		printf("\nD.N.I: ");
		gets(reg[i].dni);
		
		_flushall();
		printf("\nApellido y Nombre: ");
		gets(reg[i].ApeNom);
		
		printf("\nFecha de contarto:\n");
		printf("DIA: ");
		scanf("%d",&reg[i].ingreso.dia);
		
		printf("\nMES: ");
		scanf("%d",&reg[i].ingreso.mes);
		
		printf("\nANIO: ");
		scanf("%d",&reg[i].ingreso.anio);
	}
	
	carga(n,reg);
	mascara(n,reg);
}


void carga(int n1, registro reg[20])
{
	int i;
	
	for(i=0; i<n1; i++)
	{
		printf("\nREGISTRO DE VENTAS DE EMPLEADOS:");
		printf("\nDIAS DE VENTA:");
		printf("Lunes: ");
		scanf("%f",&reg[i].sem.L);
		
		printf("\nMartes: ");
		scanf("%f",&reg[i].sem.M);
		
		printf("\nMiercoles: ");
		scanf("%f",&reg[i].sem.Ms);
		
		printf("\nJueves: ");
		scanf("%f",&reg[i].sem.J);
		
		printf("\nViernes: ");
		scanf("%f",&reg[i].sem.V);
		
		TL=reg[i].sem.L + reg[i].sem.M + reg[i].sem.Ms + reg[i].sem.J + reg[i].sem.V;
	}
}


void mascara(int n1, registro reg[20])
{
	int i;
	system("cls");
	
    printf("DOCUMENTO              APELLIDO Y NOMBRE                 LUNES       MARTE       MIERCOLES       JUEVES       VIERNES       TOTAL\n");
    printf("**********************************************************************************************************************************\n");
    
    for(i=0; i<n1; i++)
    {
    	printf("\n%s",reg[i].dni);
    	printf("\t\t%s",reg[i].ApeNom);
    	printf("\t\t\t %.2f      %.2f        %.2f        %.2f        %.2f      %.2f",reg[i].sem.L, reg[i].sem.M, reg[i].sem.Ms, reg[i].sem.J, reg[i].sem.V, TL);
        printf("\t\t",TL);
	}
}



