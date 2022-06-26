#include<stdio.h>
#include<string.h>

void mostrar(char cadena[101]);
int longitud(char cadena[101]);

main()
{
	char cadena[101];
	int lon;
	
printf("Ingrese nombres separados por una coma: ");
	_flushall();
gets(cadena);

printf("\nLa lista de los nombres ingresados es:" );
mostrar(cadena);

lon=longitud(cadena);
printf("\nLa longitud de la cadena es: %d",lon);

	
}

void mostrar(char cadena[101])
{
	int i=0;
	
	while(cadena[i]!='\0')
	{
		if(cadena[i]!=',')
		{
			printf("%c",cadena[i]);
		}
		else
		{
			printf("\n");
		}
		i++;
	}
}
 int longitud(char cadena[101])
 {
 	int i=0;
 	while(cadena[i]!='\0')
 	{
 		i++
 	}
 	return i;
 }
