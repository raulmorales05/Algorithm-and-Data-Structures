#include<stdio.h>
#include<stdlib.h>
# include <iostream>
#include <ctime>
#include <conio.h>

main()
{
	srand(time(0));

	char** palabras = NULL;
	char palabraactual[100];
	char archivo1[30];
	char cadena[100];
	char d;
	int cantidadpalabras = 40;
	int maximointentos;
	int tam = 0;
	int contador = 0;
	int longi;
	int msgboxID;
	
	bool load = false;
	
	int opcionM; //Para menu principal
	int llamar = 1; // llama al ingreso de palabras

	do
	{
		//para mostrar el "_" para cada letra de cada palabra
		for(int i=0; i<100; i++)
		{
			cadena[i] = '2';
		}

		
		
		switch ( opcionM )
		{
			// llamamos a la funcion de ingreso de palabras
			case 1:
				
				Ingreso_palabra( llamar );
				break;

			// Empieza el Juego
			case 2:
				//inicializado de variables
				d = NULL;
				cadena[100] = NULL;
				palabras = NULL;
				palabraactual[100] = NULL;
				archivo1[30] = NULL;
				tam = 0;
				contador = 0;
				longi = 0;
				
				msgboxID = MessageBox(NULL,TEXT("Solo utiliza las las letras de la A - Z sin ENTER"),TEXT("INFORMACION"),MB_ICONASTERISK | MB_OK );
				// cargamos el archivo de texto
				if (!load)
				{
					if (!archivo1[0])
					strcpy(archivo1,"ahorcado.txt");
				}
				
				//Cargamos la palabra que se escoge aleatoriamente
				palabras = cargar_palabra(archivo1,palabraactual,cantidadpalabras); 
			    
				while(true)
					if(palabraactual[tam])
						tam++;
				else
					break;

				maximointentos = 6; // Inicializamos los inteneto 
				
				//Empieza y corremos el juego para el Ingreso de palabras
				do
				{
					system("color f0");
					tranca();// la base del ahorcado
					
					gotoxy(5,23);cout <<"Le Quedan " << maximointentos << " intentos";
					
					// llamamos la funcion que nos separa la palabra
					valor_palabra(cadena,tam); 
					
					//con esta separamos la pabra para no limpiar la pantalla y no se nos amontonen las letras
					longi = strlen(palabraactual);
					for (int P=1; P<=longi; P++)
					{
						printf(" ");
					}
					// Nos pide ingresar una letra
					printf("Introduzca una letra: ");
					d = getch(); // solo toma un caracter, alfanumerio, un espacio o un enter
					d = toupper(d); // nos convierte la letra seleccionada a mayusculas 
					gotoxy(27,3);cout << d; // motramos en pantalla el caracter seleccionado
					
					if(!nueva_letra(palabraactual,cadena,d))
						maximointentos--;
					contador = 0;
					
					for(int pp=0; pp<tam; pp++)
						if(cadena[pp] == palabraactual[pp])
						contador++;	
			
					if(contador == tam)
					{
						
						printf("H A S  G A N A D O !",palabraactual);
						system("pause");
						break;
					}
					
					//Muestra cada parte del cuerpo
					if (maximointentos == 5)
						cabeza();
					if (maximointentos == 4)
						cuerpo();
					if (maximointentos == 3)
						brazo_derecho();
					if (maximointentos == 2)
						brazo_izquierdo();
					if (maximointentos == 1)
						pie_derecho();
					if (maximointentos == 0)
						pie_izquierdo();
					
				}while( maximointentos > 0 );// FIN DEL WHILE

				if( maximointentos <= 0 )
				{
					cout << "H A S  P E R D I D O !" << endl;
					cout <<  " :   0   0   ; " << endl;
					cout <<  "  \\  (--)   /  " << endl;   
					cout << "La palabra era: " << palabraactual << endl;
					system("pause");
				}

				for( int i=0; i<100 ;i++)
				{
					cadena[i]='2';
				}
				break;

			case 3:
				break;

			default:
				system("cls");
				gotoxy(28,12);cout << "ERROR. opcion no valida" << endl;
				getch();
				break;
		} //fin del switch
	}while( opcionM != 3 );

}


