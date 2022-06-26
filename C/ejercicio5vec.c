#include<stdio.h>
#include<time.h>
#include<stdlib.h>
float prompar(int numeros[]);
void ingresar (int numeros[100]);
float promi(int numeros[100]);
void sumarposimpar(int numeros[100]);
void sumarpospar(int numeros[100]);

void ingresar (int numeros[100]){
	int i;
	srand (time(NULL));
	
	

		
		for(i=0;i<100;i++){
			numeros[i]=rand()% 101;;
		
		}
		
			
			for(i=0;i<100;i++){
				
				printf("\n\nnumero %d: %d",i+1,numeros[i]);
			}
	
}
	float prompar(int numeros[100]){
		int c,i;
		float promp;
		
		for(i=0;i<100;i++){
		       if (numeros[i]%2==0){
		                               c++;   
			                       }
     	} 
     	promp=c*100/100;
     	return promp;
    }
    
    
    
    
float promi(int numeros[100]){
		int c,i;
		float promimpar;
		
		for(i=0;i<100;i++){
		       if (numeros[i]%2==1){
		                               c++;   
			                       }
     	} 
     	promimpar=c*100/100;
     	return promimpar;
    }
    	void sumarpospar(int numeros[100]){
    		int sumapar,i;
    		for(i=0;i<100;i++){
    			
    			if(numeros[i]%2==0){
    				sumapar=numeros[i]+sumapar;
    				
    				
    			}
    			
    			   			
    			
    		}
    		printf("\nLa suma de los numeros pares: %d", sumapar);
    		
    		
    		
    	}
    
    void sumarposimpar(int numeros[100]){
    		int sumai,i;
    		for(i=0;i<100;i++){
    			
    			if(numeros[i]%2==1){
    				sumai=numeros[i]+sumai;
    				
    				
    			}
    			
    			   			
    			
    		}
    		printf("\nLa suma de los numeros pares: %d", sumai);
    		
    		
    		
    	}
    
main(){
	int numeros[100];
	
	float promp,promimpar;

	ingresar(numeros);
	//promedio de numeros pares
	promp =(float)prompar(numeros);
	printf("\n\nPromedio de pares es: %.2f",promp);
	
	promimpar =(float)promi(numeros);
	printf("\nPromedio de impares es: %.2f",promimpar);
	
	sumarpospar(numeros);
    sumarposimpar(numeros);
	
	
	
	return 0;
}
