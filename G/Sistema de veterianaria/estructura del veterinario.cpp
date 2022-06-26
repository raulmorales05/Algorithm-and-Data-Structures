#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <conio.h> // getch																						
// Inicia opcion dos del menu principal (Raul


struct atencion
{
	int at;																			//estructura de atencion por veterinario
};


struct registro3																	//estructura de mascotas (opcion 2)
{
	
	
		char ApeNom[60];  //Nombre y Apellido 
		char matricula[10];  //matricula del veterinario
		char dni[10];  //DNI 
		char telefono[10];								
	
		struct atencion PorVeterinario;  											//Fecha de nacimiento (MODULO 3.opcion 3)
	


};


struct registro
{
	char usuario[20];
	char contra[10];
	char nom[20];

	struct registro3 veterinario;
	};



int registrarVet(registro reg[20]);

main()
{
	int vet; // numero de veterinarios
	registro reg[20];
	
    vet= registrarVet(reg);
    	
  
    
    
    
    
    
   
    
    
}
int registrarVet(registro reg[20]){
 	
 		int n,i;
	
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
	
	
		
		
	}
	
 	
 	
 	return i+1;
 }

