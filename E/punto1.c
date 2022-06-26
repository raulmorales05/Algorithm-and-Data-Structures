/*Una empresa dedicada a las ventas de productos por mayor registra en un archivo binario solo los
totales de ventas que se van realizando durante el día. Las cargas de los datos se realizan en cualquier momento, por lo que el archivo no debe perder la información con una nueva carga.
El dueño de la empresa solicita, al centro de cómputos, le confeccione un sistema qué por medio
de un menú se pueda realizar lo siguiente:


? Permitir registrar en cualquier momento los montos totales de venta.

? Saber cuál es la mayor venta guardada y la cantidad de veces que se registró el mismo
monto.

? Visualizar los datos en pantallas, donde cada fila deberá tener 10 datos separados por un
guion y visualizar 6 dígitos en cada valor en caso de que la cantidad sea menor a 6 dígitos
rellenar con ceros a la izquierda hasta completar los 6 dígitos.


? Saber cuál es el monto total de las ventas realizadas en el momento de la consulta.

? Permitir al final del día borrar el archivo.
NOTA:
Utilizar para todas las opciones del menú funciones.
El archivo debe ser abierto al inicio del programa y cerrarlo al final del programa.
Cada función deberá recibir como uno sus parámetros el archivo.*/

#include<stdio.h>
#include<stdlib.h>

struct registro
{
float venta[50];

};


void menu();

main()
{ 
FILE *arch; 
struct registro reg;
	
   
    
	int opcion,numero,cubo,N,n,i;
	float prome;


/*if (arch == NULL)
{
 printf (“no se pudo abrir el archivo”);
}
else
 {*/




	
	do
	{
		system("cls");	// CLS significa CLear Screen (limpiar pantalla)
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				printf("\n: Ingrese la cantidad de dias");
				scanf("%d",&n);
				
				for(i=0;i<n;i++){
				
				    arch=fopen (“archivo.dat”, “w+b”);
					printf("\n: Ingrese la venta del dia %d: ",i+1);
			     	scanf("%f",&reg.venta[i]);
					
					fwrite (&reg, sizeof (registro), 1,arch );
				}
				
				
				
				
				
				break;
		/*	case 2: 
				porcentajes();
				break;
			case 3:
				printf("\nIngrese la cantidad de numeros para sacar su promedio: ");
				scanf("%d",&N);
				prome=promedios(N);
				printf("\nEl promedio de los %d numeros es: %.2f",N,prome);
				break;
			case 4:
				inversos();
				break;	
			case 5: //if(opcion==5)
				printf("\nGracias por usar nuestros servicios..");
				break; */
				
			default: if(opcion<=0 or opcion>5)
				printf("\nNo corresponde a ninguna opcion del MENU");
				break;
		}
		pausa();
	}while(opcion!=5);
	
	
fclose (arch);}



void menu()
{
		printf("\n\tMENU");
		printf("\n\n1- Cubo de un numero");
		printf("\n\n2- Porcentaje de numeros impares.");
		printf("\n\n3- Promedio de n numeros.");
		printf("\n\n4- Inverso de un numero de 2 digitos.");
		printf("\n\n5- Salir");
		printf("\n\nIngrese la opcion: ");
}
