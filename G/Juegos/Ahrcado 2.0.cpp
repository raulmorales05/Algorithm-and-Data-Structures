#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

bool aciertoANTERIOR(char Let);
void regF(char Let);
void regA(char Let);
void Tab(char Let);



char PAL[100];
char ACERT[100];
char FAILS[100];
int intentos=10, nA=0, nF=0, longitud=0,point=0;

main()
{
char Let;

printf("\nIntroduzca la palabra a adivinar: ");
scanf("%s",&PAL);
strupr(PAL);
fflush(stdin);
system("cls");
longitud=strlen(PAL);

while(intentos>0){
	
	printf("\nIntroduzca una letra: ");
	scanf("%c",&Let);
	Let=toupper(Let);	Tab(Let);
	fflush(stdin);

	
}




}


void Tab(char Let)
{
	bool acierto=false;
	
	for(int i=0; i<longitud; i++)
	{
		if(PAL[i]==Let)
		{
		
			
			printf("%c",Let);
			acierto=true;
		
			regA(Let);
		}
		else
		{
			if(aciertoANTERIOR(PAL[i]))
			{
				printf(" %c ",PAL[i]);
			}
			else
			{
				printf(" _ ");
			}
		}
	}
	
	if(!acierto)
	{
		regF(Let);
	}
}


void regA(char Let)
{
	ACERT[nA]=Let;
	nA++;
		if(intentos==10)
	{
	    printf("Su puntaje es de 50");
	}
	if(nA==longitud)
	{
			printf("\nHas ganado");
			printf("\n Puntaje obtenido por el jugador %d",point);
		intentos=0;
	
	}
	
	
}


void regF(char Let)
{
	FAILS[nF]=Let;
	nF++;
	intentos--;
	

	
	
		if(intentos==9)
	{
		printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza",intentos);
		point=50-(2*1);
	}
	else
	{
		if(intentos==8)
		{
			printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco",intentos);
			point=50-(2*2);
		}
		else
		{
			if(intentos==7)
			{
				printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo",intentos);
				point=50-(2*6);
			}
			else
			{
				if(intentos==2)
				{
					printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho",intentos);
					point=50-(2*4);
				}
				else
				{
					if(intentos==5)
					{
						printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho",intentos);
						point=50-(2*5);
					}
					else
					{
						if(intentos==4)
						{
							printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho- mano izquierda",intentos);
						    point=50-(2*6);
						}
						else
						{
							if(intentos==3)
							{
									printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho- mano izquierda- mano derecha",intentos);
						            point=50-(2*7);
							}
							else
							{
								if(intentos==2)
								{
									printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho- mano izquierda- mano derecha",intentos);
						            point=50-(2*8);
								}
								else
								{
									if(intentos==1)
									{
										printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho- mano izquierda- mano derecha- pie izquierdo",intentos);
						                point=50-(2*9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	
	
	if(intentos==0)
	{
		printf("\nFallaste, quedan %d intentos. Estado del muñeco: cabeza-tronco-brazo izquierdo- brazo derecho- mano izquierda- mano derecha- pie izquierdo- pie derecho",intentos);
		printf("\nHas perdido y su puntaje es 0");
		printf("\nLa palabra era: %s\n",PAL);
	}
}


bool aciertoANTERIOR(char Let)
{
	for(int i=0; i<nA;i++)
	{
		if(ACERT[i]==Let)
		{
			return true;
		}
	}
	return false;
}
