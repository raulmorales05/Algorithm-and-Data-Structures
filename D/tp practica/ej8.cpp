/*08) Se tiene un Arreglo Multidimensional de valores enteros, de orden MxNxP.
a. Realizar la carga del Arreglo Multidimensional, por medio de una función.
b. Mediante una función, Realizar la carga a un vector, que contendrá en cada elemento la suma de los
elementos de cada plano de la Arreglo Multidimensional. (Nota: Tener en cuenta el orden que se deberá dar al
vector en su definición).
c. Mostrar el vector generado a través de una función sin tipo*/
#include<stdio.h>
void cargar(int m1,int n1, int p1, int a[10][10][10]);
void cargarvector(int m1,int n1, int p1, int a[10][10][10],int v[10]);


main()
{ 

int n,m,p;
int a[10][10][10], v[10];
printf("ingrese la cantidad de filas: ");
scanf("%d",&m);
printf("ingrese la cantidad de columnas: ");
scanf("%d",&n);
printf("ingrese la cantidad de planos: ");
scanf("%d",&p);

  
cargar(m,n,p,a);
cargarvector(m,n,p,a,v);
 
   
  
}
void cargar(int m1,int n1, int p1, int a[10][10][10])
{
    int i,j,k;
    
    for(k=0;k<p1;k++)
        {
          for(i=0;i<m1;i++)
             {
              for(j=0;j<n1;j++)
                 {
					printf("a[%d][%d][%d]=",i,j,k);
					scanf("%d",&a[i][j][k]);
				 }
             }		  
        }
}

void cargarvector(int m1,int n1, int p1, int a[10][10][10],int v[10])
{
	 int i,j,k,s=0;
	 
	for(k=0;k<p1;k++)
        {
          for(i=0;i<m1;i++)
             {
              for(j=0;j<n1;j++)
                 {
					s=s+a[i][j][k];
				 }
             }
			 printf("El plano %d suma: %d",k,s);	
			 printf("\n");	  
        }
	
}


