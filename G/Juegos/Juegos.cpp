#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>



void menu();
void juego1();
void juego2();
void juego3();
void juego4();
void numalea(int pc[50],int max1,int min1);
void Eleccion(int T1);
void posicion(int Num);

bool aciertoANTERIOR(char Let);
void regF(char Let);
void regA(char Let);
void Tab(char Let);
bool aciertoANTERIOR(char Let);

void regF(char Let);
void regA(char Let);
void Tab(char Let);



char PAL[100];
char ACERT[100];
char FAILS[100];
int intentos=10, nA=0, nF=0, longitud=0,point=0;
	
int opcion,numero;
	
main(){
	
	
	
	
	do
	{
		system("cls");
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
		                  	printf("\nIngrese un numero (0 para volver atras): ");
	                        scanf("%d",&numero);
	                while(numero!=0) 
	              {
	              	
	              	juego1();
	           
	                            	
	                
	                           	
	                }
			
			
			
			
			
			
			
			
				break;
			case 2: 
				
				
				  	printf("\nIngrese un numero (0 para volver atras): ");
	                        scanf("%d",&numero);
	                while(numero!=0) 
	              {
	                juego2();
	                           	
	                }
			
		
				break;
				
				
			case 3:
			
			
			
			
			
			  	printf("\nIngrese un numero (0 para volver atras): ");
	                        scanf("%d",&numero);
	                while(numero!=0) 
	              {
	                juego3();
	                          
	                }
			
			
				break;
				
				
				
				
			case 4:
				  	printf("\nIngrese un numero (0 para volver atras): ");
	                        scanf("%d",&numero);
	                while(numero!=0) 
	              {
	                juego4();
	                           
	                }
			
			
				break;	
				
				
				
				
			case 5: 
				printf("\nGracias vuelva pronto xd");
				break;
			default: 
				printf("\nNo corresponde a ninguna opcion del MENU");
				break;
		}
		
	}while(opcion!=5);

	
	
	
	
	
}
void menu()
{
		printf("\n\tElige el juego que deseas jugar: ");
		printf("\n\n1- Juego MAYMEN");
		printf("\n\n2- Juego ADIVINUM");
		printf("\n\n3- Juego WARCOINTS");
		printf("\n\n4- Juego AHORCADITO");
		printf("\n\n5- Salir");
		printf("\n\nIngrese la opcion: ");
}
void juego1(){
	
		int numeros[100];
	
	int i,p,n=1,j=1;
	srand (time(NULL));
	system ("cls");
	
printf("\nBienvenidos a MAYMEN");
		
		for(i=0;i<999;i++){
			numeros[0]=rand()% (1000-1);
		
		}
		
		printf("\n\nnumero secreto: %d",numeros[0]);
		
			
		while (n!=0 && j!=11 ){
			printf("\nIntento %d: ",j); scanf("%d",&n);
							
					
					if (numeros[0]>n){
						
						printf("El numero secreto es mayor y se encuentra entra %d y 999",n);
						
					}
					if (numeros[0]<n){
						
						printf("El numero secreto es menor y se encuentra entra %d y 1",n);
						
					}
				
					if (numeros[0]==n){
						
						
						
						if(j==1){
							p=10;
							
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
						}
						if(j==2){
							p=9;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
						}
						if(j==3){
							p=8;
						
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
					     	break;
						}
						if(j==4){
							p=7;
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
						    break; 
						}
						if(j==5){
							p=6;
							
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
						}
						if(j==6){
							p=5;
							
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
							}						
						if(j==7){
							p=4;
							
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
						}
						if(j==8){
							p=3;
							
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
						}
						if(j==9){
							p=2;
							
							printf("Acertaste! tu puntaje obtenido es: %d ",p);
							break;
						}
						
						
						if(j==10){
							p=1;
							printf("Acertaste! tu puntaje es %d",p);
							break;
						}
						
					
						}
										
						j++;
						if(j>10){
							
							printf("\n\nPerdiste :C El numero secreto es: %d y su puntaje es 0",numeros[0]);
							break;
							
						}
						
					}
				

	
	
	
	
	
	
	
	
	printf("\nIngrese el numero (0 para terminar): ");
	                        scanf("%d",&numero);
	
	
}




void posicion(int Num){
	

	
							
}




