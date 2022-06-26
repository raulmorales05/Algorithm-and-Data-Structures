#include <stdio.h>
#include <string.h>

struct fecha
{
       int dia,mes,anio;
};

struct registrop
{
       int   cod_pac;
       char  apellido[30],nombre[50];
       fecha fec_nac;
       char resultado;
};

int calculo(fecha fec);

main ()
{
    registrop reg;
    int n,i,cp60=0,c_anio;
     
    printf("Ingrese cantidad de pacientes: ");
    scanf("%d",&n);
    
    printf("\nIngrese los datos del registro\n\n");
    for (i=0;i<n;i++)
	{	     
	     printf("\nCodigo Paciente: ");
	     scanf("%d",&reg.cod_pac);
	
	     printf("Apellido: ");
	     _flushall();
	     gets(reg.apellido);
	     
		 printf("Nombre: ");
	     _flushall();
		 gets(reg.nombre);
	     
	     printf("\nFecha de Nacimiento: \n");
	     printf("Dia: ");
	     scanf("%d",&reg.fec_nac.dia);
	     printf("Mes: ");
	     scanf("%d",&reg.fec_nac.mes);
	     printf("Año: ");
	     scanf("%d",&reg.fec_nac.anio);
	     
	     printf("Resultado test: ");
	     _flushall();
	     scanf("%c",&reg.resultado);
	     
	     c_anio=calculo(reg.fec_nac);
	     
	     if (c_anio>60)
	     	cp60++;
	}
     
    printf("\n\nCANTIDAD MAYORES DE 60: %d",cp60);


}

int calculo(fecha fec)
{
	int c;
	c=2020-fec.anio;
	return c;
}
