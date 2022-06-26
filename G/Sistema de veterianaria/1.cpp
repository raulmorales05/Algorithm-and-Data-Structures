#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <conio.h> // getch																						
// Inicia opcion dos del menu principal (Raul

struct fecha
{
	int dia, mes, anio;																//estructura de fechas
};

struct atencion
{
	int at;																			//estructura de atencion por veterinario(es un contador) 
};

struct registro2 																	//estructura de mascotas MODULO2(opcion 2)
{
	
	char Domicilio[60];
	char localidad[60];
	char DNI[10];  //DNI 
	char ApeNom[60];  //Nombre y Apellido                                   
	struct fecha fecNacimiento;  //Fecha de nacimiento 
	float peso;
	char telefono[10];
	
	
	
	char evolucion[20];                                          // modulo 1 opcion 3-- evolucion de mascota(que solo puede hacerlo el veterinario) 
	

};


struct registro4												//MODULO 3 REGISTRAR VETERINARIO					
{
	
	
		char ApeNom[60];  //Nombre y Apellido 
		char matricula[10];  //matricula del veterinario
		char dni[10];  //DNI 
		char telefono[10];								
	
		struct atencion PorVeterinario;  											// (MODULO 3.opcion 3)--es un contador
	


};




struct registro3 												//MODULO2   TURNOS
{
	int matricula;//Matricula de Veterinario										//estructura de turnos(opcion3)
	char DNI[10];  //DNI 
	struct fecha fec;  //Fecha 
	char detalle[380];//Detalle de Atencion C
};

struct registro
{
	char usuario[20];
	char contra[10];
	char nom[20];
	struct registro2 animal;
	
	struct registro3 turnos	;
	
	struct registro4 veterinario;         //DATOS DE VETERINARIO     // (MODULO 3.opcion 3)--es un contador
		
};
	//struct de los turnos aparte													



//MODULO 1


void modulo1(int num,registro reg[20]);
void mostrarTurnos(int N1, registro reg[20]);


// funcion detalle
 void continuar();
 void menu();
 void menuRaulPrincipal(int num,registro reg[20]);
 void menuRaul();
 void menuRaul2();
 void menuRaulprimero();
 // dentro del menu1 va el menu de raull
 


int registrarUsuario(registro reg[20]);
void IniciarSesion(int num,registro reg[20]);


//MODULO 1 FUNCIONES
void mostrarTurnos(int N1, registro3 re[20]);


//MODULO2 FUNCIONES
void registroMascota();
void carga(int N1, registro reg[20]);

int Raulturnos(registro reg[20]);
void carga3(int N1, registro reg[20]);


// modulo 3

int Admin(registro reg[20]);
int registrarVet(registro reg[20]);

// funciones de condiciones
void condicionesCNT(char contrasenia1[32], int LD, registro reg[20], int i2);
void condicionesUS(char usuario1[10], int LONG, registro reg[20],int i2);

int N=0; // VARIABLE GLOBA DE NUMERO DE TURNOS
int vet=0,numcuentas; //VARIABLE GLOBAL DE NUMERO DE VETERINARIOS
	
void Main()
{
	int opcion,numero,cubo,N,numcuentas=0;
	float prome;
	registro reg[20];
	
	
	do
	{
		system("cls");	// CLS significa CLear Screen (limpiar pantalla)
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1: printf("\n ");    modulo1(numcuentas,reg);
				  
																								// parte del veterinario
				
			break;
			
			case 2:  menuRaulPrincipal(numcuentas,reg);
																								// parte del asistente
			break;
			
			case 3: numcuentas=Admin(reg);
			
																								//parte administrativa
			break;
		
			case 4: //if(opcion==5)
				printf("\nGracias por usar nuestros servicios..");
			break;
			
			default: if(opcion<=0 || opcion>4)	printf("\nNo corresponde a ninguna opcion del MENU");
				break;
		}
	
	}while(opcion!=4);
		
		
		
		
	}
main()
{
Main();

}



	
void menu()
{
	printf("\n\tMENU");
	printf("\n\n1- Modulo Consultorio Veterinario:");
	printf("\n\n2- Modulo del Asistente: ");
	printf("\n\n3- Modulo Administracion:");
	printf("\n\n4- Salir");
	printf("\n\nIngrese la opcion: ");
}

