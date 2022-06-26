 //Una concesionaria de autos registra el día sábado las ventas realizadas en la semana. El registro tiene la siguiente estructura jerarquizada:
 	/*a) Ingresar las N ventas realizadas en la semana.
b) A medida que se registran las ventas, por medio de una función, determinar en qué fecha se vendió menos.
c) Haciendo uso de una función a medida que se ingresa los datos de un cliente mostrar en pantalla los datos ingresados*/
 	

#include <stdio.h>

 #include <stdlib.h>

 #include <string.h>


struct fecha{
int dia;
int mes;
int anio;
};

struct datosCliente{
char ApeNom[40]; //apellido y nombre del cliente
char dire[60]; //domicilio particular del cliente
float monVehi; //Monto del vehículo.
fecha fecVenta; //Fecha de venta del vehículo.
};

main ()
{
    datosCliente reg[50];
    int n=7,i;
     
     
    
    
    printf("\nIngrese los datos del registro\n\n");
    for (i=0;i<n;i++)
	{	     
	   printf("\nIngrese el nombre y apellido: ");

			 gets(reg[i].ApeNom);
			
			 printf("\nDireccion: ");
			 gets(reg[i].dire);
			 	
			 printf("\nMonto del vehiculo: ");
			
			 scanf("%f",&reg[i].monVehi);
			
			 printf("\nFECHA DE COMPRA\n");
			
			 printf("\nDIA: ");
			
			 scanf("%d",&reg[i].fecVenta.dia);
			
			 printf("\nMES: ");
			
			 scanf("%d",&reg[i].fecVenta.mes);
			
			 printf("\nANIO: ");
			
			 scanf("%d",&reg[i].fecVenta.anio);
			
			 _flushall();
	    
	}}
	
      //mostrar(n,reg);
