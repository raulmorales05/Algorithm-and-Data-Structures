#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int Num, D,INT=1,p; 
	int FIN=0;
	
	srand(time(NULL));
	D=1000+rand()%(9999);
	
	while(FIN==0)
	{
		do {printf("Ingrese un numero de 4 cifras:  ");
		scanf("%d",&Num);
		
		   if(Num>999 && Num<10000){
			
			
			if(Num==D)
	             { 
		            printf("\nHas ganado, numero acertado!!");
		            
		            
		            
		            	if(INT==1){
							p=10;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==2){
							p=9;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==3){
							p=8;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==4){
							p=7;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==5){
							p=6;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==6){
							p=5;
							
							printf("\ntu puntaje obtenido es: %d ",p);
							}						
						if(INT==7){
							p=4;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==8){
							p=3;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==9){
							p=2;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						
						
						
		            
		            
		            
		            
		            
		            FIN=2;
		            
		            
		            
	              }
	        else
	          {
		                  if(Num<D && FIN==0 && INT<11)
		                         {
			           printf("El numero es mayor");
		                         }
		                    else
		                         {
		            	printf("El numero es menor");
		                         }
	           }
	
	             INT++;
	             
	        if(INT>0 && INT<11  && FIN==0)
	                             {
		                   printf("\n\n\nIntento %d ",INT);
	                             }
	
	
	
	         if(INT==11)
	         {
	         	        printf("\n\n\nHas perdido :( ");
	        	        printf("\nEl numero era %d ",D);
						printf("Tu puntaje es 0");	
	                  	FIN=1;
	            	    				
           	}
			
			
			
			
			
			
			
			
			
			
			
			
		      }
		
		
		
		
		
		}
		
		
		
		
		
		
		
		while(Num<999 && Num>10000);
			
		
		
	
	 } 
	
}

