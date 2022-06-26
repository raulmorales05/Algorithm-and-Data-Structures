#include<stdio.h>
int main(){
	int promedioparciales, examenintegrador, trabajofinal, calificacionf;
	printf("ingrese la nota del promedio de los dos parciales:  ");
		scanf("%i",&promedioparciales);
	printf("ingrese la nota de su examen integrador: ");
		scanf("%i", &examenintegrador);	
	printf("ingrese la nota de su trabajo final: ");
	scanf("%i",&trabajofinal);
	 promedioparciales= promedioparciales*0.5;
	 examenintegrador= examenintegrador*0.3;
	 trabajofinal= trabajofinal*0.2;
	 calificacionf= promedioparciales+examenintegrador+trabajofinal;
	 printf("su calificacion final es:  %i", calificacionf);
	 
	return 0;
}
