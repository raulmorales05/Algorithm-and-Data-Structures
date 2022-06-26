#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main(){
	
	
	typedef char cadena[30];
	
	cadena nombres[40],palabra;
	int i, n, comp;
	FILE *fp;
	fp=fopen("ejemplok4","w");
	
	printf("\n ingrese la palabra: ")	;
	gets(palabra);
	comp=strcmp(palabra, "final");
	i=0;
	while(comp!=0){
		
		strcpy(nombres[i],palabra);
		fprintf(fp,palabra,"\n"); // se graba en un archivo de texto y el \n produce efecto em el archivo 
		i++;
		printf("\n ingrese la palabra:");
		gets(palabra);
		comp=strcmp(palabra,"final");	
		
		
	}
	n=i;
	printf("\n se han cargado %d palabras al vector\n\n",n);
	for(i=0;i<n;i++){
		printf ("\n Listado del vector: ");
		puts(nombres[i]);
			
	}
	printf("\n\n");
	system("pause");
	
	
}
