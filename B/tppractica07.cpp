#include<stdio.h>
#include<math.h>
int  n, leg, carr,isi=0,mec=0,ele=0, i=0,a,b,c;
float pi, pm,pe;

main(){
	printf ("ingresar el numero de alumnos que egresan: ");
	scanf("%i", &n);

	while(i<n){
		printf ("ingresar el numero de legajo: ");
	scanf("%i", &leg);
	printf ("    ingresar su carrera (1 es ISI, 2 es Mecanica y 3 es Electrica): ");
	scanf("%i", &carr);
	
	if (carr==1){isi+=1;	}
	if (carr==2){mec+=1;	}
	if (carr==3){ele+=1;	}
	
	        
			i++;
		      }
					
					a= mec+ele+isi;
					b=isi+ele+mec;
					c= mec+isi+ele;
					
			pi= (float) isi*100/a;
	     	pm=(float)  mec*100/b;
			pe= (float) ele*100/c;
			
		printf("\nLa cantidad de alumnos que egresaron en ISI:  %i ",isi);
		printf("\nLa cantidad de alumnos que egresaron en Mecanica:  %i ",mec);
		printf("\nLa cantidad de alumnos que egresaron en Electrica:  %i ",ele);
		printf("\nEl porcentaje de egresados de ISI:  %.2f ", pi);
		printf("\nEl porcentaje de egresados de Mecanica:  %.2f ", pm);
		printf("\nEl porcentaje de egresados de Electrica:  %.2f ", pe);
	
	return 0; 
}
