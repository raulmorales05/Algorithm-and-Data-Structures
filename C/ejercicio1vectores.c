#include<stdio.h>


void ingresar(int n1, int numeros1[100]);
int menor(int n2,int numeros[100]);
void mostrar(int n3, int numeros[100]);




void ingresar(int n1, int numeros1[100])
{
	int i;
	
	for(i=0; i<n1;i++)
	{
	        printf("\n Numero[%d]: ",i+1);
			scanf("%d",&numeros1[i]);
	
	}
}

int menor(int n2,int numeros[100]){
	int i,men=0;
	
	for (i=0;i<n2;i++){
		
	
	if(numeros[i]<100)
	   {
			        men= numeros[i];
	   }
	
	
            }
	return men;
	
}


void mostrar(int n3, int numeros[100]){
	int i;
	
		for(i=0;i<n3;i++){
			printf(" \n		Los numero enteros ingresados son: %d",numeros[i]);
		}
		printf("\n\n");
	
	
	
}



main(){
int numeros[100],n,men;
printf("Ingrese n: ");
scanf("%d",&n);
ingresar(n,numeros);
men= menor(n,numeros);
printf("\nEl numero menor es: %d",men);

mostrar(n,numeros);

return 0;}
