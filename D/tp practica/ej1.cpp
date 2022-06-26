#include<stdio.h>
#include<stdlib.h>


void ingresar(float m,float n,float a1[50][50]);
float may(float m,float n, float a[50][50]);
float men(float m,float n, float a[50][50]);
void mostrar(float m,float n,float a[50][50]);

main()
{
    float m=4,n=3;
    float a[50][50];

    ingresar(m,n,a);



    may (m,n,a);
                 printf("\n El mayor numero es: %.2f ",may (m,n,a));
    men (m,n,a);
                 printf("\n El menor numero es: %.2f \n",men (m,n,a));

    mostrar(m,n,a);


 system("pause");

  
  
}



void mostrar(float m,float n,float a[50][50])
{
	int i,j;
	    printf("\nSu matriz es:  ");
	
	
	for(i=0;i<m;i++){
	printf("\n");
		for(j=0;j<n;j++)
		{
			printf("\t\t a[%d][%d]=%.2f_",i+1,j+1,a[i][j]);
		}

        
        printf("\n\n");
	}
	
}



float men(float m,float n, float a[50][50]){

int i,j;
float men=100;

for(i=0;i<m;i++)
{
            for(j=0;j<n;j++)
            {
                 if(a[i][j]<men){

                     men=a[i][j];
                 }

            }
}
	
	
return men;


}










float may(float m,float n, float a[50][50]){

int i,j;
float mayn;

for(i=0;i<m;i++)
{
            for(j=0;j<n;j++)
            {
                 if(a[i][j]>mayn){

                     mayn=a[i][j];
                 }

            }
}
	
	
return mayn;


}










void ingresar(float m,float n,float a[50][50] ){

	int i ,j;
	     printf("\nIngrese la matriz: ");
	         printf("\n\n");
	
for(i=0;i<m;i++)
{
	 
   
            for(j=0;j<n;j++)
            {
            
                        printf("\t\t a[%d][%d]=",i+1,j+1);
                        scanf("%f",&a[i][j]);
                    
                        
            }

	    printf("\n\n\n");


}}