void modulo1(int num,registro reg[20])
{
	int opcion, numero;
	
	do
	{
		system("cls");
		menuRaulprimero();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:	printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                					
			while(numero!=0)
			{ 
			    printf("\n\n Inicie sesion>>> ");
				IniciarSesion(num , reg);            // iniciar sesion
	
	        	system ("pause");
                system("cls");
	                         
	               											
	        }                
			break;
					
			case 2: mostrarTurnos(N, reg);								//MOSTRAR TURNOS MODULO 1º						    	                      
	                
			break;
			
            case 3: printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                																//Listado de Atenciones por Veterinario y Fecha
	                while(numero!=0) 
	                {                 
	                }
            break;
					
			case 4: Main();
			
			break;
			
			case 5: printf("\nGracias vuelva pronto");
			
			break;	
					
			default: printf("\nNo corresponde a ninguna opcion del MENU");
			break;
		}
		
	}while(opcion!=5);

}





void menuRaulPrincipal(int num,registro reg[20]){
	 int opcion, numero;
	
	do
	{
		system("cls");
		menuRaul();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:	 printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                					
			while(numero!=0)
			{ 
			    printf("\n\n Inicie sesion>>> ");
				IniciarSesion(num , reg);            // iniciar sesion
	
	        	system ("pause");
	            system("cls");
	                         
	                	//sesionRaul();												
            }
			                
			break;
			
			
			case 2:  registroMascota();   			    	// regsitras Mascota
	                
			break;
			
				
			case 3:  N=Raulturnos(reg);
	                														     //regsitrar turno       
            break;
            
            case 4: printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                																//Listado de Atenciones por Veterinario y Fecha
	                while(numero!=0) 
	                {                 
	                }
            break;
					
			case 5: Main();
			
			break;	
				
			case 6: printf("\nGracias vuelva pronto");
			
			break;
					
			default: printf("\nNo corresponde a ninguna opcion del MENU");
			break;
		}
		
	}while(opcion!=6);

}
 																									//funcion de printf en los menus
void menuRaul()
{
	printf("Modulo Consultorio Veterinario");
	printf("\n==============================");
		
	printf("\n\n1- Iniciar Sesion ");
	printf("\n\n2- Registrar Mascota ");
	printf("\n\n3- Registrar Turno: ");
	printf("\n\n4- Listado de Atenciones por Veterinario y Fecha ");
	printf("\n\n5- Volver al menu");
	printf("\n\n6- Cerrar la aplicacion");
	printf("\n\nIngrese una opcion: ");
}
 
 
 
 
 void menuRaul2()
{
	printf("Modulo Consultorio Veterinario");
	printf("\n==============================");
		
	printf("\n\n1- Registrar Veterinario ");
	printf("\n\n2- Registrar Asistente ");
	printf("\n\n3- Atencion por Veterinario ");
	printf("\n\n4- Ranking ");
	printf("\n\n5- Volver al menu ");
	printf("\n\n6- Cerrar la aplicacion");
	printf("\n\nIngrese una opcion: ");
}
 
 
  void menuRaulprimero()
{
	printf("Modulo Consultorio Veterinario");
	printf("\n==============================");
		
	printf("\n\n1-Iniciar Sesion: ");
	printf("\n\n2- Visualizar lista de espera de turnos: ");
	printf("\n\n3- Registrar Evolucion de mascota: ");
	printf("\n\n4- Volver al menu ");
	printf("\n\n5- Cerrar la aplicacion");
	printf("\n\nIngrese una opcion: ");
}




void mostrarTurnos(int N1, registro reg[20])										//MODULO 1º MOSTRAR TURNOS
{
	int i;
	
	
	FILE *arch;
    arch=fopen("turnos.dat","ab");
    if (arch==NULL)
    exit(1);
	
	for(i=0; i<N1; i++)
	{
		printf("\nMatricula de Veterinario: ");
		printf("%i",reg[i].turnos.matricula);
		
		
		printf("\nD.N.I : ");
		puts(reg[i].turnos.DNI);
		
		printf("\nFECHA");
		printf("\nDIA: ");
		printf("%d",reg[i].turnos.fec.dia);
		
		printf("\nMES: ");
	    printf("%d",reg[i].turnos.fec.mes);
		
		printf("\nANIO: ");
		printf("%d",reg[i].turnos.fec.anio);
			
		printf("\nDetalle de atencion de la mascota: ");
	    puts(reg[i].turnos.detalle);
			
	    fwrite(&reg, sizeof(registro3), 1, arch);
        fclose(arch);
	}
}




    //Registrar mascota
	int Raulturnos(registro reg[20]){											//MODULO2 (opcion 3)


	printf("Ingrese cantidad de clientes: ");
	scanf("%d",&N);
	carga3(N,reg);
    return N;
}



