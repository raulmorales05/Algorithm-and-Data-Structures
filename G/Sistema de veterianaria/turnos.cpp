#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct fecha
{
	int dia, mes, anio;																//estructura de fechas
};

struct registro3
{
	int matricula;//Matricula de Veterinario										//estructura de turnos(opcion3)
	char DNI[10];  //DNI 
	struct fecha fec;  //Fecha 
	char detalle[380];//Detalle de Atencion C
};

void Raulturnos();
void carga3(int N1, registro3 re[40]);
void mostrarTurnos(int N1, registro3 re[40]);


main()
{

    Raulturnos();
    
    
    
   
    
    
}
void Raulturnos()																	//funcion de turnos(opcion 3)
{
	registro3 re[40];
	int N;
	
	printf("Ingrese cantidad de clientes: ");
	scanf("%d",&N);
	carga3(N, re);
	mostrarTurnos(N,re);
}



void carga3(int N1, registro3 re[40])
{
	int i;
	
	
	 FILE *arch;
    arch=fopen("turnos.dat","ab");
    if (arch==NULL)
        exit(1);
	
	for(i=0; i<N1; i++)
	{
		
		
		
		printf("\nMatricula de Veterinario: ");
		scanf("%i",&re[i].matricula);
		
		_flushall();
		printf("\nD.N.I : ");
		gets(re[i].DNI);
		
		printf("\nFECHA");
		printf("\nDIA: ");
		scanf("%d",&re[i].fec.dia);
		
		printf("\nMES: ");
		scanf("%d",&re[i].fec.mes);
		
		printf("\nANIO: ");
		scanf("%d",&re[i].fec.anio);
			_flushall();
		printf("\nDetalle de atencion de la mascota: ");
		gets(re[i].detalle);
		
		
	fwrite(&re, sizeof(registro3), 1, arch);
    fclose(arch);
    
	}
}

// imprimir

void mostrarTurnos(int N1, registro3 re[40])
{
	int i;
	
	
	 FILE *arch;
    arch=fopen("turnos.dat","ab");
    if (arch==NULL)
        exit(1);
	
	for(i=0; i<N1; i++)
	{
		
		
		
		printf("\nMatricula de Veterinario: ");
		printf("%i",re[i].matricula);
		
		
		printf("\nD.N.I : ");
		puts(re[i].DNI);
		
		printf("\nFECHA");
		printf("\nDIA: ");
		printf("%d",re[i].fec.dia);
		
		printf("\nMES: ");
	printf("%d",re[i].fec.mes);
		
		printf("\nANIO: ");
		printf("%d",re[i].fec.anio);
			
		printf("\nDetalle de atencion de la mascota: ");
	puts(re[i].detalle);
		
		
	fwrite(&re, sizeof(registro3), 1, arch);
    fclose(arch);
    
	}
}







