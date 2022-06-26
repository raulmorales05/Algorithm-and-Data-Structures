
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 void numalea(int pc[50],int max1,int min1){
	
	int i;
	for(i=0; i<50; i++)
	{   
	   pc[0]=min1+rand()% (max1-1);
    }
}

void Eleccion(int T1)
{
	srand(time(NULL));
	T1=1+rand()%(10);
}


main(){
	int numeros[50],max,min,i,j=1,pc[50],c,n=1,p,fin=0,T;
	
	printf("bienvenido a WARCOINTS presione 1 para comenzar");
	
	
	if(T==1)
	{
		printf("\nComienza el Usuario");
		
	
	    srand (time(NULL));
		
		do{	for(i=0;i<1;i++)
			      {
			       numeros[0]=rand()% (51-10);
			      }
			
			}			
		while (numeros[0]<10);
	
	}
	else
	{
		printf("\nComienza la computadora");
		
		srand (time(NULL));
		
			for(i=0;i<1;i++)
			{
			   numeros[0]=rand()% (51-10);
			}
	}
		
		
			
		
		
		
			
        printf("\n\n Numero de monedas  es %d ", numeros[0]);
	
	
	
	    printf("\nIngrese la cantidad minima de monedas que se pueden retirar: "); 
	    scanf("%d",&min);
	    
	    printf("Ingrese la cantidad maxima de monedas que se pueden retirar: "); 
	    scanf("%d",&max);
	    
	
	
	
	while(fin==0){
		
		
	printf("\nIngrese la cantidad de monedas a eliminar: "); 
	scanf("%d",&n);
	
	if(n<min)
	{
		printf("\nERROR: se deben desapilar numeros mayorers a %d",min," monedas. Volver a intentar!!!!");
	}
	else
	{
		if(n>max)
		{
			printf("\nERROR: se deben desapilar hasta %d",max," monedas. Volver a intentar!!!!");
		}
		else
		{
			numeros[0]=numeros[0]-n;
	        printf("\nquedan %d monedas",numeros[0]);
	
		    if(numeros[0]==0 || (numeros[0]-min-1)==0){
		             p=5;
			         printf("\nGano!!! Puntaje obtenido %d",p);		
	                 j=0;  	
	                 fin=1;
					      }
		}
    
   }
		
	
	
	// computadora
	if (j!=0){
		
	    numalea(pc,max,min);
	    
        printf("\n la computadora saco %d",pc[0] );
							 
		numeros[0]=numeros[0]-pc[0];
		
	   	printf("\nquedan %d monedas",numeros[0]);
		
	    if(numeros[0]==0 || (numeros[0]-min-1)==0){
		              p=0;
			          printf("\nGano la computadora!! Puntaje obtenido %d",p);
                      j=0;  
					  fin=1;		
	            }
		
              }
	j++;
	}
	
	return 0;
}
