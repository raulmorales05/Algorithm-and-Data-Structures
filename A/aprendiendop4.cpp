/*dadas las horas trabajadas por una persona y el valor por hora calcula su salario*/

#include<stdio.h>
int main(){
	int hora;
	float valorh, salario;
	
	printf("ingrese el valor de la hora: "); scanf("%f",&valorh);
	printf("ingrese la cantidad de horas trabajadas: "); scanf("%i", &hora);
	
     salario = valorh* hora;
     printf("su salario es: %.2f ",salario );
	
	
	return 0;
}
