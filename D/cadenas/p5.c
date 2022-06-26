#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ingrese();
void mostrarde();
void mostrarlis();
void mostrarape();
void buscar();
void terminar();
void menu();

int opcion,n,b,pos;

typedef char cadena[200];
cadena nombre[80],aux;
cadena apellido[80];
cadena apeynom[80];
cadena buscaro;

main()
{
	do
	{
		
		system("cls");
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				ingrese();
			break;
			case 2:
				mostrarde();
			break;
			case 3:
				mostrarlis();
			break;
			case 4:
				mostrarape();
			break;
			case 5:
				buscar();
			break;
			case 6:
				terminar();
			break;
			default: 
		    	printf("\n Ingrese nuevamente un numero correcto");
			break;
		}
		printf("\n\n");
		system("pause");
		
	}while(opcion<=1 || opcion>6);
	
}
void menu()
{      
		printf("\n\t\t ==LISTA DE SOCIOS==");
		printf("\n\n\t 1- Ingrese socios");
		printf("\n\n\t 2- Mostrar en orden decreciente.");//falta
		printf("\n\n\t 3- Mostrar lista de personas");
		printf("\n\n\t 4- Mostrar los apellidos en forma creciente");
		printf("\n\n\t 5- Buscar socios");
		printf("\n\n\t 6- Salir");
		printf("\n Elija su opcion: ");
}
void ingrese()
{  
	printf("\n Ingrese la cantidad de socios: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Ingrese nombre %d: ",i+1);
		_flushall();
		gets(nombre[i]);
		strlwr(nombre[i]);
		printf("Ingrese apellido %d: ",i+1);
		_flushall();
		gets(apellido[i]);
		strlwr(apellido[i]);
	}
	printf("\n opcion %d",opcion);
	printf("\nPresione una tecla para volver al menu");
	opcion=0;
}
void mostrarde()
{
	
	do
{
	b=0;
	for(int i=0;i<n-1;i++)
	{
	if(strcmp(apellido[i],apellido[i+1])<0){
		strcpy(aux,apellido[i]);
		strcpy(apellido[i],apellido[i+1]);
		strcpy(apellido[i+1],aux);		
		b=1;
	 }
	}
}while(b==1);

for(int i=0;i<n;i++)
{
	printf("De Z a la A %d: %s\n",i,apellido[i]);
}


opcion=0;
}
void mostrarlis()
{
printf("\n Lista de personas\n");

for (int i=0;i<n;i++){
strcpy(apeynom[i],apellido[i]);


//concatenar
strcat(apeynom[i],", ");

strcat(apeynom[i],nombre[i]);
strcat(apeynom[i]," ");
}
for (int i=0;i<n;i++)
{
	puts(apeynom[i]);
}


opcion=0;
}
void mostrarape()
{

do
{
	b=0;
	for(int i=0;i<n-1;i++)
	{
	if(strcmp(apellido[i],apellido[i+1])>0){
		strcpy(aux,apellido[i]);
		strcpy(apellido[i],apellido[i+1]);
		strcpy(apellido[i+1],aux);		
		b=1;
	 }
	}
}while(b==1);

for(int i=0;i<n;i++)
{
	printf("De A a la Z %d: %s\n",i,apellido[i]);
}
	printf("\n opcion %d",opcion);
	opcion=0;

}
void buscar()
{
	
	printf("\nIngrese un apellido a buscar: ");
	scanf("%s",&buscaro);
	for(int i=0;i<n;i++)
	{

	pos=strstr(apellido[i],buscaro)-apellido[i];
	
	}
	if(pos>=0){
		printf("\nEsta");
	}
	else{
		printf("\nNo esta");
    }
    
    	opcion=0;
}

void terminar(){
	
}
