#include<stdio.h>
#include<math.h>

int rigidotrunc;
float rigido;
 	
 int main(){
 	printf("ingrese la capacidad del disco rigido en GB: "); scanf("%f",&rigido);
 	 
 	 rigido = rigido*1024;
 	 rigido = rigido/700;  
 	rigidotrunc = trunc(rigido);
 	
 	if (rigidotrunc<rigido){ rigidotrunc = rigidotrunc+1;  		}
	 
	 printf("discos: %i", rigidotrunc);
	 return 0;

 }
