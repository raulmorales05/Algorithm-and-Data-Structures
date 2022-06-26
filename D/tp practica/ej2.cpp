

#include<stdio.h>
void cargar(int m1,int n1,int a[10][10] );
void listar (int m1, int n1,int a[10][10]);
void listarfila (int m1, int n1,int a[10][10]);
void listarcolumna(int m1, int n1,int a[10][10]);

main()
{
	int m,n, a[10][10],i,j;
	
	printf("ingrese la cantidad de filas: ");
	scanf("%d",&m);
	
	printf("ingrese la cantidad de columnas: ");
	scanf("%d",&n);
	
	cargar(m,n,a);
	
	printf("matriz formada : \n");
	listar(m,n,a);
	

	
	printf("ingrese en que posicion desea cambiar el valor por 0\n");
	printf("Fila: ");
	scanf("%d", &i);
	printf("Columna: ");
	scanf("%d", &j);
	
	a[i][j]=0;
	
	printf("matriz formada : \n");
	listar(m,n,a);	
	
	printf("Ingrese la fila a mostrar : ");
	scanf("%d", &i);
	listarfila(i,n,a);
	

	
	printf("\nIngrese la columna a mostar: ");
	scanf("%d", &j);
	listarcolumna(m,j,a);
	
	
	
	
}
void cargar(int m1,int n1,int a[10][10])
{
    int i,j;
    
    
    for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                 {
					printf("a[%d][%d]=",i,j);
					scanf("%d",&a[i][j]);
					while(a[i][j]<=0)
					{
					printf("Incorrecto, debe ingresar un numero mayor a 0 a[%d][%d]=",i,j);
					scanf("%d",&a[i][j]);
					}
				 }
        }		  
        
}
void listar (int m1, int n1,int a[10][10])
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
void listarcolumna(int m1, int n1,int a[10][10])
{
	
            for(int i=0;i<m1;i++)
                 {
	               	printf(" %d  ",a[i][n1]);   // para mostrar la matriz -   1 -2
		           	printf("\n");                              //                        5 -2
				}
        
}

void listarfila(int m1, int n1,int a[10][10])
{
	
            for(int j=0;j<n1;j++)
                 {
	               	printf(" %d  ",a[m1][j]);   // para mostrar la matriz -   1 -2
		                                              //                        5 -2
				}
        	printf("\n"); 
}