void carga3(int N1, registro reg[20])
{
	int i;
	
	FILE *arch;
    arch=fopen("turnos.dat","ab");
    if (arch==NULL)
    exit(1);
	
	for(i=0; i<N1; i++)
	{
	    printf("\nMatricula de Veterinario: ");
		scanf("%i",&reg[i].turnos.matricula);
		
		_flushall();
		printf("\nD.N.I : ");
		gets(reg[i].turnos.DNI);
		
		printf("\nFECHA");
		printf("\nDIA: ");
		scanf("%d",&reg[i].turnos.fec.dia);
		
		printf("\nMES: ");
		scanf("%d",&reg[i].turnos.fec.mes);
		
		printf("\nANIO: ");
		scanf("%d",&reg[i].turnos.fec.anio);
		
		_flushall();
		printf("\nDetalle de atencion de la mascota: ");
		gets(reg[i].turnos.detalle);
		
		
	    fwrite(&reg, sizeof(registro3), 1, arch);
        fclose(arch);
    
	}
}






//FUNCION DEL MODULO3--- MENU
int Admin(registro reg[20])
{	
	int opcion, numero,num;
	
	do
	{
		system("cls");
		menuRaul2();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:	 printf("\nIngrese un numero (0 para volver atras): ");
	                 scanf("%d",&numero);
	                					
			
			
			while(numero!=0)
			{ 
			    vet= registrarVet(reg);							//REGISTRAR VETERINARIO			
	        }   
																             
			break;
			
	
			case 2: printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                															
	                while(numero!=0) 
	                {                
	   					num= registrarUsuario(reg);   // REGISTRAR USUARIO 
	                }							    
	                
			break;
			
				
			case 3: printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                															
	                while(numero!=0) 
	                {                
					
					             
	                }
	                														   
	                 
            break;
            
            case 4: printf("\nIngrese un numero (0 para volver atras): ");
	                scanf("%d",&numero);
	                															
	                while(numero!=0) 
	                {                
					
					 
	                }
            break;
					
			case 5:Main();
			
			break;
				
			case 6: printf("\nGracias vuelva pronto");
			
			break;
					
			default: printf("\nNo corresponde a ninguna opcion del MENU");
			break;
		}
		
	}while(opcion!=6);

	
	
	return num;
}








 // OPCION 1 Y 2 DEL MODULO 3
 
