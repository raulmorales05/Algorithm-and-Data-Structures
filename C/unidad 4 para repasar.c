#include<stdio.h>


/*main(){
int n,i,cod[50],can[50],pos;
float pre[50],may;
printf("Ingrese el orden del vector: ");
scanf("%d",&n);

may=0;
for (i= 0; i<n; i++)
{
    
    printf("\n cod[%d]= ",i);
    scanf("%d",&cod[i]);

printf("\n can[%d]= ",i);
    scanf("%d",&can[i]);

printf("\n pre[%d]= ",i);
    scanf("%d",&pre[i]);

if (pre[i]>may){
may=pre[i];
pos=i; }

}


printf("\n el producto con el precio mas alto tiene codigo %d\n", cod[pos]);

    return 0;
}*/

/*
main(){
	int n,i,a[50],aux,b;
	printf("ingrese el orden del vector: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		
	printf("\n a[%d]= ",i);
	scanf("%d",&a[i]);
	                   }
	                   
	do {
		b=0;
		for(i=0; i<n; i++){
			
			if(a[i]>a[i+1]){
				aux=a[i];
				a[i]=a[i+1];
				a[i+1]=aux;
			    b=1;
				
			}
			
		}
		
		
		
	}
while (b==1);

printf("el vector ordenado es: ");

for(i=0; i<n; i++){
printf("\n a[%d]= %d",i,a[i+1]);	
	
}
}
*/

/*
main(){
	int n,i,leg[50],b,aux1;
	float pro[50],auxp;
	
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		
	  printf("\n leg[%d]= ",i);
      scanf("%d",&leg[i]);

      printf("\n pro[%d]= ",i);
      scanf("%d",&pro[i]);
	}
do{
	b=0;
		for(i=0; i<n; i++){
			if(pro[i]<pro[i+1]){
				
				aux1= leg[i];
				leg[i]=leg[i+1];
				leg[i]=aux1;
				
				
				auxp=pro[i];
				pro[i]=pro[i+1];
				pro[i]=auxp;
				b=1;
				
				
				
			}
			
			
		}
	
}
while(b==1);

printf("el vector ordenado es:\n ");

for(i=0; i<n; i++){
printf("\n pro[%d]= %d",i,pro[i+1]);	

printf("\n leg[%d]= %.2f",i,leg[i+1]);

}
}

*/














