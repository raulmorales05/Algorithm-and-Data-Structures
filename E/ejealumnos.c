#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<windows.h>


typedef struct{
	int legajo;
	char apynom[45];
	int cursa;
	float promedio;
	
	
}registro;


main(){
setlocale(LC_CTYPE,"Spanish");
int n,i=0,lega,b;
float prom;
registro alumno[50],aux;

printf("\n\ningrese el nro de legajo %d: ",i+1);
scanf("%d",&lega);

while(lega!=0){
	alumno[i].legajo=lega;
	_flushall();
	printf("\n\napellido y nombre: ");
		gets(alumno[i].apynom);
		printf("\n\nAño que cursa:");
		scanf("%d",alumno[i].cursa);
		ntf("\n\nPromedio:");
		scanf("%f",alumno[i].promedio);
	i=i+1;
	printf("\n\nIngrese el nro de legajo %d:",i+1);
		scanf("%d",&lega);
}

n=i;
// ordena los regsitros del array
do{
	b=0;
	for(i=0;i<n-1;i++){
 								if(strcmp(alumno[i].apynom,alumno[i+1].apynom)>0){
 									aux=alumno[i];
 									alumno[i]=alumno[i+1];
 									alumno[i+1]=aux;
 									b=1;
 									
		       																	}                                                                     
		
		
	                  }
	
	}
	while(b==1);
	//listado
	
	printf("\n\nListado ordenado por apellido y nombre:\n\n");
	for(i=0;i<n;i++){
						
				  		printf("\nLegajo %d: %d",i+1,alumno[i].legajo);
				  		printf("\napellido y nombre: ");
				  		puts(alumno[i].apynom);
  			         }
  			         
  			         
  			         
  			         
		system("pause");}
	



