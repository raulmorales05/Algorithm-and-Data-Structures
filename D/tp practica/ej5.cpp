/*05) ?Se tiene un de orden MxNxP de valores enteros.
a. Usando una función SIN TIPO, realizar la carga del Arreglo Multidimensional.
b. Usando una función, llenar un vector donde cada elemento del vector corresponde a la suma de
todos los elementos del plano del arreglo Multidimensional. (Nota: La suma de los elementos del plano
cero se almacena en la posición cero del vector, La suma de los elementos del plano uno se almacena en
la posición uno del vector, La suma de los elementos del plano dos se almacena en la posición dos del
vector,…., así hasta sumar todos los planos).
c. Usando una función SIN TIPO, listar el vector.
d. Usando una función CON TIPO, calcular el promedio del vector y mostrar en main.*/
#include<stdio.h>
void cargar(int m1,int n1, int p1, int a[10][10][10]);
void sumar(int m1, int n1, int p1,int a[10][10][10],int v[10]);
void listar(int m1,int n1, int p1, int a[10][10][10]);
float promedio(int p1,int v[10]);
main()
{
	int n,m,p,t,s;
	float prom;
	
int a[10][10][10];
int v[10];

printf("ingrese la cantidad de filas: ");
scanf("%d",&m);
printf("ingrese la cantidad de columnas: ");
scanf("%d",&n);
printf("ingrese la cantidad de planos: ");
scanf("%d",&p);

cargar(m,n,p,a);

sumar(m,n,p,a,v);

printf("lista del vector :\n");
listar(m,n,p,a);

prom=promedio(p,v);
printf("El promedio de el vector es %.2f\n",prom );





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
void sumar(int m1, int n1, int p1,int a[10][10][10],int v[10])
{
	int k,i,j,s;

     for(k=0;k<p1;k++)
           {
             s=0;
             for(i=0;i<m1;i++)
               {
                 for(j=0;j<n1;j++)
                 
				s=s+a[i][j][k];
              }
             
             v[k]=s;
            printf("\nSuma de del plano %d= %d\n",k,v[k]);
           }
    printf("\n");
}
void listar(int m1,int n1, int p1, int a[10][10][10])
{
    int i,j,k;
    
    for(k=0;k<p1;k++)
        {
          for(i=0;i<m1;i++)
             {
              for(j=0;j<n1;j++)
            
                 {
					printf("%d",a[i][j][k]);
					printf("\n");
					
				
				 }
             }		  
        }
	printf("\n");
}

float promedio(int p1,int v[10])
{
	int k, s=0;
	float prom;
    	for (k=0;k<p1;k++)
		    {
			  s=s+v[k];
			}
		prom=(float)s/p1;
		return prom;
	
}
