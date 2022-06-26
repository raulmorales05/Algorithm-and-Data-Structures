#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ingresar(int numeros[100]){
	
	int i;
	
	srand(time(NULL));
	
		
	for(i=0;i<100;i++){
		
		numeros[i]= rand()%433;
		
	}
	for(i=0;i<100;i++){
				
				printf("\n\nnumero %d: %d",i+1,numeros[i]);
			}	
	
	
}
int multiplos(int numeros[100]){
	
	int k,i,multiplos;
	printf("\n\nEncontrar la cantidad de  multiplos: ");
	scanf("%d",&k);
	for(i=0;i<100;i++){
		
		if(numeros[i]%k==0){
			
			multiplos++;
					
		}
		
		
		
	}
	
	
	return multiplos;
}




main(){
	int numeros[100],m;
	ingresar(numeros);
	
	m=multiplos(numeros);
	printf("\nLa cantidad de multiplos es: %d",m);
	
	
	
	
}
