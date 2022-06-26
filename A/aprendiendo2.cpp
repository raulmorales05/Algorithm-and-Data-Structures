#include<stdio.h>
int main(){
	float totCo, descuento, precio;
	printf("cual es el total de la compra:  "); scanf("%f",&totCo);
	descuento = totCo* 0.25;
	precio = totCo-descuento;
	printf("el precio es: %.2f", precio);
	
	
	
	
	
	
	
	
	
	return 0;
}