int registrarUsuario(registro reg[20])
{
    int n=0,i=0, LONG=0, LD=0;
    char usuario1[10];
	char contrasenia1[32];
	
    system("cls");
    
    printf("\nIngrese el nuevo usuario.");
	printf("\nEl usuario tiene que tener como minimo 6 caracteres y un maximo de 10 caracteres");
	printf("\nLos caracteres podrán ser letras, números y/o símbolos del conjunto {+,-,/,*,?,¿,!,¡}.");
	printf("\nA.Ser único para cada usuario registrado.");
	printf("\nB.Comenzar con una letra minúscula.");
	printf("\nC.Tener al menos 2 letras mayúsculas.");
	printf("\nD.Tener como máximo 3 dígitos.");
	
	printf("Numero de personas que ingresaran sus datos: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("\nNombre y apellido:\n");
		scanf("%d",&reg[i].nom);
		
		
		printf("\nNumero  %i\n",i);
		_flushall();
		printf("\nUSUARIO: ");
		gets(usuario1);   //cambio de variable ya que todabia no se debe guardar
		
		LONG=strlen(usuario1);
		
		for(int k=0; k<LONG; k++) //verifica nombre de usuario
    	{
		    if(LONG>=6 && LONG<=10)
		    {
		    	if(usuario1[k] == 'a'or'b'or'c'or'd'or'e'or'f'or'g'or'h'or'i'or'j'or
		                      'l'or'm'or'n'or'o'or'p'or'q'or'r'or's'or't'or'u'or
						      'v'or'w'or'x'or'y'or'z')
			    {
			    	condicionesUS(usuario1, LONG, reg, i);
			    }
		    	else
			    {
				    printf("\nERROR el nombre debe iniciar con una letra minuscula");
			    }
		    }
		    else
		    {
		    	if(LONG<=5 or LONG>11)
		    	{
				printf("\nEl nombre de usuario ingresado debe tener entre 6 y 10 caracteres");
			    }
	    	}
	    }
		
		
		
		
		
		_flushall();
		printf("\nContrasena: ");
		gets(contrasenia1);     //lo mismo que en usuario
		
	    LD=strlen(contrasenia1);
	
	    for(int c=0; c<LD; c++)
	    {
		    if(LD>=6 && LD<=32)
		    {
			    condicionesCNT(contrasenia1, LD, reg, i);
		    }
		    else
		    {
			    printf("\nLa contrasenia ingresada en muy corta");
		    }
	    }
		
	} 
	
	numcuentas=Admin(reg);
	
 	return i+1;
 }
 
 
 //OPCION 2 DEL MODULO 3 REGISTRAR VETERINARIO
 int registrarVet(registro reg[20])
 {
	int n,i;
	
	FILE *arch;
    arch=fopen("Veterinarios.dat","ab");
    if (arch==NULL)
    exit(1);
	printf("Numero de vetrinarios por registrar: ");
	scanf("%d",&n);
	

	for(int i=0; i<n; i++)
	{
		system("cls");
		
		_flushall();
		printf("\nNombre: ");
		gets(reg[i].veterinario.ApeNom);
		
		_flushall();
		printf("\nMatricula: ");
		gets(reg[i].veterinario.matricula);
		
		printf("\nDni:\n");
		gets(reg[i].veterinario.dni);
	
		printf("\nTelefono:\n");
		gets(reg[i].veterinario.telefono);
	
	
	    fwrite(&reg, sizeof(registro3), 1, arch);
        fclose(arch);
        continuar();
		
	}
	
 	numcuentas=Admin(reg);
 	
 	return i+1;
 }
 
		
// AQUI TERMINA EL MODULO 3



//COMIENZA EL MODULO 2
void IniciarSesion(int num,registro reg[20])       //COORUPTUS SIN RESOLVER   ESTADO NO EJECUTA EL FOR 
{
	int i=0,j=0;
	char usuario[100];
	char contrasena[100];
	num=num+1;
					
                    //va un for, dentro un if
		
					for(i=0; i<3;i++)
					{	
					
						_flushall();	
							printf("usuario: ");
							gets(usuario);	
														
						_flushall();																									
							printf("contrasena: ");
							gets(contrasena);
									
						for(j=0;j<num;j++)
						{
							if (i<3){
														
												if (strcmp(reg[j].usuario, usuario)==0 && strcmp(reg[j].contra, contrasena)==0){
												
													printf("\n*** Ingreso correctamente ***\n");
							 					
							 				    	//volver al menu principal
							 					
						                            system("cls");	 
												    printf("\n Bienvenido Sr/a ");
													 
											    	system("pause");
							 						
							                    	menuRaulPrincipal(num,reg);  
							                   
												    break;
						    	
							                                                                        }
						 
													 							
						
						}
							
							else{
									printf("\tusuario y/o contrasenia no registrado\n");
								continue;
								
							}
																																							
		 					
					}
					
				}
		
	
	
		
//programa

}


void registroMascota()
{
	registro reg[40];
	int N;
	
	printf("REGISTRO DE MASCOTAS\n Ingrese cantidad de clientes con mascota: ");
	scanf("%d",&N);
	
	carga(N, reg);
}


