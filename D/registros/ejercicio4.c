#include<stdio.h>
#include<stdlib.h>
/*



Apellido y Nombre Char [60]
Domicilio Char [60]
DNI_Dueño int
Localidad Char [60]
Fecha de Nacimiento Fecha
Peso Float
Telefono Char[25]



*/

struct fecha
{
	int dia, mes, anio;
};



struct registro
{
	
	char Domicilio[60];
	char localidad[60];
	char DNI[10];  //DNI 
	char ApeNom[60];  //Nombre y Apellido 
	struct fecha fecNacimiento;  //Fecha de nacimiento 
	float peso;
	char telefono[10];
	

};

void carga(int N1, registro reg[40]);
void notas(int N1, registro reg[40]);

main()
{
	registro reg[40];
	int N;
	
	printf("Ingrese cantidad de alumnos: ");
	scanf("%d",&N);
	
	carga(N,reg);
	notas(N, reg);
}


void carga(int N1, registro reg[40])
{
	int i;
	
	
	for(i=0; i<N1; i++)
	{
		_flushall();
		printf("\nD.N.I : ");
		gets(reg[i].DNI);
		
		printf("\nNombre y Apellido: ");
		gets(reg[i].ApeNom);
		
			printf("\nDomicilio: ");
		gets(reg[i].Domicilio);
		
			printf("\nLocalidad: ");
		gets(reg[i].localidad);
		
		
		printf("\nFECHA DE NACIMIENTO");
		printf("\nDIA: ");
		scanf("%d",&reg[i].fecNacimiento.dia);
		
		printf("\nMES: ");
		scanf("%d",&reg[i].fecNacimiento.mes);
		
		printf("\nANIO: ");
		scanf("%d",&reg[i].fecNacimiento.anio);
		
			printf("\nPeso de la mascota: ");
		scanf("%f",&peso);
		
		
		printf("\nTelefono: ");
		gets(reg[i].telefono);
		
	
	}
}





