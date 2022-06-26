#include<stdio.h>
#include<stdlib.h>
void mayor(int numeros[100],int n);
void mostrar(int numeros[100],int n);
void ingresar(int numeros[100],int n);
void menor(int numeros[100],int n);

void mostrar(int numeros[100],int n){
	int i;
	for(i=0;i<=n;i++){
	
	 printf("\n\nnumero : %d",numeros[i]);
	
	
	}
	
	
}



void ingresar(int numeros[100],int n){
	int i;
	
	for(i=0;i<n;i++){
		
		printf("ingrese EL ARREGLO[%d]:  ",i+1);
		scanf("%d",&numeros[i]);
				
			
	}
	
	
	
	
}

void mayor(int numeros[100],int n){
	int i,aux;
	int  band ;
	
	do {band= 0; 
	
		for(i=0;i<n;i++){
			
			if (numeros[i]<numeros[i+1]){
				
			   aux= numeros[i];
			   numeros[i]= numeros[i+1];
			   numeros[i+1]= aux;
				band =1;
				
				
			}
			
				
		}
	
    }while(band==1);
   	
		
}

void menor(int numeros[100],int n){
	int i,aux;
	int  band ;
	
	do {band= 0; 
	
		for(i=0;i<n;i++){
			
			if (numeros[i]>numeros[i+1]){
				
			   aux= numeros[i];
			   numeros[i]= numeros[i+1];
			   numeros[i+1]= aux;
				band =1;
				
				
			}
			
				
		}
	
    }while(band==1);
	
}
main(){
	
	int numeros[100],n;
	printf("\nIngrese la cantidad de numeros a ingresar: ");
	scanf("%d",&n);
	
	
	ingresar(numeros,n);
	mayor (numeros,n);
	printf("\nNumeros ordenados de mayor a menor: ");
	mostrar (numeros,n);
	menor(numeros,n);
	printf("\nNumeros ordenados de menor a mayor: ");
	mostrar (numeros,n);
	getch();
	
}