void carga(int N1, registro reg[20])															//carga de opcion 2(mascotas)
{
	int i;
	
	
	 FILE *arch;
    arch=fopen("mascotas.dat","ab");
    if (arch==NULL)
    exit(1);
	
	for(i=0; i<N1; i++)
	{
		_flushall();
		printf("\nD.N.I : ");
		gets(reg[i].animal.DNI);
		
		printf("\nNombre y Apellido: ");
		gets(reg[i].animal.ApeNom);
		
		printf("\nDomicilio: ");
		gets(reg[i].animal.Domicilio);
		
		printf("\nLocalidad: ");
		gets(reg[i].animal.localidad);
		
		
		printf("\nFECHA");
		printf("\nDIA: ");
		scanf("%d",&reg[i].animal.fecNacimiento.dia);
		
		printf("\nMES: ");
		scanf("%d",&reg[i].animal.fecNacimiento.mes);
		
		printf("\nANIO: ");
		scanf("%d",&reg[i].animal.fecNacimiento.anio);
		
		printf("\nPeso de la mascota: ");
		scanf("%f",&reg[i].animal.peso);
		
		
		
		printf("\nTelefono: ");
		gets(reg[i].animal.telefono);
		
	    fwrite(&reg, sizeof(registro2), 1, arch);
        fclose(arch);
        continuar();
	}
}
 
void continuar()
{
    printf("Presione una tecla para continuar\n\n");
}








 //FUNCION QUE PERMITE VERIFICAR SI EL NOMBRE DE USUARIO RESPETA LAS CONDICIONES PLANTEADAS 
void condicionesUS(char usuario1[10], int LONG, registro reg[20], int i2)  //ese registro cambiar
{
	int MAY=0, SIM=0;
	
	for(int i=0; i<LONG; i++)
	{
		if(usuario1[i] == 'A'or'B'or'C'or'D'or'E'or'F'or'G'or'H'or'I'or'J'or
		                  'L'or'M'or'N'or'O'or'P'or'Q'or'R'or'S'or'T'or'U'or
						  'V'or'W'or'X'or'Y'or'Z')
						 
			{
				MAY=MAY+1;
	    	}
			else
			{
				if(usuario1[i] == '+'or'-'or'/'or'*'or'?'or'¿'or'!'or'¡')
				{
					SIM=SIM+1;
				}
			}					  
	}
	
	if(MAY>=2 && SIM<=3)
	{
		printf("\nNombre de usuario guardado %i",i2);
		usuario1=reg[i2].usuario;
	}
	else
	{
		printf("\nEl nombre de usuario debe tener almenos 2 letras mayusculas y un maximo de 3 digitos");
	}
}


//FUNCION QUE PERMITE VERIFICAR SI LA CONTRASEÑA RESPETA LAS CONDICIONES PLANTEADAS 
void condicionesCNT(char contrasenia1[32], int LD, registro reg[20], int i2) //cambiar reg en caso de estar mal
{
	int MY=0, MN=0, N=0; 
	
	for(int c=0; c<LD; c++)
	{
	    if(contrasenia1[c] == 'A'or'B'or'C'or'D'or'E'or'F'or'G'or'H'or'I'or'J'or
		            'L'or'M'or'N'or'O'or'P'or'Q'or'R'or'S'or'T'or'U'or
	     	        'V'or'W'or'X'or'Y'or'Z')
			        {
			        	MY=MY+1;
					}
					else
					{
						if(contrasenia1[c] == 'a'or'b'or'c'or'd'or'e'or'f'or'g'or'h'or'i'or'j'or
		                            'l'or'm'or'n'or'o'or'p'or'q'or'r'or's'or't'or'u'or
					                'v'or'w'or'x'or'y'or'z')
						            {
						            	MN=MN+1;
									}
									else
								    { 
									    if(contrasenia1[c] == '1'or'2'or'3'or'4'or'5'or'6'or'7'or'8'or'9'or'0')
										{
									  		N=N+1;
										}
										else
										{
											if(contrasenia1[c] == '.'or';'or','or':'or'´'or' ')
		                                    {
			                                    printf("\nERROR, la contraseia solo debe contener caracteres alfanumericos");                    
		                                    }
										}
									}
					}
	}
	
	if(MY>=0 && MN>=0 && N>=0)
	{
		printf("\nContrasenia guardada");
		contrasenia1=reg[i2].contra;
		system("pause");
	}
	else
	{
		printf("\nLa contrasenia debe contener al menos una letra mayuscula, una letra minuscula y un numero");
		system("pause");
	}
}
	



