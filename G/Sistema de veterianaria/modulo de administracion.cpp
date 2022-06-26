#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct usuarios
{
	char usuario[10];
	char contrasenia[32];
	char apell_nomb[60];	
};


void menu();
void reg_vet(usuarios reg);
void condicionesUS(char usuario1[10], int LONG, usuarios reg);
void condicionesCNT(char contrasenia1[32], int LD, usuarios reg);
void atenciones_por_veterinarios();
main()
{
	usuarios reg;
	int opcion;
	do
	{
		menu();
		printf("\t\t         Seleccione una Opcion: ");
		scanf("%d", &opcion);
		
		
		
			switch(opcion)
			{
			
				case 1:
					
					reg_vet(reg);
					system("\n\npause");
					break;
				case 2: 
					
					
					
					break;
				case 3: atenciones_por_veterinarios();
					
					
					break; 
				case 4: //RAN();

					
					break;
				case 5:
					printf("\nGRACIAS POR UTILIZAR NUESTROS SERVICIOS\n\n");
					
					break;

				default:
					printf("\nNo corresponde a ninguna opcion del MENU\n\n");system("\n\npause");
					break;
			}
	}while(opcion!=5);

	printf("\n\n");
	system("pause");
}

void atenciones_por_veterinarios()
{
	int cont=0;
	
	for(int i=0;i<max_veterinarios;i++)
	{
        if(veterinarios[i].vacio == false)
		{
			cont=0;
			
            printf("\n VETERINARIO: \n");
            printf("Nombre: %s\n",usuarios[i].apell_nomb);
            printf("Matricula: %d\n",registro3[i].matricula);
            
            for(int j=0;j<max_turno;j++)
            {
            	if(turno[j].matricula_de_veterinario == veterinarios[i].matricula)
            	{
            		cont++;
            	}
            }
            
            printf("\n ATENCIONES: %d \n", cont);
                       
        }

    }
}

void menu()
{
		system("cls");
		printf("\n\n\n");
		printf("\t\t**                     Modulo de Administracion                 **\n");
		printf("\t\t******************************************************************\n");
		
		printf("\t\t                                                                  \n");
		printf("\t\t         1- Registrar Veterinario.					 			  \n");
		
		printf("\t\t                                                                  \n");
		printf("\t\t         2- Registrar Usuario Asistente.	                      \n");
		
		printf("\t\t                                                                  \n");                 
		printf("\t\t         3- Atenciones por Veterinarios.                          \n");
		
		printf("\t\t                                                                  \n");
		printf("\t\t         4- Ranking de Veterinarios por Atencion.  			      \n");
		
		printf("\t\t                                                                  \n");
		printf("\t\t         5- Cerrar la Aplicacion.                  	              \n");
		
		printf("\t\t                                                                  \n");
		printf("\t\t\t\t\t\t\t\t************************\n\n");
}


/*
RAN(){
	
	arch2=fopen("","r+b");
	fread(&turnos,sizeof())
	
	
	
	
	
	
}
*/




void reg_vet(usuarios reg)
{

	char usuario1[10];
	char contrasenia1[32];
	int LONG=0, LD=0;
	
	system("cls");
	printf("\nRegistrar Veterinario.");

	printf("\nIngrese el apellido y nombre del veterinario a registrar: ");
	_flushall();
	gets(reg.apell_nomb);
	
	printf("\nIngrese el nuevo usuario.");
	printf("\nEl usuario tiene que tener como minimo 6 caracteres y un maximo de 10 caracteres");
	printf("\nLos caracteres podr�n ser letras, n�meros y/o s�mbolos del conjunto {+,-,/,*,?,�,!,�}.");
	printf("\nA.Ser �nico para cada usuario registrado.");
	printf("\nB.Comenzar con una letra min�scula.");
	printf("\nC.Tener al menos 2 letras may�sculas.");
	printf("\nD.Tener como m�ximo 3 d�gitos.");
	printf("\n\nIngrese el usuario: ");
	_flushall();
	gets(usuario1);
	
	LONG=strlen(usuario1);
	
	for(int i=0; i<LONG; i++)
	{
		if(LONG>=6 && LONG<=10)
		{
			if(usuario1[0] == 'a'or'b'or'c'or'd'or'e'or'f'or'g'or'h'or'i'or'j'or
		                      'l'or'm'or'n'or'o'or'p'or'q'or'r'or's'or't'or'u'or
						      'v'or'w'or'x'or'y'or'z')
			{
				condicionesUS(usuario1, LONG, reg);
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
	
	printf("\nEscriva contrasenia");
	_flushall();
	gets(contrasenia1);
	
	LD=strlen(contrasenia1);
	
	for(int c=0; c<LD; c++)
	{
		if(LD>=6 && LD<=32)
		{
			condicionesCNT(contrasenia1, LD, reg);
		}
		else
		{
			printf("\nLa contrasenia ingresada en muy corta");
		}
	}
	
}



 //FUNCION QUE PERMITE VERIFICAR SI EL NOMBRE DE USUARIO RESPETA LAS CONDICIONES PLANTEADAS 
void condicionesUS(char usuario1[10], int LONG, usuarios reg)
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
				if(usuario1[i] == '+'or'-'or'/'or'*'or'?'or'�'or'!'or'�')
				{
					SIM=SIM+1;
				}
			}					  
	}
	
	if(MAY>=2 && SIM<=3)
	{
		printf("\nNombre de usuario guardado");
		usuario1=reg.usuario;
	}
	else
	{
		printf("\nEl nombre de usuario debe tener almenos 2 letras mayusculas y un maximo de 3 digitos");
	}
}


void condicionesCNT(char contrasenia1[32], int LD, usuarios reg)
{
	int MY=0, MN=0, N=0; 
	
	for(int c=0; c<LD; c++)
	{
		if(contrasenia1[c] == '.'or';'or','or':'or'�'or' ')
		{
			printf("\nERROR, la contraseia solo debe contener caracteres alfanumericos");
		}
		else
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
														  }
								}
								
		}
	}
	
	if(MY>=1 && MN>=1 && N>=1)
	{
		printf("\nContrasenia guardada");
		contrasenia1=reg.contrasenia;
	}
	else
	{
		printf("\nERROR la contrasenia debe contener al menos una letra may�scula, una letra min�scula y un n�mero");
	}
}




