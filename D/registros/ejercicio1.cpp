

#include <stdio.h>

 #include <stdlib.h>

 #include <string.h>


void mostrar(int n, registro reg[50]);

struct registro
{
       int   cod_pac;
	   float monCred;
       char  apellido[30],nombre[50],domicilio[50];
       
       
};



main ()
{
    registro reg[50];
    int n,i;
     
     
    printf("Ingrese cantidad de clientess: ");
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
	     
	    
	     
	     printf("Domicilio: ");
	     _flushall();
	     scanf("%c",&reg.domicilio);
	     
	     printf("\n:Monto máximo del crédito que puede realizar en cada compra: ");
	     scanf("%f",&reg.monCred);
	  
	     
	    
	}
      mostrar(n,reg);
   


}

void mostrar(int n, registrop reg[50])

 {

 int i;

 system("cls");

 printf("\nLISTADO ...\n");

 for(i=0;i<n;i++)

 {

 printf("\nCODIGO: %d",&reg[i].cod_pao);

 printf("\nNombre: ");

 puts(reg[i].nombre);

 printf("\n Apellido: ");
 puts(reg[i].apellido);

 printf("\nMonto maximo del credito: %.2f",&reg[i].monCred);

 

 }

 printf("\n\n");

 system("pause");

 }



