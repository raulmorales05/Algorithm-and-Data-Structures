/*07) Una empresa internacional, comercializa en 3 pa�ses los 4 productos que produce a trav�s de sus 2
sucursales. Los datos de ventas est�n registrado en una matriz multidimensional MxNxP. Donde P
representa pa�ses, M representa las sucursales y N representan los productos.
a. Defina y realizar la carga de las ventas en la matriz, por medio de una funci�n.
b. Usando una funci�n CON TIPO, calcule y muestre en main cual fue el pa�s que m�s vendi�.
c. Usando una funci�n CON o SIN TIPO seg�n estime conveniente. Realizar un listado que muestre el
total de venta de cada una de las sucursales.
*/
#include<stdio.h>
void cargar(int m1,int n1, int p1, int a[10][10][10]);
int vtas(int m1, int n1, int p1, int a[10][10][10]);
void total(int m1, int n1, int p1, int a[10][10][10]);


main()
{ 

int n,m,p,mayv,t;
   m=2;  
   n=4;
   p=3;
   t=0;
  int a[10][10][10];
  
  cargar(m,n,p,a);
  
  mayv=vtas(m,n,p,a);
  
  printf(" \n el pais que mas vendio fue el %d\n",mayv);
   
  total(m,n,p,a);
   
  
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
int vtas(int m1, int n1, int p1, int a[10][10][10])
{
	int i,j,k,s,mayv,mayvt1;
	mayv=0;
	mayvt1=0;
	
	
	 for(k=0;k<p1;k++) 
	{
        s=0;
	      for(i=0;i<m1;i++)
          {
              for(j=0;j<n1;j++)
              {
              	  s=s+a[i][j][k]; 
			  }
		  }
		  if(s>mayv)
		  {
		  	mayv=s;
		  	mayvt1=k;
		  }
    }
    return mayvt1;
  
}
void total(int m1, int n1, int p1, int a[10][10][10])
{
	int i,j,k,s,may=0,may1=0;
	
	  for(i=0;i<m1;i++)
        {
        	s=0;
          for(j=0;j<n1;j++)
             {
              for(k=0;k<p1;k++)
                 {
					s=s+a[i][j][k];
				 }
             }
			printf(" \n Las ventas de la sucursal %d es %d", i,s);
			printf("\n");
			
        }
}

