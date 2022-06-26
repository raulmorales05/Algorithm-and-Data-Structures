#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
typedef char cadena30[31];
	
cadena30 vector[50];

char palabra[31];

int  i, N, comp, mayor=0, posi, aux;

printf("Ingrese la palabra: ");
gets(palabra);
comp=strcmp(palabra,"final");
i=0;

while(comp!=0)
{
	strcpy(vector[i],palabra);
	aux=strlen(vector[i]);
	
	if(aux>mayor)
	{
		mayor=aux;
		posi=i;
	}
	i++;
	
	printf("Ingrese la palabra: ");
	gets(palabra);
	comp=strcmp(palabra,"final");
}
N=i;

for(i=0; i<N; i++)
{
	_flushall();
	printf("\nElementos del vector: ");
	puts(vector[i]);
}

printf("\nLa cantidad de palabras ingresadas antes del final son: %d",N);
printf("\nLa palabra mas larga es: %s",vector[posi]);

}

