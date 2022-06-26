#include<stdio.h>
#include<math.h>
 int main(){
 	float x1,y1,x2,y2, distancia;
 	printf("ingrese el valor del primer par de coordenadas:  ");
 	scanf("%f %f",&x1,&y1);
 	printf("ingrese el segundo par de coordenadas:  ");
 	scanf("%f %f", &x2, &y2);
 	
 		if (x1>=0 && y1>=0 && x2>=0 && y2>=0){
 			distancia=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
 			printf("\n la distancia entre los dos puntos es: %.2f", distancia);
 		}
 	
 	
 	return 0;
 }
