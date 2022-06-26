#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void cargar_frase_luis(FILE*arch1 );
void cargar_frase_maria_emilia(FILE*arch2);
void mezclar_ficheros(FILE*arch1,FILE*arch2,FILE*arch3);
void minuscula(FILE*arch1);
void mayuscula(FILE*arch2);
void mostrar(FILE*arch3);
		
main()
{
	FILE*arch1,*arch2,*arch3;
	int opcion;
	arch1=fopen("Archivo1.txt","a+t"); 
	arch2=fopen("Archivo2.txt","a+t");
	arch3=fopen("Frases.txt","a+t");
	do
	{
		printf("\n1)GUARDAR FRASE DE JOSE LUIS");
		printf("\n2)GUARDAR FRASE DE MARIA EMILIA");
		printf("\n3)CREAR UN NUEVO FICHERO");
		printf("\n4)FRASE DE JOSE LUIS EN MINUSCULA");
		printf("\n5)FRASE DE MARIA EMILIA EN MAYUSCULA");
		printf("\n6)MOSTRAR ARCHIVO COMBINADO");
		printf("\n7)SALIR DEL SISTEMA");
		printf("\nELIJA UNA OPCION:");
		scanf("%d",&opcion);
		
	switch (opcion)
	{
		case 1:cargar_frase_luis(arch1);
		break;
		case 2:cargar_frase_maria_emilia(arch2);
		break;
		case 3:mezclar_ficheros(arch1,arch2,arch3);
		break;
		case 4:minuscula(arch1);
		break;
		case 5:mayuscula(arch2);
		break;
		case 6:mostrar(arch3);
		break;
		
	}
		
	}while(opcion<7);
	fclose(arch1);
	fclose(arch2);
	fclose(arch3);
	
	
}
void cargar_frase_luis(FILE*arch1 )
{
	char frase[100];
	int resp;
	fseek(arch1,0,SEEK_END);
	do
	{
		printf("ingrese una frase: ");
		_flushall();
		gets(frase);
		fprintf(arch1,"%s\n",frase); 
		printf("\n desea cargar otra frase?(1=si 0=no)");
		scanf("%d",&resp);
		
		
	}while(resp==1);
}
void cargar_frase_maria_emilia(FILE*arch2)
{
  	char frase[100];
	int resp;
	fseek(arch2,0,SEEK_END);
	do
	{
		printf("ingrese una frase: ");
		_flushall();
		gets(frase);
		fprintf(arch2,"%s\n",frase); 
		printf("\n desea cargar otra frase?(1=si 0=no)");
		scanf("%d",&resp);
		
		
	}while(resp==1);	
}
void mezclar_ficheros(FILE*arch1,FILE*arch2,FILE*arch3)
{
	char frase[100];
	fseek(arch1,0,SEEK_SET);
	fscanf(arch1,"%s",&frase);
	while(!feof(arch1))
	{
		fprintf(arch3,"%s\n",frase);
		fscanf(arch1,"%s",&frase);	
	}
	fseek(arch2,0,SEEK_SET);
	fscanf(arch2,"%s",&frase);
	while(!feof(arch2))
	{
		fprintf(arch3,"%s\n",frase);
		fscanf(arch2,"%s",&frase);		
	}
	printf("\nse genero un nuevo archivo\n");
}
void minuscula(FILE*arch1)
{
	char frase[100];
	fseek(arch1,0,SEEK_SET);
	fscanf(arch1,"%s",&frase); 
	while(!feof(arch1))
	{
		printf("\n%s",strlwr(frase)); 
		fscanf(arch1,"%s",&frase);	
	}
	
}
void mayuscula(FILE*arch2)
{
		char frase[100];
	fseek(arch2,0,SEEK_SET);
	fscanf(arch2,"%s",&frase);
	while(!feof(arch2))
	{
		printf("\n%s",strupr(frase)); 
		fscanf(arch2,"%s",&frase);	
	}
}
void mostrar(FILE*arch3)
{
		char frase[100];
	fseek(arch3,0,SEEK_SET);
	fscanf(arch3,"%s",&frase);
	while(!feof(arch3))
	{
		strlwr(frase);
		toupper(frase[0]); 
		printf("\n%s",frase); 
		fscanf(arch3,"%s",&frase);	
	}
}
		
