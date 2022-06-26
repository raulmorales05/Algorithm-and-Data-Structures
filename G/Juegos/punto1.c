#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void ingresar (int numeros[100]);


void ingresar (int numeros[100]){
	int i,p,n=1,j=1;
	srand (time(NULL));
	
	

		
		for(i=0;i<999;i++){
			numeros[0]=rand()% (1000-1);
		
		}
		
		printf("\n\nnumero secreto: %d",numeros[0]);
		
			
		while (n!=0){
			printf("\nIntento %d: ",j); scanf("%d",&n);
							
					
					if (numeros[0]>n){
						
						printf("El numero secreto es mayor y se encuentra entra %d y 999",n);
						
					}
					if (numeros[0]<n){
						
						printf("El numero secreto es menor y se encuentra entra %d y 1",n);
						
					}
					if (numeros[0]==n){
						
						
						
						if(j==1){
							p=10;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==2){
							p=9;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==3){
							p=8;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==4){
							p=7;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==5){
							p=6;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==6){
							p=5;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							}						
						if(j==7){
							p=4;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==8){
							p=3;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						if(j==9){
							p=2;
							n=0;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						}
						
						
						if(j==10){
							n=0;
							printf("El numero secreto es: %d y su puntaje es 0",numeros[0]);
						}
					
						}
					
					
						j++;
					}
				
					
					}
	

    
    

main(){
	int numeros[100];
	
ingresar(numeros);


	
	
	return 0;
}
