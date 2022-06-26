/*04) ? Se tiene una matriz A de orden M*N de números enteros
a. Realizar la carga de la matriz A, puede hacerse de manera aleatoria. Ver ejemplo al final del TP
b. Obtener la Matriz B que es la matriz traspuesta o transpuesta de At
c. Mostrar la matriz A y la Matriz B*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void cargar(int m1,int n1,int a[10][10]);
void mostrar(int m1,int n1,int a[10][10]);  
void mostrart(int m1,int n1,int a[10][10]); 



main()
{ 
   int n,m,a[10][10];
   
   printf("Ingrese numero de filas: ");
   scanf("%d", &m);
   
   printf("Ingrese numero de columnas: ");
   scanf("%d", &n);
   
	cargar(m,n,a);
	
	printf("Matriz A: ");	
	printf("\n");
	mostrar(m,n,a);
	printf("\n");
	printf("Matriz B:");
	printf("\n");
	mostrart(m,n,a);
   
}
void cargar(int m1,int n1,int a[10][10])
{
    int i,j;
    	
    srand(time(NULL));
    
    for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                 {
                 	
					a[i][j]=rand()%100;
				 }
        }		  
        
}
void mostrar(int m1,int n1,int a[10][10])  
{

 int i,j;

    for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            	
                 {
					printf("%d -  ", a[i][j]);
				}
					printf("\n");
         }
} 

void mostrart(int m1,int n1,int a[10][10])  
{

 int i,j;

    for(j=0;j<n1;j++)
        {
            for(i=0;i<m1;i++)
            	
                 {
					printf("%d -  ", a[i][j]);
				}
					printf("\n");
         }
} 
