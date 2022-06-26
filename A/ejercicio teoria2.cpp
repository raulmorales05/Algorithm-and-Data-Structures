#include<stdio.h>
 int main(){
 	
float x, y;

printf("ingrese el valor de un numero:  ");
scanf(" %f", &x); 
printf("ingrese el valor de otro numero:  ");
scanf("%f",&y);
if(x>=-3 && x<=3 && y>=-3 && y<=3){
	puts("se encuentra dentro");
}
else{ puts ("se encuentra afuera");
}




 	return 0;
 }
