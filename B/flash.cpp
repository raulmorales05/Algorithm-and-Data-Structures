#include<stdio.h>
#include<stdlib.h>
float promedio(int sumnum);
main(){
	
	int i, nroingresado,sumnum=0;
	float prom;
	for(i=0;i<=4;i++){
		printf("ingrtese el numero %i:  ", i+1);
		scanf("&i",&nroingresado);
		sumnum+=nroingresado;
	}
	prom= promedio(sumnum);
	printf("el promedio es: %2.2f\n",prom);
	system("PAUSE");
	
}
float promedio(int sumnum){
	float prom; 
	prom= (float) sumnum/5;
	return prom;
}
