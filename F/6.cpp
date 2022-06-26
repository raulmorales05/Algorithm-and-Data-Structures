#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef char APELLIDO[30];
typedef char CARRERA[30];
void agregar_apellido(APELLIDO a[100],int &na,char apellido[30]);
void agregar_carrera(CARRERA b[100],int &nb, char carrera[30]); 
void extraer_apellido(char linea[140],char apellido[30]);

main()
{
	FILE*arch;
	char apellido[30],nombre[30],carrera[30],nota[30],linea[140];
	APELLIDO a[100];
	CARRERA b[100];
	int i,n,na=0,nb=0,c;
	arch=fopen("alumnos.txt","a+t");
	printf("ingrese la cantidad de estudiantes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ingrese el nombre: ");
		_flushall();
		gets(nombre);
		printf("ingrese el apellido: ");
		_flushall();
		gets(apellido);
		agregar_apellido(a,na,apellido); 
		printf("ingrese la carrera: ");
		_flushall();
		gets(carrera);
		agregar_carrera(b,nb,carrera);
		printf("ingrese la nota: ");
		_flushall();
		gets(nota);
		strcpy(linea,nombre);
		strcat(linea,";");
		strcat(linea,apellido);
		strcat(linea,";");
		strcat(linea,carrera);
		strcat(linea,";");
		strcat(linea,nota);
		strcat(linea,"\n");
		fputs(linea,arch); 
	}
	fseek(arch,0,SEEK_SET);
	fscanf(arch,"%s",&linea);
	while(!feof(arch))
	{
		puts(linea);
		fscanf(arch,"%s",&linea);
	}
	for(i=0;i<na;i++)
	{c=0;
	fscanf(arch,"%s",&linea);
	while(!feof(arch))
	{
		extraer_apellido(linea,apellido);
		if (strcmpi(a[i],apellido)==0)c++;
		fscanf(arch,"%s",&linea);
	}
	printf("\n%20s %5d veces",apellido,c); 
	}
	fclose(arch);
}

void agregar_apellido(APELLIDO a[100],int &na,char apellido[30])
{
	int i,h=0;
	strupr(apellido);
	for(i=0;i<na&&h==0;i++)
	   if(strcmpi(a[i],apellido)==0)
	      h=1;
	if(h==0)
	{
		strcpy(a[na],apellido);
		na++;
	}
}
void agregar_carrera(CARRERA b[100],int &nb, char carrera[30])
{
	int i,h=0;
	strupr(carrera);
	for(i=0;i<nb&&h==0;i++)
	   if(strcmpi(b[i],carrera)==0)
	      h=1;
	if(h==0)
	{
		strcpy(b[nb],carrera);
		nb++;
	}
	
}
void extraer_apellido(char linea[140],char apellido[30])
{
	int i=0,pc=0,j=0;
	while(linea[i]!=';')
	i++;
	i++;
	while(linea[i]!=';')
	{
		apellido[j]=linea[i];
		j++;
		i++;
	}
	apellido[j]='\0';
	
}

