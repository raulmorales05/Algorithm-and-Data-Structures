/*03) ? Una empresa que se dedica a la producción de ropa masculina, posee N taller para la confección
de las prendas que comercializa, que son pantalones, camisas y remeras. La cantidad mensual
producida de pantalones, camisas y remeras por cada una de sus fábricas son registradas en una
matriz. ¿Determinar el orden de la matriz M x N?
a. Realizar la carga de la matriz, de manera aleatoria.
b. Mostrar la cantidad producida de cada una de sus prendas en los N talleres.
c. Usando una función calcular y mostrar en la función main() cual fue el taller que tuvo mayor
producción.*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void cargar(int m1,int n1,int a[10][10]);
void mostrar (int m1, int n1,int a[10][10]);
void calcular(int m1, int n1, int a[10][10], int t[10]);




main()
{ 
    int m,n,a[10][10], t[10];
    m=3;
    
   	printf("Ingrese la cantidad de talleres: ");
   	scanf("%d", &n);
	   
	       
    cargar(m,n,a);
    printf("\n");
    mostrar(m,n,a);
    printf("\n");
    calcular(m,n,a,t);
}
void cargar(int m1,int n1,int a[10][10])
{
    int i,j;
    	
    srand(time(NULL));
    
    for(i=0;i<3;i++)
        {
            for(j=0;j<n1;j++)
                 {
                 	
					a[i][j]=rand()%100;
				 }
        }		  
        
}
void mostrar (int m1, int n1,int a[10][10])
{
	int i,j;
	for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                 {
				printf("\t %d",a[i][j]);
				}
				printf("\n");
         }
         
}
void calcular(int m1, int n1, int a[10][10], int t[10])
{
	int i,j,s;
	
	      for(j=0;j<n1;j++)
          {
             s=0; 
              {for(i=0;i<m1;i++)
              	  s=s+a[i][j]; // es un acumulador ,va sumando las prendas
			  }
			  
			t[j]=s;
			  
		  }
		  
	int mayt=0,c;
		  
	for(j=0; j<n1;j++)
	{
		
		if(t[j]>mayt)
		{
		mayt=t[j];	
		c=j;
		}
	
	}

		      
	printf("\n el taller que produjo mas prendas es el %d con una cantidad de %d prendas", c,mayt );
}

