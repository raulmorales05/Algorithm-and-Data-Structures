#include<stdio.h>
#include<math.h>
int main(){ 
	
	int edad,sexo, pat, mg=0, f=0, i,n, masc=0;
	float p;
	
	printf("ingrese el numero de pacientes: ");
	 scanf("%i",&n);
	 i=1;
	
	while (i<=n)
	{
		printf("\ningrese su edad: ");
	 	 scanf("%i", &edad);
	 
	     printf("ingrese su sexo (1 es masculino y 2 es femenino): ");
		 scanf("%i", &sexo);
	 
	     printf("ingrese su patologia (0 es Gripe estacional, 1 es Gripe A, 2 es Nuemonia y 3 es Bronquitis): ");
	     scanf("%i", &pat);
	 
	 if (sexo==2)
	  {  f+=1;}
	  
	 if (sexo== 1 && pat==1)
	    {mg+=1;}
	    
	 if (sexo==1)
	   { masc+=1;
	   }
	  
	    p=f*100/(masc+f);
	    i++;			 
	    if (i<=n) {
		 printf("\nSIGUIENTE PACIENTE: "); 
	    }
	   
	}

	printf(" La cantidad de personas masculinas con Gripe A son: %i ", mg);
	printf("\n El porcentaje de personas femeninases: %.1f", p);
	
	
	
	
	
		 
	
	
	
	
	
	
	
	return 0;
}
