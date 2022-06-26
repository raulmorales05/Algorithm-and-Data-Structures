/*? Una empresa lleva los datos de sus empleados en un arreglo (vector), tener en cuenta que la empresa puede
tener un número máximo de 20 empleados. Los datos que se registran tiene la siguiente información.
? Apellido y Nombre
? Domicilio
? Fecha de Ingreso (anidar) //el año tiene 4 dígitos.
? Fecha de Proceso (anidar) //el año tiene 4 dígitos.
? Antigüedad (Se calcula durante el ingreso de los datos Fecha de Proceso – Fecha de Ingreso).


: definir las estructuras necesarias para
a) Ingresar los datos de los empleados hasta que se decida terminar el ingreso o se hayan cargado todos los empleados. (para continuar se deberá preguntar si continua o no)
b) Terminada la carga, calcular y mostrar el promedio de Antigüedad de todos los empleados. Usar una función.
c) Ingresado un determinado apellido y nombre y por medio de una función Listar por pantalla su Antigüedad. En
caso de no existir el empleado mostrar un mensaje de error.
d) Listar todos los empleados de la empresa.
*/
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 int cargar (datos empleados[19],float &tot);
 void promedio(int n,float tot);

struct fecha

 {

 int dia, mes, anio;

 };
 struct fechap

 {

 int diap, mesp, anio;

 };

struct datos{
	char nombre;
	char dom;
	struct fecha fech;
	struct fecha proceso;
	int antiguedad;// resta del año del proceso menos el ingreso 
	
};empleados[19];

main(){
	int n;
	float tot;
	
	n=cargar(empleados);
	promedio(n,tot);
	
	
}
int cargar (datos empleados[19],float &tot){
	char nom,i;
	
	printf("\nIngrese el nombre del empleado: ");
     gets(nom);


 while(nom!=0)

 {
	    empleados[i].nombre=nom;
		printf("\nIngrese el domicilio: ");
		cin.getline(empleado[i].dom,20,'/n');
		
			printf("\nIngrese la fecha de ingreso: ");
		cin.getline(empleado[i].fech.dia,20,'/n');
		cin.getline(empleado[i].fech.mes,20,'/n');	
		cin.getline(empleado[i].fech.anio,20,'/n');	
		
		printf("\nIngrese la fecha de proceso: ");
		cin.getline(empleado[i].proceso.dia,20,'/n');
		cin.getline(empleado[i].proceso.mes,20,'/n');	
		cin.getline(empleado[i].proceso.anio,20,'/n');	
		
	antiguedad= empleado[i].proceso.anio-empleado[i].fech.anio;
	tot+=antiguedad;
	
	
	printf("\nIngrese el nombre del empleado: ");
	printf("\nSi no desea continuar ingrese un 0: ");
     gets(nom);    
	
	i++;
}
return i;
}
void promedio(int n,float tot){
	int prom;
	prom=tot/n;
		printf("\npromedio de edad de los empleados es: ");
     scanf("%.f",prom);
	
}


