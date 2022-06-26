
#include<stdio.h>
#include<time.h>

 void numalea(int pc[50],int max,int min){
	int i;
	
	for(i=0;i<50;i++){
		                
		            	pc[0]=rand()% ((max+1)-min);
		             }
	
	
}


main(){
	int numeros[50],max,min,i,j=1,pc[50],c,n=1,p;
	printf("Ingrese la cantidad minima de monesdas que se pueden retirar: "); scanf("%d",&min);
	printf("Ingrese la cantidad maxima de monedas que se pueden retirar: "); scanf("%d",&max);
		srand (time(NULL));
		
		
			for(i=0;i<1;i++){
			numeros[0]=rand()% (51-10);
		
		}
	printf("\n\n Numero de monedas  es %d ", numeros[0]);
	
	
	
	
	
	while(n!=0){
		
		
	printf("\nIngrese la cantidad de monedas a eliminar: "); scanf("%d",&n);
        	numeros[0]=numeros[0]-n;
	        printf("\nquedan %d monedas",numeros[0]);
	
		if(numeros[0]==0 || (numeros[0]-min-1)==0){
		             p=5;
			         printf("\nGano!!! Puntajo obtenido %d",p);		
	                 j=0;  	
					      }
		
	
	
	// computadora
	if (j!=0){
		                 numalea(pc,max,min);
     		             printf("\n la computadora saco %d",pc[0] );
			                 
							 
							   numeros[0]=numeros[0]-pc[0];
	        			printf("\nquedan %d monedas",numeros[0]);
		
	    if(numeros[0]==0 || (numeros[0]-min-1)==0){
		              p=0;
			          printf("\nGano la computadora!! Puntajo obtenido %d",p);
                      j=0;  		
	            }
		
              }
	
	
	
	j++;}
	
	

	
	
	return 0;
}
