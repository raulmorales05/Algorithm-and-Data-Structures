
/* pedir dos valores al usuario sumarlos, restarlos,dividirlos y multiplicarlos*/
#include<stdio.h>
int main(){
	int B, b, al, area;
	printf("escriba la base mayor:  ");
	scanf("%i",&B);
	printf("escriba la base mneor:  "); 
	scanf("%i", &b);
	printf("escriba la altura: "); 
	scanf("%i", &al);
	 area = ((B+b)*al)/2;
	 printf("el area del trapecio es: %i  ", area);
return 0;
}
