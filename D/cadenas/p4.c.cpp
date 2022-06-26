#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void LETRAS(char POE[200], int res1);
void DIG(char POE[200], int res1);
void SIGP(char POE[200], int res1);
void ESP(char POE[200], int res1);

main()
{
	char POE[200];
	int res;
	
	printf("Ingrese su Poema:\n");
	gets(POE);
	res=strlen(POE);
	
	LETRAS(POE,res);
	DIG(POE,res);
	SIGP(POE,res);
	ESP(POE,res);
}


void LETRAS(char POE[200], int res1)
{
	int i, VOCAL=0, CONS=0, MAY=0, MIN=0;
	 
    for(i=0; i<res1; i++)
    {
    	if(POE[i]=='a' or POE[i]=='e' or POE[i]=='i' or POE[i]=='o' or POE[i]=='u')
    	{
    		VOCAL++;
    		MIN++;
		}
		else
		{
			if(POE[i]=='A' or POE[i]=='E' or POE[i]=='I' or POE[i]=='O' or POE[i]=='U')
			{
				VOCAL++;
				MAY++;
			}
			else
			{
				if(POE[i]=='b' or POE[i]=='c' or POE[i]=='d' or POE[i]=='f' or POE[i]=='g' or POE[i]=='h' 
		     	or POE[i]=='j' or POE[i]=='k' or POE[i]=='l' or POE[i]=='m' or POE[i]=='n' or POE[i]=='p'
				or POE[i]=='q' or POE[i]=='r' or POE[i]=='s' or POE[i]=='t' or POE[i]=='v' or POE[i]=='w'
				or POE[i]=='x' or POE[i]=='y' or POE[i]=='z')
							{
			                	CONS++;
			                	MIN++;
			                }
			                else
			                {
			                	if(POE[i]=='B' or POE[i]=='C' or POE[i]=='D' or POE[i]=='F' or POE[i]=='G' or POE[i]=='H' 
		                        	or POE[i]=='J' or POE[i]=='K' or POE[i]=='L' or POE[i]=='M' or POE[i]=='N' or POE[i]=='P'
			                    	or POE[i]=='Q' or POE[i]=='R' or POE[i]=='S' or POE[i]=='T' or POE[i]=='V' or POE[i]=='W'
				                    or POE[i]=='X' or POE[i]=='Y' or POE[i]=='Z')
				                    {
				                    	CONS++;
				                    	MAY++;
									}
							}
			}
		}
	}
		printf("CANTIDAD DE VOCALES: %d",VOCAL);
		printf("\nCANTIDAD DE CONSONANTES: %d",CONS);
		printf("\nCANTIDAD DE MAYUSCULAS: %d",MAY);
		printf("\nCANTIDAD DE MINUSCULAS: %d",MIN);
}


void DIG(char POE[200], int res1)
{
	int DIGITOS=0;
	
	for(int i=0; i<res1; i++)
	{
		switch(POE[i])
		{
			case '0': DIGITOS++;
			break;
			case '1': DIGITOS++;
			break;
			case '2': DIGITOS++;
			break;
			case '3': DIGITOS++;
			break;
			case '4': DIGITOS++;
			break;
			case '5': DIGITOS++;
			break;
			case '6': DIGITOS++;
			break;
			case '7': DIGITOS++;
			break;
			case '8': DIGITOS++;
			break;
			case '9': DIGITOS++;
			break;
		}
	}
	printf("\nCANTIDAD DE DIGITOS: %d", DIGITOS);
}


void SIGP(char POE[200], int res1)
{
	int SIGNOS=0;
	
	for(int i=0; i<res1; i++)
	{
		switch(POE[i])
		{
			case '.': SIGNOS++;
			break;
			case ';': SIGNOS++;
			break;
			case ',': SIGNOS++;
			break;
			case ':': SIGNOS++;
			break;
			case '-': SIGNOS++;
			break;
			case '/': SIGNOS++;
			break;
			case '!': SIGNOS++;
			break;
			case '¡': SIGNOS++;
			break;
			case '?': SIGNOS++;
			break;
			case '¿': SIGNOS++;
			break;
		}
	}
	printf("\nCANTIDAD DE SIGNOS DE PUNTUACION: %d",SIGNOS);
}


void ESP(char POE[200], int res1)
{
	int ESPACIO=0; 
	
	for(int i=1; i<res1; i++)
	{
		if(POE[i]==' ')
		{
			ESPACIO++;
		}
	}
	printf("\nCANTIDAD DE ESPACIOS: %d",ESPACIO);
}


