#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<conio.h>
 
typedef char cadena [60];
 void cargar (cadena a[100],int b[100],int n);
 int mayor (int b[100],int n);
 int encontrar(cadena a[100],int n,cadena x);
 main()
 {
 
 	cadena a[100],x;
 	int b[100],n,pmay,pos;
 	printf("ingrese la cantidad de asignaturas de la carrera ISI: ");
 	scanf("%d",&n);
 	cargar(a,b,n);
 	pmay=mayor (b,n);
 	printf("\nla asignatura %s posee %d inscriptos: ",a[pmay],b[pmay]); 
 	printf("\ningrese la asignatura para mostrar los inscriptos: ");
 	_flushall();
 	gets(x);
 	pos=encontrar(a,n,x);
 	if(pos==-1)
 	printf("\nla asignatura no se halla en el vector: ");
 	else
 	printf("\nen la asignatura %s hay %d inscriptos: ",a[pos],b[pos]);
 	getch();
 	
 }
 void cargar (cadena a[100],int b[100],int n)
 {
 	printf("\ncarga de vectores paralelos:\n");
 	int i;
 	for(i=0;i<n;i++)
 	{
 		printf("ingrese la asignatura: ");
 		_flushall();
 		gets(a[i]);
 		printf("ingrese la cantidad de inscriptos: ");
 		scanf("%d",&b[i]);
 	}
 }
 int mayor (int b[100],int n)
 {
 	int pmay,i;
 	for(i=0;i<n;i++)
 	{
 		if(i==0||b[i]>b[pmay])
 		pmay=i;
 	} return pmay;
 	
 }
 int encontrar(cadena a[100],int n,cadena x) 
 {
 	int i,pos=-1; 
 	for(i=0;i<n&&pos==-1;i++)
 	   if(strcmpi(a[i],x)==0)
 	   pos=i;
 	return pos;
 	
 }
