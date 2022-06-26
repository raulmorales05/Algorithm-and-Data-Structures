#include<stdio.h>
void ingresar(int num[10]){
	int i;
	
	for(i=0;i<10;i++){
		
		printf("ingrese el arreglo[%d]:  ",i+1);
		scanf("%d",&num[i]);
				
			
	}
	
	
	
	
}
void mostrar(int num[10]){
	int i;
	for(i=0;i<10;i++){
	
	 printf("\n\nnumero [%d]: %d",i+1,num[i]);
	
	
	}
	
	
}
void potencia(int num[10],int pot[10]){
	
	
	int i;
	for(i=0;i<10;i++){
		
	pot[i]= num[i]*num[i];
	 
	 
	}

	
}
void sumar(int num[10],int pot[10], int sum[10]){
	
	
	int i;
	for(i=0;i<10;i++){
		
	sum[i]= num[i]+pot[i];
	 
	 
	}
	
	
}


main(){
	
	int num[10],pot[10],sum[10];
	
	ingresar(num);
	printf("\n\nNumeros ingresados: ");
	mostrar(num);

	potencia(num,pot);
	printf("\n\nPotencia de cada numero ingresado: ");
	mostrar(pot);
	sumar(num,pot,sum);
	printf("\n\nSuma de los anterioires arreglos: ");
	mostrar(sum);
	return 0;
	
}
