#include <stdio.h>
#include <stdlib.h>

void registrarVenta(FILE *f, float montoVenta);
float mayorVenta(FILE *f);
int cantidaddelMayor(FILE *f, float mayor);
void visualiar(FILE *f);
float total(FILE *f);

main()
{
	int opc;
	FILE *ventas = fopen("ventas.dat", "a+b"); 
	float venta;
	do{
		system("cls");
		printf("\ningrese 1 para cargar venta: ");
		printf("\ningrese 2 mayor venta guardada: ");
		printf("\ningrese 3 veces que se registro la mayor venta:");
		printf("\ningrese 4 visualizar datos:");
		printf("\ningrese 5 monto total de las ventas:");
		printf("\ningrese 6 eliminar archivo: ");
		printf("\ningrese 0 para salir: \n");
		printf("\nQue desea hacer");		
		scanf("%d", &opc);
		switch(opc){
			case 1: printf("\ningrese el monto de la venta: ");
					scanf("%f", &venta);
					registrarVenta(ventas, venta);
					break;
			case 2: printf("\nla mayor venta fue de: %f\n", mayorVenta(ventas)); 
					system("pause");
					break;
			case 3: printf("\n el mayor esta %d veces en el archivo\n", cantidaddelMayor(ventas, mayorVenta(ventas))); 
					system("pause");
					break;
			case 4: visualiar(ventas); 
					printf("\n");
					system("pause");
					break;
			case 5: printf("\nel total de las ventas es: %f\n", total(ventas));							
					system("pause");
					break;
			case 6:fclose(ventas);
					remove("ventas.dat"); 
					opc = 0;
					break;
		}
	}while (opc != 0);	
	fclose(ventas);
}

void registrarVenta(FILE *f, float montoVenta) 
{
	fwrite(&montoVenta, sizeof(montoVenta), 1, f); 
}

float mayorVenta(FILE *f)
{
	float lectura;
	float mayor = 0;
	rewind(f); 
	 
	while(!feof(f)) 
	{
		
	fread(&lectura, sizeof(lectura), 1, f); 
	
	  if (lectura > mayor)
	  {
	  	mayor = lectura;
	  } 
	  
	}
	
	return mayor;
}


int cantidaddelMayor(FILE *f, float mayor) 
{
	float lectura;
	int c = 0;
	rewind(f); 
	
	fread(&lectura, sizeof(lectura), 1, f); 
	
	while(!feof(f)) 
	{
	  	
	  if (lectura == mayor)
	  {
	  	 c++;
	  }
	  
	  fread(&lectura, sizeof(lectura), 1, f); 
	}
	
	return c;
}

void visualiar(FILE *f)
{
	float lectura;
	int c = 0;
	
	rewind(f); 
	
	fread(&lectura, sizeof(float), 1, f);
	
	while(!feof(f))
	{
		
		if (lectura < 10) printf("00000");                   
		else if (lectura < 100) printf("0000");
			 else if (lectura < 1000) printf("000");
			 	  else if (lectura < 10000) printf("00");
			 	  		else if (lectura < 100000) printf("0");				
		printf("%.2f", lectura);
		
		
		if (c < 9)  
		{
			printf(" - "); 
			c++;
		}			
		else 
		{
			printf("\n");
			c = 0;
		}
		fread(&lectura, sizeof(float), 1, f); 
	}
	
	
	
}


float total(FILE *f)
{
	float lectura;
	float suma = 0;

	rewind(f); 
	
	fread(&lectura, sizeof(lectura), 1, f);
	
	while(!feof(f))
	{
	  suma = suma + lectura; 
	  
	  fread(&lectura, sizeof(lectura), 1, f);
	  
	}
	
	return suma; 
}



