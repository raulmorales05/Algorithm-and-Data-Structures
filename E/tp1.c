/*Una empresa tiene dos empleados los cuales reciben en sus cuentas de correos diferentes email con
frases de una longitud no superior a 80 caracteres cada frase. Cada cierto número de frases estas deben ser
guardadas en un archivo de texto sin perder lo que se tenía ya guardado en el archivo.


Se Pide: que por medio de un menú se pueda realizar lo siguiente
a- Al abrir el sistema (programa) se deben crear los archivos “Archivo1.txt” y “Archivo2.txt”
b- Crear y Guardar la/s frase/s recibida por el empleado José Luis en el fichero “Archivo1.txt”. La/s
frase/s son ingresada por teclado.
c- Crear y Guardar las frases recibida por la empleada María Emilia en el fichero “Archivo2.txt”.
La/s frase/s son ingresada por teclado.


d- Al final del día ambos archivos son guardados en un único fichero. Deberá combinar ambos archivos mezclados, en un nuevo fichero “Frases.txt”. Es decir, una frase del Archivo1.txt y una del Archivo2.txt, otra del archivo1 otra del archivo2 y así sucesivamente.
e- Mostrar las frases del archivo de José Luis en minúscula.
f- Mostrar las frases del archivo de María Emilia en Mayúscula.
g- Mostrar las frases del Archivo combinado. Donde cada palabra deberá comenzar en mayúscula y el
resto de cada palabra en minúscula.
h- Al salir del sistema, Los archivos, Archivo1.txt y Archivo2.txt, creados deberán ser eliminados físicamente.
Nota: Tener en cuenta que para los ítems d, e, f existen funciones que realizan tales operaciones. También
se puede hacer de manera secuencial, analizando cada palabra. Deberán elegir que aplicar. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct {
    
    char descripcion[41];
    
} tproducto;


void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}

void crear()
{
    FILE *arch;
    arch=fopen("archivo.dat","wb");
    if (arch==NULL)
        exit(1);
    fclose(arch);
    //continuar();
}


void cargar()
{
    FILE *arch;
    arch=fopen("archivo.dat","ab");
    if (arch==NULL)
        exit(1);
    tproducto producto;
    
    
    printf("Ingrese la frase: ");
    gets(producto.descripcion);
   
    fwrite(&producto, sizeof(tproducto), 1, arch);
    fclose(arch);
   // continuar();
}

void listado()
{
    FILE *arch;
    arch=fopen("archivo.dat","rb");
    if (arch==NULL)
        exit(1);
    tproducto producto;
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch))
    {
        printf("%i %s %0.2f\n",  producto.descripcion);
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    fclose(arch);
    //continuar();
}














void crear2()
{
    FILE *arch2;
    arch2=fopen("archivo2.dat","wb");
    if (arch2==NULL)
        exit(1);
    fclose(arch2);
    //continuar();
}


void cargar2()
{
    FILE *arch2;
    arch2=fopen("archivo2.dat","ab");
    if (arch2==NULL)
        exit(1);
    tproducto producto2;
   
    printf("Ingrese la frase: ");
    gets(producto2.descripcion);
    
    fwrite(&producto2, sizeof(tproducto), 1, arch2);
    fclose(arch2);
    //continuar();
}

void listado2()
{
    FILE *arch2;
    arch2=fopen("productos.dat","rb");
    if (arch2==NULL)
        exit(1);
    tproducto producto2;
    fread(&producto2, sizeof(tproducto), 1, arch2);
    while(!feof(arch2))
    {
        printf("%i %s %0.2f\n",  producto2.descripcion);
        fread(&producto2, sizeof(tproducto), 1, arch2);
    }
    fclose(arch2);
    //continuar();
}




int main()
{
    int opcion;
    do {
        printf("1 - Crear un archivo binario llamado \"archivo1.dat\"\n");
        printf("2 - Carga de registros \n");
        printf("3 - Listado completo \n");
        
        printf("4 - Crear un archivo binario llamado \"archivo2.dat\"\n");
        printf("5 - Carga de registros \n");
        printf("6 - Listado completo \n");
        printf("7 - Finalizar\n\n");
        printf("Ingrese su opcion:");
        scanf("%i",&opcion);
        switch (opcion) {
            case 1:crear();
                   break;
            case 2:cargar();
                   break;
            case 3:listado();
                   break;
            case 4:crear2();
                   break;
            case 5:cargar2();
                   break;
            case 6:listado2();
                   break;
        }
    } while (opcion!=7);
    return 0;
}