void juego2(){
	
		int Num, D,INT=1,p,i,j; 
	int FIN=0;
	system ("cls");
	printf("\nBienvenidos a ADIVINUM");
	
	srand(time(NULL));
	D=1000+rand()%(9999);
	
	
	while(FIN==0)
	{
		do {printf("Ingrese un numero de 4 cifras:  ");
		scanf("%d",&Num);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		   if(Num>999 && Num<10000){
			
			
			if(Num==D)
	             { 
		            printf("\nHas ganado, numero acertado!!");
		            
		            
		            
		            	if(INT==1){
							p=10;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==2){
							p=9;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==3){
							p=8;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==4){
							p=7;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==5){
							p=6;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==6){
							p=5;
							
							printf("\ntu puntaje obtenido es: %d ",p);
							}						
						if(INT==7){
							p=4;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==8){
							p=3;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						if(INT==9){
							p=2;
							
							printf("\ntu puntaje obtenido es: %d ",p);
						}
						
						
						
		            
		            
		            
		            
		            
		            FIN=2;
		            
		            
		            
	              }
	        else
	          {
		                  if(Num<D && FIN==0 && INT<11)
		                         {
			           printf("El numero es mayor");
		                         }
		                    else
		                         {
		            	printf("El numero es menor");
		                         }
	           }
	
	             INT++;
	             
	             
	             
	             
	        if(INT>0 && INT<11  && FIN==0)
	                             {
		                   printf("\n\n\nIntento %d ",INT);
		                   
		                            
		                   
	                             }
	
	
	
	         if(INT==11)
	         {
	         	        printf("\n\n\nHas perdido :( ");
	        	        printf("\nEl numero era %d ",D);
						printf("Tu puntaje es 0");	
	                  	FIN=1;
	            	    				
           	}
			
			
			
			
			
			
			
			
			
			
			
			
		      }
		
		
		
		
		
		}
		
		
		
		
		
		
		
		while(Num<999 && Num>10000);
			
		
		
	
	 } 
	 
	 printf("\nIngrese el numero 0 para terminar: ");
	                        	scanf("%d",&numero);
	
	
	
}







void numalea(int pc[50],int max1,int min1){
	
	int i;
	for(i=0; i<50; i++)
	{   
	   pc[0]=min1+rand()% (max1-1);
    }
}

void Eleccion(int T1)
{
	srand(time(NULL));
	T1=1+rand()%(10);
}

void juego3(){
	
	int numeros[50],max,min,i,j=1,pc[50],c,n=1,p,fin=0,T;
	
	
	system ("cls");
	printf("\nBienvenidos a WARCOINTS ");
	
	
	if(T%2==0)// si el numero aleatorio es par comienza el usuario
	{
		printf("\nComienza el Usuario");
		
	
	    srand (time(NULL));
		
		do{	for(i=0;i<1;i++)
			      {
			       numeros[0]=rand()% (51-10);
			      }
			
			}			
		while (numeros[0]<10);
	
	}
	else// si es impar comienza la pc
	{
		printf("\nComienza la computadora");
		
	do{	srand (time(NULL));
		
			for(i=0;i<1;i++)
			{
			   numeros[0]=rand()% (51-10);
			}
		}
				while (numeros[0]<10);
	}
		
		
			
		
		
		
			
        printf("\n\n Numero de monedas  es %d ", numeros[0]);
	
	
	
	    printf("\nIngrese la cantidad minima de monedas que se pueden retirar: "); 
	    scanf("%d",&min);
	    
	    printf("Ingrese la cantidad maxima de monedas que se pueden retirar: "); 
	    scanf("%d",&max);
	    
	
	
	
	while(fin==0){
		
	do{
		
	printf("\nIngrese la cantidad de monedas a eliminar: "); 
	scanf("%d",&n);
	
	if(n<min)
	{
		printf("\nERROR: se deben desapilar numeros mayorers a %d monedas. Volver a intentar!!!!",min);
	}
	else
	{
		if(n>max)
		{
			printf("\nERROR: se deben desapilar hasta %d monedas. Volver a intentar!!!!",max);
		}
		else
		{
			numeros[0]=numeros[0]-n;
	        printf("\nquedan %d monedas",numeros[0]);
	
		    if(numeros[0]==0 || (numeros[0]-min-1)==0){
		             p=5;
			         printf("\nGano!!! Puntaje obtenido %d",p);		
	                 j=0;  	
	                 fin=1;
					      }
		}
    
   }
		
} while(n<min || n>max);



	
	// computadora
	if (j!=0){
		
	    numalea(pc,max,min);
	    
        printf("\n la computadora saco %d",pc[0] );
							 
		numeros[0]=numeros[0]-pc[0];
		
	   	printf("\nquedan %d monedas",numeros[0]);
		
	    if(numeros[0]==0 || (numeros[0]-min-1)==0){
		              p=0;
			          printf("\nGano la computadora!! Puntaje obtenido %d",p);
                      j=0;  
					  fin=1;		
	            }
		
              }
	j++;
	}
	
	 	printf("\nIngrese el numero 0 para terminar): ");
	                        	scanf("%d",&numero);
	
}


void juego4(){
		printf("\nBienvenidos al HORCADITO");
		
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
		printf("\nIngrese el numero 0 para terminar): ");
	                        	scanf("%d",&numero);
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
	
	if(nA==longitud)
	{
		if(intentos==10)
		{
			point=50;
			printf("\nHas ganado");
			printf("\n Puntaje obtenido por el jugador %d",point);
		    intentos=0;
	   }
	   else
	   {
	   	  printf("\nHas ganado");
			printf("\n Puntaje obtenido por el jugador %d",point);
		    intentos=0;
	   }
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


