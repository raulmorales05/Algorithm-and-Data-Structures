#include<stdio.h>
 int soc, edad,  dep, sexo,M=0, fem,mas,men,n=0;
 	int main() {
 	printf ("ingrese el numero 1 para iniciar el proceso: ");
 	scanf("%i", &n);


	 while (n!=0)
	 {
	 
	 printf("ingrese su numero de socio:  "); scanf("%i",&soc);
 	
 	printf("ingrese su edad:  "); scanf("%i",&edad);
 	
 	printf("ingrese su deporte(1 es futbol, 2 es natacion, y 3 es jockey):  "); scanf("%i",&dep);
	 
	printf("ingrese su sexo:  "); scanf("%i",&sexo);	
	
	
	
	if(edad>=30 && edad<=50 && dep==1){ M++;	}
 	if (sexo==1){mas++; }
	if (sexo==2) {fem++;	}	
	if (edad<16){men++;	}
	
 	  printf ("ingrese el numero 0 si desea terminar el proceso, de lo contrario escriba el nuemro 1:  ");
 	  scanf("%i", &n); }
			
		printf("\nLos socios entre la edad de 30 y 50 años que practican futbol son: %i ", M);  	  
 	  	printf("\nLos socios femenino que tiene el club: %i ", fem);  
 	  	printf("\nLos socios masculinos que tiene el club: %i ", mas);  
 	  	printf("\nLos socios menores de 16 años son: %i ", men);  
 	  
 	
 	return 0;
 }
