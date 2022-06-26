/*06) Se tiene una Arreglo Multidimensional de orden MxNxP con valores reales.
:
a. Realizar la carga del Arreglo Multidimensional, por medio de una función SIN TIPO.
b. Por medio de una función CON TIPO, encontrar el menor valor dentro del Arreglo Multidimensional.
c. Por medio de una función CON TIPO, determinar si el menor valor encontrado es o no par.*/
#include<stdio.h>
void cargar(int m1,int n1, int p1, int a[10][10][10]);
int busmen(int m1,int n1, int p1, int a[10][10][10]);
int par(int men);

main()
{
	int n,m,p,men,e;
int a[10][10][10];

printf("ingrese la cantidad de filas: ");
scanf("%d",&m);

printf("ingrese la cantidad de columnas: ");
scanf("%d",&n);

printf("ingrese la cantidad de planos: ");
scanf("%d",&p);

cargar(m,n,p,a);

men=busmen(m,n,p,a);

printf("Menor valor: %d", men);

e=par(men);

if(e==0)
{
	printf(", es par");
}
else
{
	printf(", es impar");
}

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
int busmen(int m1,int n1, int p1, int a[10][10][10])
{
	int i,j,k,men=a[0][0][0],b1;
	for(k=0;k<p1;k++)
        {
          for(i=0;i<m1;i++)
             {
              for(j=0;j<n1;j++)
                 { 
                   if(a[i][j][k]<men) 
				    {
				 		men=a[i][j][k];
				    }
			     }
		    }
	   }
	   return men;
} 

int par(int men)
{
	int e;
	
	if(men % 2==0)
	{
		e=0;
	} 
	else
	{
		e=1;
	}
	return e;
}


		  


