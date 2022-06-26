#include<stdio.h>
void ingresar(int n1, int pro1[50],int leg1[50]);
int ord(int n1,int pro1[50],int leg1[50]);

void ingresar(int n1,int pro1[50],int leg1[50]){
	int i;
	
	for (i=0;i<n1;i++){
		
		printf("\n\n pro[%d]= ", i+1);
		scanf("%d",&pro1[i]);
		printf("\n leg[%d]= ",i+1);
		scanf("%d",&leg1[i]);
	
	 

	}
}
int ord(int n1,int pro1[50],int leg1[50]){
		int i,aux1,b,aux;
	
		do{
			b=0;
			//vector ordenado
			for(i=0;i<n1-1;i++){
				if(pro1[i]<pro1[i+1]){
				
					aux=pro1[i];
					pro1[i]=pro1[i+1];
					pro1[i+1]=aux;

                    aux1=leg1[i];
					leg1[i]=leg1[i+1];
					leg1[i+1]=aux1;

					b=1;
				//vactor ordenado
				}
			}
		}
		while (b==1);
		
		return leg1[0];
		
		
		
	}

main(){
	int n,leg[50],pro[50],l;
	
	
	
	printf("ingrese la cantidad de Alumnos: ");
	scanf("%d ",&n);
	
	
	ingresar(n,pro,leg);
	
	ord(n,pro,leg);
	
	printf ("\n\nEl legajo del mayor promedio es: %d ",leg[0]);

	

return 0;
}
